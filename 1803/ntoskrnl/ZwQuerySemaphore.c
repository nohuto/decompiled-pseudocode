/*
 * XREFs of ZwQuerySemaphore @ 0x1401A9F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle, *(_QWORD *)&SemaphoreInformationClass, SemaphoreInformation);
}
