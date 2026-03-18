/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C003CAF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnPublish()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnPublish", ghsemVisRgnPublish);
  if ( ghsemVisRgnPublish )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemVisRgnPublish);
    return PsLeavePriorityRegion();
  }
  return result;
}
