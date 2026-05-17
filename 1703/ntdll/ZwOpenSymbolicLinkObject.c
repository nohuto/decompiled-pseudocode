/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1800A7730
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenSymbolicLinkObject()
{
  __int64 result; // rax

  result = 290LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
