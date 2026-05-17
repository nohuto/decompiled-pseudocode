/*
 * XREFs of ZwCancelTimer2 @ 0x1800A64F0
 * Callers:
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelTimer2()
{
  __int64 result; // rax

  result = 144LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
