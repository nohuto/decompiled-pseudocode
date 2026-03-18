/*
 * XREFs of RtlDeleteRange_0 @ 0x1C0003FDA
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C0081380 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C0090240 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C0093910 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
