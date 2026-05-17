/*
 * XREFs of ZwGetNlsSectionPtr @ 0x18009C8F0
 * Callers:
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 242LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
