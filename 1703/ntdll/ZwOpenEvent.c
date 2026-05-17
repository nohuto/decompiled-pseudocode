/*
 * XREFs of ZwOpenEvent @ 0x1800A5B00
 * Callers:
 *     sub_180004004 @ 0x180004004 (sub_180004004.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenEvent()
{
  __int64 result; // rax

  result = 64LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
