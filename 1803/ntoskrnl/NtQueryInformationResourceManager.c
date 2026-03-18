/*
 * XREFs of NtQueryInformationResourceManager @ 0x1401877E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  return __imp_NtQueryInformationResourceManager(
           ResourceManagerHandle,
           ResourceManagerInformationClass,
           ResourceManagerInformation,
           ResourceManagerInformationLength,
           ReturnLength);
}
