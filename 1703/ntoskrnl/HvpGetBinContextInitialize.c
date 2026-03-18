/*
 * XREFs of HvpGetBinContextInitialize @ 0x14008CF2C
 * Callers:
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x14048E1D0 (HvpAddFreeCellHint.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     HvpCopyModifiedData @ 0x140678988 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInitialize(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
