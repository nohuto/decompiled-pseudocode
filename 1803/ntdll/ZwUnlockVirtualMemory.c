/*
 * XREFs of ZwUnlockVirtualMemory @ 0x18009E310
 * Callers:
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 *     RtlLockMemoryZone @ 0x180049090 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180081720 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180085B10 (RtlUnlockCurrentThread.c)
 *     sub_180085B98 @ 0x180085B98 (sub_180085B98.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 451LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
