/*
 * XREFs of ZwQueryKey @ 0x1800A55C0
 * Callers:
 *     sub_180056C88 @ 0x180056C88 (sub_180056C88.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryKey()
{
  __int64 result; // rax

  result = 22LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
