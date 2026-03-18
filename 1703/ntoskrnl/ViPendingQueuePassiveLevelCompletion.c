/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140772150
 * Callers:
 *     ViPendingDelayCompletion @ 0x140771FE0 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ViPendingTryReserveWorker @ 0x1402510B0 (ViPendingTryReserveWorker.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  KPRIORITY v4; // edi
  unsigned int v5; // eax
  __int64 v7; // rbx

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v4 = PriorityThread;
  --CurrentThread->KernelApcDisable;
  v5 = ViPendingTryReserveWorker(a1);
  if ( v5 == -1 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v7 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v7), v4);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v7 + 16), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 1LL;
}
