/*
 * XREFs of GreLockVisRgnPublish @ 0x1C003CAB0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore(ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnPublish", ghsemVisRgnPublish, 9LL);
}
