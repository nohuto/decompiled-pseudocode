/*
 * XREFs of ZwCreateIoCompletion @ 0x1800A6790
 * Callers:
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateIoCompletion()
{
  __int64 result; // rax

  result = 165LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
