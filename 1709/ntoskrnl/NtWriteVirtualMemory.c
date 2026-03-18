/*
 * XREFs of NtWriteVirtualMemory @ 0x14058B114
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x1405082D0 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __stdcall NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  return MiReadWriteVirtualMemory(
           (ULONG_PTR)ProcessHandle,
           (unsigned __int64)BaseAddress,
           (unsigned __int64)Buffer,
           NumberOfBytesToWrite,
           (unsigned __int64)NumberOfBytesWritten,
           32);
}
