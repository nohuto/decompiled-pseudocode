/*
 * XREFs of ZwImpersonateClientOfPort @ 0x14017E320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ClientMessage, v2);
}
