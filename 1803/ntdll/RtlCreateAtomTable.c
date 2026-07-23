/*
 * XREFs of RtlCreateAtomTable @ 0x18004CBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return sub_18004CBE8(NumberOfBuckets, AtomTableHandle, AtomTableHandle);
}
