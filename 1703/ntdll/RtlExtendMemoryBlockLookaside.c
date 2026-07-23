/*
 * XREFs of RtlExtendMemoryBlockLookaside @ 0x1800E97B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlExtendMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG Increment)
{
  return RtlExtendMemoryZone(*((_QWORD *)MemoryBlockLookaside + 2), Increment);
}
