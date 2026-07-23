/*
 * XREFs of ZwDebugActiveProcess @ 0x1800A6B90
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D5090 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 197;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
