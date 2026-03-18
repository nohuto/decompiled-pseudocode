/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0003F86
 * Callers:
 *     ArbBootAllocation @ 0x1C0093940 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1C0093FF0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C0094020 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C0094730 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C0094AA0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C0094E30 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C0095000 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1C0095240 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x1C0095290 (ArbTestAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
