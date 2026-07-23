/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x18009BD10
 * Callers:
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 147;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
