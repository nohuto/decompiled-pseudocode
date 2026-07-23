/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1800A0500
 * Callers:
 *     CsrClientCallServer @ 0x1800047B0 (CsrClientCallServer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  NTSTATUS result; // eax

  result = 34;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
