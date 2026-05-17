/*
 * XREFs of sub_180070AA4 @ 0x180070AA4
 * Callers:
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 *     sub_180070824 @ 0x180070824 (sub_180070824.c)
 *     sub_180070900 @ 0x180070900 (sub_180070900.c)
 *     sub_18007098C @ 0x18007098C (sub_18007098C.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     sub_180070B0C @ 0x180070B0C (sub_180070B0C.c)
 */

__int64 __fastcall sub_180070AA4(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int16 *v8; // r10
  int v9; // r11d

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v9 = sub_180070B0C(a1, a2, a3, a4);
  if ( v9 >= 0 )
  {
    if ( v8 )
    {
      *a2 = *(_QWORD *)(v6 + 8);
      *a3 = (unsigned __int64)v8[1] >> 1;
      if ( v7 )
        *v7 = (unsigned __int64)*v8 >> 1;
    }
  }
  return (unsigned int)v9;
}
