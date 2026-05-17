/*
 * XREFs of ZwShutdownSystem @ 0x1800A35F0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     <none>
 */

__int64 ZwShutdownSystem()
{
  __int64 result; // rax

  result = 426LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
