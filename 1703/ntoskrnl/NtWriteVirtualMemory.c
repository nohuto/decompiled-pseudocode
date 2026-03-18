/*
 * XREFs of NtWriteVirtualMemory @ 0x14044DD98
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140518020 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory((ULONG_PTR)ProcessHandle, (__int64)NumberOfBytesWritten, 32);
}
