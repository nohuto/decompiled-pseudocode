/*
 * XREFs of RtlAddRange_0 @ 0x1C002BC7E
 * Callers:
 *     ArbAddAllocation @ 0x1C00A8C30 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A8C80 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A8E70 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x1C00A9190 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlAddRange_0(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  return RtlAddRange(RangeList, Start, End, Attributes, Flags, UserData, Owner);
}
