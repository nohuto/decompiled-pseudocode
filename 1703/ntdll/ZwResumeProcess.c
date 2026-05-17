/*
 * XREFs of ZwResumeProcess @ 0x1800A80B0
 * Callers:
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeProcess()
{
  __int64 result; // rax

  result = 366LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
