/*
 * XREFs of sub_1800403FC @ 0x1800403FC
 * Callers:
 *     sub_1800402E4 @ 0x1800402E4 (sub_1800402E4.c)
 *     sub_180040BF8 @ 0x180040BF8 (sub_180040BF8.c)
 *     sub_180040C84 @ 0x180040C84 (sub_180040C84.c)
 *     sub_18004454C @ 0x18004454C (sub_18004454C.c)
 *     sub_1800C90F4 @ 0x1800C90F4 (sub_1800C90F4.c)
 * Callees:
 *     sub_180040464 @ 0x180040464 (sub_180040464.c)
 */

__int64 __fastcall sub_1800403FC(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int16 *v8; // r10
  int v9; // r11d

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v9 = sub_180040464(a1, a2, a3, a4);
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
