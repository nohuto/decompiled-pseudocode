/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1404E35B0
 * Callers:
 *     HvpTruncateBins @ 0x14049A080 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     HvCheckHive @ 0x1404E345C (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x140513D48 (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     HvpFindNextDirtyBlock @ 0x140592104 (HvpFindNextDirtyBlock.c)
 *     HvpDropPagedBins @ 0x1406334A0 (HvpDropPagedBins.c)
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
