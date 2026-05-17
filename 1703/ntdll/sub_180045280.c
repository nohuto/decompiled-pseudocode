/*
 * XREFs of sub_180045280 @ 0x180045280
 * Callers:
 *     sub_180047438 @ 0x180047438 (sub_180047438.c)
 *     RtlGetParentLocaleName @ 0x180047A90 (RtlGetParentLocaleName.c)
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 *     sub_18006C8FC @ 0x18006C8FC (sub_18006C8FC.c)
 *     sub_18006C99C @ 0x18006C99C (sub_18006C99C.c)
 *     sub_1800E8F20 @ 0x1800E8F20 (sub_1800E8F20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180045280(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    for ( i = a2; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( a3 )
    {
      if ( i )
        *a3 = a2 - i;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
