/*
 * XREFs of ZwCreateSemaphore @ 0x1800A69D0
 * Callers:
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  NTSTATUS result; // eax

  result = 183;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
