/*
 * XREFs of NtAddAtom @ 0x14075EFD0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x140489AD8 (NtAddAtomEx.c)
 */

NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, AtomNameLength, Atom, 0);
}
