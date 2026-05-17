/*
 * XREFs of sub_1800A2284 @ 0x1800A2284
 * Callers:
 *     sub_1800A32A4 @ 0x1800A32A4 (sub_1800A32A4.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 */

unsigned __int8 *__fastcall sub_1800A2284(_WORD *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      v5 = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&v5);
      return (unsigned __int8 *)(v5 - a2);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
