/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1400A80DC
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E00E8 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvpFindFreeBin @ 0x14043AEF0 (HvpFindFreeBin.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1404B7E28 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x14066A270 (HvpFreeAllocatedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
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
