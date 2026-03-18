/*
 * XREFs of HvpGetCellMap @ 0x14047D620
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E4228 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x14047CA0C (HvCheckHive.c)
 *     HvpAddFreeCellHint @ 0x14047CB94 (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14047CC5C (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     HvpPointMapEntriesToBuffer @ 0x14047D3E0 (HvpPointMapEntriesToBuffer.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     HvpFindFreeBin @ 0x1404E5630 (HvpFindFreeBin.c)
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x14056556C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     HvpGetBinMemAlloc @ 0x1405996EC (HvpGetBinMemAlloc.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     HvpBuildMapForLoaderHive @ 0x1405CC7F8 (HvpBuildMapForLoaderHive.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 *     HvpReviveDiscardedBin @ 0x1406A0FE8 (HvpReviveDiscardedBin.c)
 *     HvpCopyModifiedData @ 0x1406A2F00 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 1400) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 1408) + 8LL * ((a2 >> 21) & 0x3FF)) + 40LL * ((a2 >> 12) & 0x1FF);
}
