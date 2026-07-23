/*
 * XREFs of ZwAssignProcessToJobObject @ 0x18009BC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 141;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
