/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x14016C860
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x140155118 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x140185100 (PopIrpWorkerControl.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopCreatePowerThread @ 0x14016C8CC (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rdi
  int PowerThread; // ebx

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = v2;
  if ( v2 )
  {
    *v2 = a1;
    PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
    if ( PowerThread >= 0 )
      PowerThread = 0;
  }
  else
  {
    PowerThread = -1073741670;
  }
  if ( PowerThread < 0 )
  {
    if ( v3 )
      ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v3);
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  return (unsigned int)PowerThread;
}
