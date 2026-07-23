/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14017EEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
