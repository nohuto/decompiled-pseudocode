/*
 * XREFs of RtlCreateAtomTable @ 0x180071FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return sub_180071FB8(NumberOfBuckets, AtomTableHandle, AtomTableHandle);
}
