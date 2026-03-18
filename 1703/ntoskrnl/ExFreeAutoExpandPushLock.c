/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x1401530B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1400249DC (ExpCleanupAutoExpandPushLock.c)
 */

void __fastcall ExFreeAutoExpandPushLock(void *a1)
{
  ExpCleanupAutoExpandPushLock((__int64)a1);
  ExFreePoolWithTag(a1, 0);
}
