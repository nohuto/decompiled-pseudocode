/*
 * XREFs of sub_18003645C @ 0x18003645C
 * Callers:
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 * Callees:
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_180036554 @ 0x180036554 (sub_180036554.c)
 */

__int64 __fastcall sub_18003645C(__int64 *a1, __int64 a2, char a3, __int16 *a4, const WCHAR *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // edx
  __int16 v12; // cx

  if ( a1 && (v9 = *a1) != 0 && a5 && a4 )
  {
    v10 = -1LL;
    *a4 = -1;
    v11 = sub_180036554(a2, v9, a5);
    if ( v11 < 0 || *a4 < 0 )
    {
      do
        ++v10;
      while ( a5[v10] );
      v11 = sub_180035E90(a2, a5, (int)v10 + 1, a3 == 0 ? 2 : 0, 2, 1u, a1);
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
