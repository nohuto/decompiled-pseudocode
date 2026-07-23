/*
 * XREFs of ZwAddAtomEx @ 0x14017EC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
