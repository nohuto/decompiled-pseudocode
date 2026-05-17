/*
 * XREFs of ZwSetDebugFilterState @ 0x18009DB30
 * Callers:
 *     DbgSetDebugFilterState @ 0x1800DAF60 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetDebugFilterState()
{
  __int64 result; // rax

  result = 388LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
