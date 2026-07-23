/*
 * XREFs of ZwLockVirtualMemory @ 0x18009CB90
 * Callers:
 *     RtlExtendMemoryZone @ 0x180003E90 (RtlExtendMemoryZone.c)
 *     EnumProc @ 0x1800487E0 (EnumProc.c)
 *     RtlLockMemoryZone @ 0x180049090 (RtlLockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180081720 (RtlLockCurrentThread.c)
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 263;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
