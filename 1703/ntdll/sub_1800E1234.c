/*
 * XREFs of sub_1800E1234 @ 0x1800E1234
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E1234(unsigned int a1, unsigned int a2, _DWORD *a3)
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
