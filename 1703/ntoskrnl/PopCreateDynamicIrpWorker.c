/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1401495A0
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x14013CE5C (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x140166890 (PopIrpWorkerControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x14014960C (PopCreatePowerThread.c)
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
