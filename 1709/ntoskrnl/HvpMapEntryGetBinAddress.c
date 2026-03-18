/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140080F90
 * Callers:
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
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 * Callees:
 *     HvpIncrementCellReferenceCount @ 0x140080FF0 (HvpIncrementCellReferenceCount.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  unsigned __int64 Count; // rbx
  BOOLEAN v6; // al

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    v6 = 0;
  }
  else
  {
    v6 = ExAcquireRundownProtection_0(a2 + 3);
    if ( v6 )
      Count = a2[2].Count;
    else
      Count = a2[1].Count;
  }
  *a3 = *a3 & 0xFFFD | (2 * (v6 & 1)) | 1;
  HvpIncrementCellReferenceCount();
  return Count & 0xFFFFFFFFFFFFFFF0uLL;
}
