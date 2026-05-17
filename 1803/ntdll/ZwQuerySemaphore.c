/*
 * XREFs of ZwQuerySemaphore @ 0x18009D550
 * Callers:
 *     sub_18010B190 @ 0x18010B190 (sub_18010B190.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySemaphore()
{
  __int64 result; // rax

  result = 341LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
