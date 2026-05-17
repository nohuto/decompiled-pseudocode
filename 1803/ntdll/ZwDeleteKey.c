/*
 * XREFs of ZwDeleteKey @ 0x18009C450
 * Callers:
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 *     RtlInitializeRXact @ 0x18008A4F0 (RtlInitializeRXact.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x1800FBF60 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteKey()
{
  __int64 result; // rax

  result = 205LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
