/*
 * XREFs of ZwResumeProcess @ 0x18009D910
 * Callers:
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeProcess()
{
  __int64 result; // rax

  result = 371LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
