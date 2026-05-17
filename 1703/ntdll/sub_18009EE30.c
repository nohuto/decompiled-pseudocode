/*
 * XREFs of sub_18009EE30 @ 0x18009EE30
 * Callers:
 *     mbstowcs @ 0x180099970 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 */

unsigned __int8 *__fastcall sub_18009EE30(unsigned __int8 *a1)
{
  unsigned __int8 *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return (unsigned __int8 *)(v3 - a1 - 1);
}
