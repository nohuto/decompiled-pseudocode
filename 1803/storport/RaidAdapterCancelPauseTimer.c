/*
 * XREFs of RaidAdapterCancelPauseTimer @ 0x1C00251DC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0025B64 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C000EFB0 (RaidResumeAdapterQueue.c)
 */

BOOLEAN __fastcall RaidAdapterCancelPauseTimer(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // di

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1);
  return v3;
}
