/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x1404291BC
 * Callers:
 *     PfSnBeginBootPhase @ 0x140429124 (PfSnBeginBootPhase.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1405EF37C (PfSnQueueEnablePrefetcherTimer.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *PoolWithTag; // rax
  struct _KDPC *v3; // rbx

  PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x77506343u);
  v3 = (struct _KDPC *)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeTimerEx(PoolWithTag, NotificationTimer);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
