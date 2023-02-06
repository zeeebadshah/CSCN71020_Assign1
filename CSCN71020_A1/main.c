#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void sub();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);
	printf("Welcome");

	switch (inputNum)
	{
	case 1:
		add();
	case 2:
			sub();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, num3, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	printf("Enter the third value:");
	scanf_s("%lf", &num3);
	result = num1 + num2 + num3;
	printf("%lf + %lf + %lf = %lf\n", num1, num2, result);
}
void sub() {
	double num1, num2, num3, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	printf("Enter the third value:");
	scanf_s("%lf", &num3);
	result = num1 - num2 - num3;
	printf("%lf - %lf - %lf = %lf\n", num1, num2, num3, result);
}