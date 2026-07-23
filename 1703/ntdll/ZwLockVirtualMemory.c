/*
 * XREFs of ZwLockVirtualMemory @ 0x1800A7390
 * Callers:
 *     RtlLockMemoryZone @ 0x180083910 (RtlLockMemoryZone.c)
 *     EnumProc @ 0x180083F00 (EnumProc.c)
 *     RtlLockCurrentThread @ 0x18008BC60 (RtlLockCurrentThread.c)
 *     sub_18008BDA8 @ 0x18008BDA8 (sub_18008BDA8.c)
 *     RtlExtendMemoryZone @ 0x1800E9820 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 261;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
