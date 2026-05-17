/*
 * XREFs of ZwSetDebugFilterState @ 0x1800A82D0
 * Callers:
 *     DbgSetDebugFilterState @ 0x1800E1390 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetDebugFilterState()
{
  __int64 result; // rax

  result = 383LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
