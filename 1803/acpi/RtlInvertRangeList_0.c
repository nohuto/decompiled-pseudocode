/*
 * XREFs of RtlInvertRangeList_0 @ 0x1C0003FAA
 * Callers:
 *     ArbInitializeRangeList @ 0x1C0094730 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInvertRangeList_0(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeList(InvertedRangeList, RangeList);
}
