/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C007D1D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnPublish()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnPublish");
  if ( ghsemVisRgnPublish )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemVisRgnPublish);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
