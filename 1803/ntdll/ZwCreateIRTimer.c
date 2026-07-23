/*
 * XREFs of ZwCreateIRTimer @ 0x18009BF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIRTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax

  result = 166;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
