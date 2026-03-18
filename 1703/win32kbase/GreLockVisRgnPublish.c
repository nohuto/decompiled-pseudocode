/*
 * XREFs of GreLockVisRgnPublish @ 0x1C007D190
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore(ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemVisRgnPublish", (int)ghsemVisRgnPublish, 9);
}
