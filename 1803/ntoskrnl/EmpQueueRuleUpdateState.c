/*
 * XREFs of EmpQueueRuleUpdateState @ 0x140175D14
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x140224230 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x14062AC40 (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x1407136A0 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140713900 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140713B10 (EmProviderRegisterEntry.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  _QWORD *i; // rax
  __int64 v7; // r8
  _QWORD *PoolWithTag; // rax
  char v9; // al

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  for ( i = (_QWORD *)EmpRuleUpdateQueue; i; i = (_QWORD *)*i )
  {
    v7 = (__int64)(i - 1);
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        *(_QWORD *)(v7 + 16) = 0LL;
        goto LABEL_8;
      }
      break;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x75714D45u);
  if ( PoolWithTag )
  {
    *PoolWithTag = a1;
    PoolWithTag[2] = a2;
    PoolWithTag[1] = EmpRuleUpdateQueue;
    EmpRuleUpdateQueue = (__int64)(PoolWithTag + 1);
    if ( !EmpWorkerBusy )
    {
      _InterlockedExchange(&EmpWorkerBusy, 1);
      ExQueueWorkItem(&EmpRuleUpdateWorker, DelayedWorkQueue);
    }
  }
LABEL_8:
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock, v4, v7, v5);
  return KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
}
