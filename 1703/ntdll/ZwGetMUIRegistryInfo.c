/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x1800A7090
 * Callers:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FBE40 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  NTSTATUS result; // eax

  result = 237;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
