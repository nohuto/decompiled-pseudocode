/*
 * XREFs of ZwAlpcCancelMessage @ 0x14017EDE0
 * Callers:
 *     PopUmpoProcessMessage @ 0x1404C190C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
