/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C002BC66
 * Callers:
 *     ArbTestAllocation @ 0x1C008A250 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x1C0091850 (ArbBootAllocation.c)
 *     ArbRollbackAllocation @ 0x1C0097690 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00A90C0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00A90F0 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00A9190 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00A94E0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A9870 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00A9C60 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
