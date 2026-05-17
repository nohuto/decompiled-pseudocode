/*
 * XREFs of sub_18009FC7C @ 0x18009FC7C
 * Callers:
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 *     sub_18009EF60 @ 0x18009EF60 (sub_18009EF60.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 */

unsigned __int8 *__fastcall sub_18009FC7C(_WORD *a1, unsigned __int8 *a2, __int64 a3)
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
