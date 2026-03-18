/*
 * XREFs of WmipInitializeRegistration @ 0x140844394
 * Callers:
 *     WMIInitialize @ 0x1408407F0 (WMIInitialize.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 */

void __fastcall WmipInitializeRegistration(int a1)
{
  if ( a1 )
  {
    WmipRegWorkQueue.Parameter = 0LL;
    WmipRegWorkQueue.WorkerRoutine = (void (__fastcall *)(void *))WmipRegistrationWorker;
    WmipRegWorkQueue.List.Flink = 0LL;
    if ( _InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF) != 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    ExInitializeNPagedLookasideListInternal((__int64)&WmipRegLookaside, 0LL, 0LL, 512, 64, 1382640983, 0, 0);
    WmipRegistrationSpinLock = 0LL;
    WmipCancelSpinLock = 0LL;
  }
}
