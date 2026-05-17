/*
 * XREFs of ZwApphelpCacheControl @ 0x18009B440
 * Callers:
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
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
