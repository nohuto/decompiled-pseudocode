/*
 * XREFs of NtAddAtom @ 0x1407C62D0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x14056890C (NtAddAtomEx.c)
 */

NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, AtomNameLength, Atom, 0);
}
