/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14048D310
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmReleaseLoadKeyContext @ 0x1404D58DC (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x1404D8270 (CmpDoFlushNextHive.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140458AE0 (CmWorkerEngineQueueWorkItem.c)
 */

void __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  signed __int64 v2; // rdi

  v2 = a1 + 4128;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2832));
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 19;
  if ( **(_DWORD **)(a1 + 4104) == 2 && !*(_QWORD *)(a1 + 4120) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 20;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4120), v2, 0LL) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 21;
      *(_DWORD *)(v2 + 16) = 1;
      *(_QWORD *)(v2 + 24) = CmpLateUnloadHiveWorker;
      *(_QWORD *)(v2 + 32) = a1;
      CmpReferenceHive(a1);
      CmWorkerEngineQueueWorkItem((_QWORD *)v2);
    }
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2832));
}
