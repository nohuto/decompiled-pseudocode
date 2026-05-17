/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x1800A1250
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18000B778 (TppInitializeTimerSubQueue.c)
 *     TppTimerQueueExpiration @ 0x180010040 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x180010608 (TppSetupNextWait.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 141LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
