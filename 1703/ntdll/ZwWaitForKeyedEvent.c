/*
 * XREFs of ZwWaitForKeyedEvent @ 0x1800A8B70
 * Callers:
 *     sub_180088C98 @ 0x180088C98 (sub_180088C98.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForKeyedEvent()
{
  __int64 result; // rax

  result = 452LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
