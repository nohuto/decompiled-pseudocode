/*
 * XREFs of HvpGetCellMap @ 0x140515540
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E00E8 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpFindFreeBin @ 0x14043AEF0 (HvpFindFreeBin.c)
 *     HvpGetBinMemAlloc @ 0x14045AE74 (HvpGetBinMemAlloc.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14048D724 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x14048E1D0 (HvpAddFreeCellHint.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1404B7E28 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     HvpPointMapEntriesToBuffer @ 0x140515304 (HvpPointMapEntriesToBuffer.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     HvpBuildMapForLoaderHive @ 0x1405BD558 (HvpBuildMapForLoaderHive.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     HvpReviveDiscardedBin @ 0x140676AA8 (HvpReviveDiscardedBin.c)
 *     HvpCopyModifiedData @ 0x140678988 (HvpCopyModifiedData.c)
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
