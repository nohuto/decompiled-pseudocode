/*
 * XREFs of ZwSetTimerEx @ 0x18009DF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetTimerEx()
{
  __int64 result; // rax

  result = 423LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
