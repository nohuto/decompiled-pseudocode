/*
 * XREFs of ZwCreateSemaphore @ 0x18009C1D0
 * Callers:
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateSemaphore()
{
  __int64 result; // rax

  result = 185LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
