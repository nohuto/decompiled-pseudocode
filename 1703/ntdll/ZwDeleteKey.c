/*
 * XREFs of ZwDeleteKey @ 0x1800A6C50
 * Callers:
 *     sub_180087CD0 @ 0x180087CD0 (sub_180087CD0.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x1800FD980 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteKey()
{
  __int64 result; // rax

  result = 203LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
