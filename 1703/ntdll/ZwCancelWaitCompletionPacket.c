/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1800A6510
 * Callers:
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax

  result = 145;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
