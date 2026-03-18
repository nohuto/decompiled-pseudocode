/*
 * XREFs of RtlDereferenceAtomTable @ 0x1400A1218
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x140547520 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(struct _RTL_ATOM_TABLE *a1)
{
  return RtlDestroyAtomTable(a1);
}
