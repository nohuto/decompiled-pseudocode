/*
 * XREFs of ArbBacktrackAllocation @ 0x14061AC10
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange @ 0x14061A4E0 (RtlDeleteRange.c)
 */

NTSTATUS __fastcall ArbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  return RtlDeleteRange(*(PRTL_RANGE_LIST *)(a1 + 48), *a2, a2[1], *(PVOID *)(a2[4] + 32));
}
