/*
 * XREFs of NtFreeVirtualMemory @ 0x140494720
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x14071FD10 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     MmFreeVirtualMemory @ 0x140494760 (MmFreeVirtualMemory.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  return MmFreeVirtualMemory((ULONG_PTR)ProcessHandle, KeGetCurrentThread()->PreviousMode, 0);
}
