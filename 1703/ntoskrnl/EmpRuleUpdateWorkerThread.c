/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x140163980
 * Callers:
 *     <none>
 * Callees:
 *     EmpUpdateRuleState @ 0x140070B88 (EmpUpdateRuleState.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 EmpRuleUpdateWorkerThread()
{
  __int64 v0; // rsi
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  while ( 1 )
  {
    v0 = EmpRuleUpdateQueue;
    if ( !EmpRuleUpdateQueue )
      break;
    EmpRuleUpdateQueue = *(_QWORD *)EmpRuleUpdateQueue;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(_QWORD *)(v0 - 8));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag((PVOID)(v0 - 8), 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
