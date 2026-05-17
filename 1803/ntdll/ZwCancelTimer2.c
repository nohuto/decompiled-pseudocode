/*
 * XREFs of ZwCancelTimer2 @ 0x18009BCF0
 * Callers:
 *     sub_18002CB04 @ 0x18002CB04 (sub_18002CB04.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelTimer2()
{
  __int64 result; // rax

  result = 146LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
