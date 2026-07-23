/*
 * XREFs of ZwShutdownSystem @ 0x1800A87D0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownSystem(SHUTDOWN_ACTION Action)
{
  NTSTATUS result; // eax

  result = 423;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
