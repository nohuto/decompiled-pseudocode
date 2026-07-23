/*
 * XREFs of NtFlushInstructionCache @ 0x1800A1CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  NTSTATUS result; // eax

  result = 224;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
