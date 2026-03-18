/*
 * XREFs of HvpGetCellMap @ 0x1404E4320
 * Callers:
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140498080 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpTruncateBins @ 0x14049A080 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x1404E345C (HvCheckHive.c)
 *     HvpMapHiveImageFromViewMap @ 0x1404E35C4 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddFreeCellHint @ 0x1404E38A4 (HvpAddFreeCellHint.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvpEnlistFreeCell @ 0x1404E41E0 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x140513D48 (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140515BD0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x140515FC0 (HvpFindFreeCell.c)
 *     HvTrimHive @ 0x140517868 (HvTrimHive.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405667B8 (HvpPointMapEntriesToBuffer.c)
 *     HvpFindNextDirtyBlock @ 0x140592104 (HvpFindNextDirtyBlock.c)
 *     HvpDropPagedBins @ 0x1406334A0 (HvpDropPagedBins.c)
 *     HvpCopyModifiedData @ 0x1406F839C (HvpCopyModifiedData.c)
 *     HvWriteExternal @ 0x1406FB84C (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1407067E4 (HvSnapshotHiveToOffsetArray.c)
 *     HvpShrinkMap @ 0x140706B64 (HvpShrinkMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 272) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 280) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
