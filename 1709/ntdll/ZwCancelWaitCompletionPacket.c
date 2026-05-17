/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x1800A12F0
 * Callers:
 *     TppCancelWait @ 0x18000FF54 (TppCancelWait.c)
 *     TppSingleTimerExpiration @ 0x180010418 (TppSingleTimerExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 146LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
