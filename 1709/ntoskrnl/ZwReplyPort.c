/*
 * XREFs of ZwReplyPort @ 0x14017DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
