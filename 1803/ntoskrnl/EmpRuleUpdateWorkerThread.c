/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x140181EB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     EmpUpdateRuleState @ 0x1400749FC (EmpUpdateRuleState.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

char EmpRuleUpdateWorkerThread()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al
  char v8; // bl
  char result; // al

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  while ( 1 )
  {
    v3 = EmpRuleUpdateQueue;
    if ( !EmpRuleUpdateQueue )
      break;
    EmpRuleUpdateQueue = *(_QWORD *)EmpRuleUpdateQueue;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock, v0, v1, v2);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    EmpUpdateRuleState(*(_QWORD *)(v3 - 8));
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, v4, v5, v6);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag((PVOID)(v3 - 8), 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  }
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock, v0, v1, v2);
  result = KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
