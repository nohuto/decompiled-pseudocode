/*
 * XREFs of NtLockVirtualMemory @ 0x1800A2170
 * Callers:
 *     RtlLockMemoryZone @ 0x180082700 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x180082CE0 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180086FB0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180087060 (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800E8B70 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 262;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
