/*
 * XREFs of HvpTruncateBins @ 0x14056556C
 * Callers:
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     ExIsResourceAcquiredExclusiveLite @ 0x140103850 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  _BYTE *CellMap; // rax
  unsigned int v7; // r10d
  __int64 FreeBin; // rax

  v2 = (int *)(BugCheckParameter2 + 1400);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v5 + v4 - 4096);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x1512uLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( i
      || (unsigned int)(v4 + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 2964)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
