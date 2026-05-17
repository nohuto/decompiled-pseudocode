/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x18009C890
 * Callers:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FA3F0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetMUIRegistryInfo()
{
  __int64 result; // rax

  result = 239LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
