/*
 * XREFs of ZwApphelpCacheControl @ 0x1800A5C80
 * Callers:
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 * Callees:
 *     <none>
 */

__int64 ZwApphelpCacheControl()
{
  __int64 result; // rax

  result = 76LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
