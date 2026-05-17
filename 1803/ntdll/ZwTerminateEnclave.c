/*
 * XREFs of ZwTerminateEnclave @ 0x18009E170
 * Callers:
 *     LdrInitializeEnclave @ 0x1800C9810 (LdrInitializeEnclave.c)
 *     sub_1800C9D70 @ 0x1800C9D70 (sub_1800C9D70.c)
 * Callees:
 *     <none>
 */

__int64 ZwTerminateEnclave()
{
  __int64 result; // rax

  result = 438LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
