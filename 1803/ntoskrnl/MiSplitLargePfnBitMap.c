/*
 * XREFs of MiSplitLargePfnBitMap @ 0x14064A6CC
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400465B8 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitLargePfnBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 *v5; // rsi
  unsigned __int64 *i; // rbx
  unsigned __int64 v8; // rbp

  v3 = 0;
  v4 = a2 + a3 - 1;
  v5 = MiLargePageSizes;
  for ( i = (unsigned __int64 *)(a1 + 5000); ; i += 2 )
  {
    v8 = ((v4 + *v5) & (unsigned __int64)~(*v5 - 1)) / *v5;
    if ( !(unsigned int)MiSplitBitmapPages(9u, i[1] + ((a2 / *v5) >> 3), 8 * (((v8 + 7) >> 3) - ((a2 / *v5) >> 3))) )
      break;
    if ( v8 > *i )
      *i = v8;
    ++v3;
    ++v5;
    if ( v3 >= 2 )
      return 1LL;
  }
  return 0LL;
}
