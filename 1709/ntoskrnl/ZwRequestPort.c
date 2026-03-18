/*
 * XREFs of ZwRequestPort @ 0x140180660
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
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
