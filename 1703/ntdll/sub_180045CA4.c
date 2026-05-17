/*
 * XREFs of sub_180045CA4 @ 0x180045CA4
 * Callers:
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 * Callees:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180045D9C @ 0x180045D9C (sub_180045D9C.c)
 */

__int64 __fastcall sub_180045CA4(__int64 *a1, __int64 a2, char a3, __int16 *a4, const WCHAR *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // edx
  __int16 v12; // cx

  if ( a1 && (v9 = *a1) != 0 && a5 && a4 )
  {
    v10 = -1LL;
    *a4 = -1;
    v11 = sub_180045D9C(a2, v9, a5);
    if ( v11 < 0 || *a4 < 0 )
    {
      do
        ++v10;
      while ( a5[v10] );
      v11 = sub_180045810(a2, a5, (int)v10 + 1, a3 == 0 ? 2 : 0, 2, 1u, a1);
      if ( v11 >= 0 )
      {
        v12 = *(_WORD *)(*a1 + 4);
        if ( v12 )
          *a4 = v12 - 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
