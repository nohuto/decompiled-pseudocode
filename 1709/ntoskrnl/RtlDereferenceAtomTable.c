/*
 * XREFs of RtlDereferenceAtomTable @ 0x14012149C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x14048D434 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x14057CC80 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(struct _RTL_ATOM_TABLE *a1)
{
  return RtlDestroyAtomTable(a1);
}
