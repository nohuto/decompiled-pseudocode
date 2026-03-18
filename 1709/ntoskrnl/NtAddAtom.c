/*
 * XREFs of NtAddAtom @ 0x14075EFD0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x140489AD8 (NtAddAtomEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx((char *)AtomName, *(size_t *)&AtomNameLength, Atom, 0);
}
