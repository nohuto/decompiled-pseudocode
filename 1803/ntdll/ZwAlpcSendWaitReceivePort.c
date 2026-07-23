/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x18009BBF0
 * Callers:
 *     sub_180080944 @ 0x180080944 (sub_180080944.c)
 *     RtlSendMsgToSm @ 0x180087E40 (RtlSendMsgToSm.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 138;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
