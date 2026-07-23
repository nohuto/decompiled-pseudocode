/*
 * XREFs of ZwDebugContinue @ 0x1800A6BB0
 * Callers:
 *     DbgUiContinue @ 0x1800D4DB0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  NTSTATUS result; // eax

  result = 198;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
