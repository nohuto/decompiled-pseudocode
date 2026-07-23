/*
 * XREFs of ZwSetTimerResolution @ 0x1800A8750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  NTSTATUS result; // eax

  result = 419;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
