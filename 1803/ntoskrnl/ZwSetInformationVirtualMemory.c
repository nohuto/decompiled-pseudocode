/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1401AA780
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140006C4C (CmSiPrefetchVirtualMemoryRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
