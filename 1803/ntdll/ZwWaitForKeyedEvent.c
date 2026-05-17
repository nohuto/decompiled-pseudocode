/*
 * XREFs of ZwWaitForKeyedEvent @ 0x18009E3F0
 * Callers:
 *     sub_180082E7C @ 0x180082E7C (sub_180082E7C.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForKeyedEvent()
{
  __int64 result; // rax

  result = 458LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
