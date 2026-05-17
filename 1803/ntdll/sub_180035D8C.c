/*
 * XREFs of sub_180035D8C @ 0x180035D8C
 * Callers:
 *     sub_180031068 @ 0x180031068 (sub_180031068.c)
 *     sub_1800310D8 @ 0x1800310D8 (sub_1800310D8.c)
 *     RtlGetParentLocaleName @ 0x180031240 (RtlGetParentLocaleName.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 *     sub_180070D0C @ 0x180070D0C (sub_180070D0C.c)
 *     sub_1800E4160 @ 0x1800E4160 (sub_1800E4160.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035D8C(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
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
