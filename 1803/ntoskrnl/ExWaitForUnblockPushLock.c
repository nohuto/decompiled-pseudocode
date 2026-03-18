/*
 * XREFs of ExWaitForUnblockPushLock @ 0x1402B9680
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1400A1DC0 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(__int64 a1, volatile signed __int32 *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
