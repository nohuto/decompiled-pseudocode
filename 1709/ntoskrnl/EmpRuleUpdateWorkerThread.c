/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x140154320
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EmpUpdateRuleState @ 0x1400B0FE4 (EmpUpdateRuleState.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

char EmpRuleUpdateWorkerThread()
{
  __int64 v0; // rsi
  char v1; // al
  char v2; // al
  char v3; // bl
  char result; // al

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  while ( 1 )
  {
    v0 = EmpRuleUpdateQueue;
    if ( !EmpRuleUpdateQueue )
      break;
    EmpRuleUpdateQueue = *(_QWORD *)EmpRuleUpdateQueue;
    v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(_QWORD *)(v0 - 8));
    v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag((PVOID)(v0 - 8), 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
