/*
 * XREFs of sub_1800940B0 @ 0x1800940B0
 * Callers:
 *     mbstowcs @ 0x18008EDC0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180069B20 (RtlAnsiCharToUnicodeChar.c)
 */

char *__fastcall sub_1800940B0(char *a1)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return (char *)(v3 - a1 - 1);
}
