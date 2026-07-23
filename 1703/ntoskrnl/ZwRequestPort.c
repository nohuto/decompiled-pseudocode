/*
 * XREFs of ZwRequestPort @ 0x140180C80
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
