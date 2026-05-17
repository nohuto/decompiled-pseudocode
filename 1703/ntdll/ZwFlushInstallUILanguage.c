/*
 * XREFs of ZwFlushInstallUILanguage @ 0x1800A6EB0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FBE40 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 222LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
