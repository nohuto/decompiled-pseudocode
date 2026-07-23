/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1401A7900
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400C7BA4 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
