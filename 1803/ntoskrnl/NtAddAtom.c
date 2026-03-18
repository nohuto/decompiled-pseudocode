/*
 * XREFs of NtAddAtom @ 0x1407C62D0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x14056890C (NtAddAtomEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx((char *)AtomName, *(size_t *)&AtomNameLength, Atom, 0);
}
