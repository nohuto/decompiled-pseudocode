/*
 * XREFs of ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0089F40
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 DxgkEngVisRgnUniq(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  if ( ghsemVisRgnUniqueness )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemVisRgnUniqueness");
  v0 = giVisRgnUniqueness + LODWORD(WPP_MAIN_CB.DeviceObjectExtension);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnUniqueness");
  if ( ghsemVisRgnUniqueness )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
    PsLeavePriorityRegion(v1);
  }
  return v0;
}
