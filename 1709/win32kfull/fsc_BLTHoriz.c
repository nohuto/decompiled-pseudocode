/*
 * XREFs of fsc_BLTHoriz @ 0x1C02D50C8
 * Callers:
 *     fsc_FillBitMap @ 0x1C02C73BC (fsc_FillBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_BLTHoriz(int a1, int a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r11d
  int v5; // edx
  _DWORD *v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax

  v3 = 32 * (a1 >> 5);
  v4 = a1 - v3;
  v5 = a2 - v3;
  v6 = (_DWORD *)(a3 + 4LL * (a1 >> 5));
  if ( v5 >= 32 )
  {
    v7 = (unsigned __int64)(unsigned int)v5 >> 5;
    v8 = v4;
    v4 = 0;
    v5 += -32 * ((unsigned int)v5 >> 5);
    do
    {
      v9 = aulStartBits[v8];
      v8 = 0LL;
      *v6++ |= v9;
      --v7;
    }
    while ( v7 );
  }
  *v6 |= aulStopBits[v5] & aulStartBits[v4];
  return 0LL;
}
