/*
 * XREFs of RtlInvertRangeList @ 0x1405CC940
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x1405CC960 (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
