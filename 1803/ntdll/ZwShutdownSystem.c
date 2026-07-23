/*
 * XREFs of ZwShutdownSystem @ 0x18009E030
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownSystem(SHUTDOWN_ACTION Action)
{
  NTSTATUS result; // eax

  result = 428;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
