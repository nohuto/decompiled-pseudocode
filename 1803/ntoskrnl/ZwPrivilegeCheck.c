/*
 * XREFs of ZwPrivilegeCheck @ 0x1401A9AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ClientToken);
}
