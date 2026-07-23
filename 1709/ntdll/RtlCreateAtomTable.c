/*
 * XREFs of RtlCreateAtomTable @ 0x180070250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, AtomTableHandle, AtomTableHandle);
}
