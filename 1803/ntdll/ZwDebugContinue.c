/*
 * XREFs of ZwDebugContinue @ 0x18009C3B0
 * Callers:
 *     DbgUiContinue @ 0x1800C91E0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  NTSTATUS result; // eax

  result = 200;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
