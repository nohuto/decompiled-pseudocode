/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C00FBE00
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnWithDmcLockAcquiredEx()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn");
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v0);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock");
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    return PsLeavePriorityRegion(v2);
  }
  return result;
}
