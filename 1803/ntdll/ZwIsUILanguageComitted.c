/*
 * XREFs of ZwIsUILanguageComitted @ 0x18009CA30
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x1800311A0 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwIsUILanguageComitted(void)
{
  NTSTATUS result; // eax

  result = 252;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
