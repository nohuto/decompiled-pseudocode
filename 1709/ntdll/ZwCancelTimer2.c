/*
 * XREFs of ZwCancelTimer2 @ 0x1800A12D0
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18000FCF0 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelTimer2()
{
  __int64 result; // rax

  result = 145LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
