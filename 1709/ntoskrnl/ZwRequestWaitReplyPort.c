/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14017DD00
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
