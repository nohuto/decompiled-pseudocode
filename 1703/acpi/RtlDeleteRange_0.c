/*
 * XREFs of RtlDeleteRange_0 @ 0x1C002BFCA
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C00A11A0 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A5A60 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00A6600 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
