/*
 * XREFs of ZwQuerySection @ 0x18009B4E0
 * Callers:
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_18010B130 @ 0x18010B130 (sub_18010B130.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
