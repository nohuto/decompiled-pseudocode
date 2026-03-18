/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14047BEE8
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmReleaseLoadKeyContext @ 0x1404E3934 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x1404E3960 (CmpDoFlushNextHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140597A78 (CmWorkerEngineQueueWorkItem.c)
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
      CmWorkerEngineQueueWorkItem(v2);
    }
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2832));
}
