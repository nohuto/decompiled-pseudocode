/*
 * XREFs of RtlDereferenceAtomTable @ 0x14001863C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDereferenceAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  return RtlDestroyAtomTable(AtomTable);
}
