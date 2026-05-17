/*
 * XREFs of ZwReadOnlyEnlistment @ 0x18009D6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwReadOnlyEnlistment()
{
  __int64 result; // rax

  result = 352LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
