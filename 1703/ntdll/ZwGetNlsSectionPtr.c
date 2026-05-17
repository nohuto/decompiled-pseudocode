/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800A70F0
 * Callers:
 *     sub_18006BBAC @ 0x18006BBAC (sub_18006BBAC.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 240LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
