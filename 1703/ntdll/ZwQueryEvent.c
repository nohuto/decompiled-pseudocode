/*
 * XREFs of ZwQueryEvent @ 0x1800A5DC0
 * Callers:
 *     sub_180107070 @ 0x180107070 (sub_180107070.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryEvent()
{
  __int64 result; // rax

  result = 86LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
