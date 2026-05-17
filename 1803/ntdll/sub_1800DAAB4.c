/*
 * XREFs of sub_1800DAAB4 @ 0x1800DAAB4
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DAAB4(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9

  v3 = a2 * (unsigned __int64)a1;
  if ( v3 > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
