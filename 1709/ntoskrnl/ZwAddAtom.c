/*
 * XREFs of ZwAddAtom @ 0x14017E1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
