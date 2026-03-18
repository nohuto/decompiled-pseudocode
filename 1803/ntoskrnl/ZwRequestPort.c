/*
 * XREFs of ZwRequestPort @ 0x1401AA2A0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400C7BA4 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, LpcMessage, v2);
}
