/*
 * XREFs of PnpChainDereferenceComplete @ 0x1405C9C70
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x140145630 (PnpIsChainDereferenced.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 *     IopSetRelationsTag @ 0x1405CA244 (IopSetRelationsTag.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x140727AA4 (PnpDelayedRemoveWorkerContextCreate.c)
 */

void __fastcall PnpChainDereferenceComplete(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  int *v6; // rcx
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  bool v11; // zf
  void *v12; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  for ( i = (PVOID *)IopPendingSurpriseRemovals; ; i = (PVOID *)*i )
  {
    if ( i == &IopPendingSurpriseRemovals )
      goto LABEL_14;
    if ( !*((_BYTE *)i + 104) && (int)IopSetRelationsTag(i[8], a1) >= 0 )
    {
      v6 = *(int **)i[8];
      v7 = i[7];
      v8 = v6[2];
      v9 = *v6;
      v10 = v7 ? *(_QWORD *)(v7[39] + 40LL) : 0LL;
      if ( v8 == v9 && *(_DWORD *)(v10 + 300) != 782 )
        break;
    }
  }
  v11 = PnpDelayedRemovePending == 0;
  *((_BYTE *)i + 104) = 1;
  if ( !v11 )
  {
LABEL_14:
    ExReleaseResourceLite(&IopSurpriseRemoveListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return;
  }
  PnpDelayedRemovePending = 1;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a2 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpDelayedRemoveWorker(0LL);
  }
  else
  {
    v12 = (void *)PnpDelayedRemoveWorkerContextCreate(i);
    PnpDelayedRemoveWorkItem.List.Flink = 0LL;
    PnpDelayedRemoveWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDelayedRemoveWorker;
    PnpDelayedRemoveWorkItem.Parameter = v12;
    ExQueueWorkItem(&PnpDelayedRemoveWorkItem, DelayedWorkQueue);
  }
}
