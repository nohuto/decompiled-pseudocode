/*
 * XREFs of ZwQueryDefaultLocale @ 0x18009AD60
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180053480 @ 0x180053480 (sub_180053480.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDefaultLocale()
{
  __int64 result; // rax

  result = 21LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
