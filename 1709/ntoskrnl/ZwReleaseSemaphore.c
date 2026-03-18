/*
 * XREFs of ZwReleaseSemaphore @ 0x14017DA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle, *(_QWORD *)&ReleaseCount, PreviousCount);
}
