/*
 * XREFs of ZwAlpcCancelMessage @ 0x1401A8380
 * Callers:
 *     PopUmpoProcessMessage @ 0x140518A1C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
