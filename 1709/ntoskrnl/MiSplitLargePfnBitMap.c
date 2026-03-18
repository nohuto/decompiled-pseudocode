/*
 * XREFs of MiSplitLargePfnBitMap @ 0x1405B4EFC
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitLargePfnBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned int v5; // edi
  __int64 *v6; // rsi
  unsigned __int64 *i; // rbx
  unsigned __int64 v8; // rbp

  v4 = a3 - 1;
  v5 = 0;
  v6 = MiLargePageSizes;
  for ( i = (unsigned __int64 *)(a1 + 4936); ; i += 2 )
  {
    v8 = ((*v6 + v4 + a2) & ~(*v6 - 1)) / *v6;
    if ( !(unsigned int)MiSplitBitmapPages(9u, i[1] + ((a2 / *v6) >> 3), 8 * (((v8 + 7) >> 3) - ((a2 / *v6) >> 3))) )
      break;
    if ( v8 > *i )
      *i = v8;
    ++v5;
    ++v6;
    if ( v5 >= 2 )
      return 1LL;
  }
  return 0LL;
}
