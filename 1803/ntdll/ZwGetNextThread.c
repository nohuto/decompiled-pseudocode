/*
 * XREFs of ZwGetNextThread @ 0x18009C8D0
 * Callers:
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNextThread()
{
  __int64 result; // rax

  result = 241LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
