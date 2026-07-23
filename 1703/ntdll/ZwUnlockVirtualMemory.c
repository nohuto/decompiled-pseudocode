/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A8A90
 * Callers:
 *     RtlLockMemoryZone @ 0x180083910 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180083AB0 (RtlUnlockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x18008BC60 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x18008BD20 (RtlUnlockCurrentThread.c)
 *     sub_18008BE18 @ 0x18008BE18 (sub_18008BE18.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 445;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
