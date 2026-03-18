/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x140016924
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E4228 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     HvCheckHive @ 0x14047CA0C (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvpFindFreeBin @ 0x1404E5630 (HvpFindFreeBin.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x14056556C (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x140694950 (HvpFreeAllocatedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14069557C (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryGetFreeBin(_BYTE *a1)
{
  if ( (a1[8] & 2) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
