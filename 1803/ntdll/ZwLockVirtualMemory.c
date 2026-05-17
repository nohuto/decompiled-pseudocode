/*
 * XREFs of ZwLockVirtualMemory @ 0x18009CB90
 * Callers:
 *     RtlExtendMemoryZone @ 0x180003E90 (RtlExtendMemoryZone.c)
 *     sub_1800487E0 @ 0x1800487E0 (sub_1800487E0.c)
 *     RtlLockMemoryZone @ 0x180049090 (RtlLockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180081720 (RtlLockCurrentThread.c)
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 * Callees:
 *     <none>
 */

__int64 ZwLockVirtualMemory()
{
  __int64 result; // rax

  result = 263LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
