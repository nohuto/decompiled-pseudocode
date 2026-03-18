/*
 * XREFs of RtlCreateAtomTable @ 0x14045B0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140013790 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __stdcall RtlCreateAtomTable(ULONG TableSize, PRTL_ATOM_TABLE *AtomTable)
{
  return RtlCreateAtomTableEx(TableSize, 0, AtomTable);
}
