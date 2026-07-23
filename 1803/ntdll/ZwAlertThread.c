/*
 * XREFs of ZwAlertThread @ 0x18009B870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThread(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax

  result = 110;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
