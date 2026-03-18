/*
 * XREFs of RtlAddAtomToAtomTable @ 0x14045BD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlAddAtomToAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTable, AtomName, Atom, 0);
}
