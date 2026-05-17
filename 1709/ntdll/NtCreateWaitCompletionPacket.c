/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1800A18F0
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18000B778 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 194LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
