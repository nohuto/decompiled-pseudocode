/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x18009DB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  NTSTATUS result; // eax

  result = 389;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
