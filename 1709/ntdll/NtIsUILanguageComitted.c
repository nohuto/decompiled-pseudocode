/*
 * XREFs of NtIsUILanguageComitted @ 0x1800A2010
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x180003570 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050F1C (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800FE3E0 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800FE70C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800FEC08 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  NTSTATUS result; // eax

  result = 251;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
