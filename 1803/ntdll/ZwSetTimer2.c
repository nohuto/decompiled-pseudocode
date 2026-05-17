/*
 * XREFs of ZwSetTimer2 @ 0x18009DF70
 * Callers:
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 *     sub_18002CB04 @ 0x18002CB04 (sub_18002CB04.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 422LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
