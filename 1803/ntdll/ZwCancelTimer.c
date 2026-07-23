/*
 * XREFs of ZwCancelTimer @ 0x18009B6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  NTSTATUS result; // eax

  result = 97;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
