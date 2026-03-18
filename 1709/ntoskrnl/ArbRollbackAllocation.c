/*
 * XREFs of ArbRollbackAllocation @ 0x140789930
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x14053F020 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
  return 0LL;
}
