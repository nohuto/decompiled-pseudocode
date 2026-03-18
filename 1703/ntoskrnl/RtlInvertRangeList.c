/*
 * XREFs of RtlInvertRangeList @ 0x1405B3A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x1405B41E0 (RtlInvertRangeListEx.c)
 */

NTSTATUS __stdcall RtlInvertRangeList(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeListEx(InvertedRangeList, 0LL);
}
