/*
 * XREFs of ZwReplyPort @ 0x1401A7640
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
