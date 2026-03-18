/*
 * XREFs of ExWaitForUnblockPushLock @ 0x140284FC0
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1400BD7E0 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(volatile __int64 *a1, volatile signed __int32 *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
