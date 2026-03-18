/*
 * XREFs of GreLockVisRgnShared @ 0x1C005BB60
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 GreLockVisRgnShared()
{
  PERESOURCE v0; // rdx
  PERESOURCE v1; // rdx
  PERESOURCE v2; // rdx

  v0 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v0 = ghsemDynamicModeChange;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v0);
  v1 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    v1 = ghsemGreLock;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", v1);
  v2 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    v2 = ghsemDCVisRgn;
  }
  return EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", v2);
}
