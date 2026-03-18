/*
 * XREFs of ArbRollbackAllocation @ 0x1407F6000
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x14061A680 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
  return 0LL;
}
