/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x14040EC08
 * Callers:
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1405D5BA4 (PfSnQueueEnablePrefetcherTimer.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
