/*
 * XREFs of ZwFlushInstallUILanguage @ 0x18009C6B0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FA3F0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 224LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
