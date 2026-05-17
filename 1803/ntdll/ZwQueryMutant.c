/*
 * XREFs of ZwQueryMutant @ 0x18009D450
 * Callers:
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryMutant()
{
  __int64 result; // rax

  result = 333LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
