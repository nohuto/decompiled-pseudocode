/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C002BF76
 * Callers:
 *     ArbRollbackAllocation @ 0x1C0084AE0 (ArbRollbackAllocation.c)
 *     ArbBootAllocation @ 0x1C0087790 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C0088670 (ArbTestAllocation.c)
 *     ArbCommitAllocation @ 0x1C00A6620 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00A6650 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00A66E0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00A6A30 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A6DC0 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00A71B0 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
