/*
 * XREFs of ZwCreateSemaphore @ 0x1800A69D0
 * Callers:
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateSemaphore()
{
  __int64 result; // rax

  result = 183LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
