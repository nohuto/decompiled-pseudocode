/*
 * XREFs of ZwReplyWaitReplyPort @ 0x140180640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ReplyMessage, v2);
}
