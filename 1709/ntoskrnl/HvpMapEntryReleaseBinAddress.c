/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x1400812E0
 * Callers:
 *     HvpMapEntryReleaseBlockAddress @ 0x1401E55AC (HvpMapEntryReleaseBlockAddress.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 *     HvCheckHive @ 0x14047CA0C (HvCheckHive.c)
 *     HvpAddFreeCellHint @ 0x14047CB94 (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14047CC5C (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 *     HvpReleaseCellPaged @ 0x1404AC0E0 (HvpReleaseCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 * Callees:
 *     HvpDecrementCellReferenceCount @ 0x14008130C (HvpDecrementCellReferenceCount.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 */

__int64 __fastcall HvpMapEntryReleaseBinAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  __int64 result; // rax

  if ( (*(_BYTE *)a3 & 2) != 0 )
  {
    ExReleaseRundownProtection_0(a2 + 3);
    *a3 &= ~2u;
  }
  HvpDecrementCellReferenceCount();
  result = 0LL;
  *a3 = 0;
  return result;
}
