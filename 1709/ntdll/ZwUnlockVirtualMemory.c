/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A38D0
 * Callers:
 *     RtlLockMemoryZone @ 0x180082700 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180082920 (RtlUnlockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180086FB0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800870E0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180087168 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 449LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
