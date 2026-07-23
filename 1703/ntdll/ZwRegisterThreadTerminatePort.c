/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x1800A7EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRegisterThreadTerminatePort(HANDLE PortHandle)
{
  NTSTATUS result; // eax

  result = 352;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
