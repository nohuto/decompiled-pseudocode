/*
 * XREFs of ZwGetNextThread @ 0x1800A70D0
 * Callers:
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNextThread()
{
  __int64 result; // rax

  result = 239LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
