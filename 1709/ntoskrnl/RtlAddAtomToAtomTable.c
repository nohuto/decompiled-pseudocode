/*
 * XREFs of RtlAddAtomToAtomTable @ 0x140597F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1400194E0 (RtlAddAtomToAtomTableEx.c)
 */

NTSTATUS __stdcall RtlAddAtomToAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTable, AtomName, Atom, 0);
}
