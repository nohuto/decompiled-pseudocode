/*
 * XREFs of NtAssignProcessToJobObject @ 0x1800A1230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 140;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
