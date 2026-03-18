/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14049BB4C
 * Callers:
 *     CmpDoFlushNextHive @ 0x14049B930 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x14049BE14 (CmReleaseLoadKeyContext.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x14049D1FC (CmpReferenceHive.c)
 *     CmWorkerEngineQueueWorkItem @ 0x14057F594 (CmWorkerEngineQueueWorkItem.c)
 */

char __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al

  v1 = (volatile signed __int64 *)(a1 + 1672);
  v3 = a1 + 2952;
  ExAcquirePushLockExclusiveEx(a1 + 1672, 0LL);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4292), 1u) & 0x7F) + 4296) = 19;
  if ( **(_DWORD **)(a1 + 2928) == 2 && !*(_QWORD *)(a1 + 2944) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4292), 1u) & 0x7F) + 4296) = 20;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2944), v3, 0LL) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4292), 1u) & 0x7F) + 4296) = 21;
      *(_DWORD *)(v3 + 16) = 1;
      *(_QWORD *)(v3 + 24) = CmpLateUnloadHiveWorker;
      *(_QWORD *)(v3 + 32) = a1;
      CmpReferenceHive(a1);
      CmWorkerEngineQueueWorkItem(v3);
    }
  }
  v7 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v1, v4, v5, v6);
  return KeAbPostRelease((ULONG_PTR)v1);
}
