/*
 * XREFs of RaidAdapterSetPauseTimer @ 0x1C002E734
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C000CC80 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119A4 (RaidResumeAdapterQueue.c)
 */

BOOLEAN __fastcall RaidAdapterSetPauseTimer(__int64 a1, struct _KTIMER *a2, struct _KDPC *Dpc, unsigned int a4)
{
  BOOLEAN v5; // di

  v5 = KeSetCoalescableTimer(a2, (LARGE_INTEGER)(-10000000LL * a4), 0, 0, Dpc);
  if ( v5 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1);
  return v5;
}
