/*
 * XREFs of ZwSetIoCompletionEx @ 0x18009DDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetIoCompletionEx()
{
  __int64 result; // rax

  result = 410LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
