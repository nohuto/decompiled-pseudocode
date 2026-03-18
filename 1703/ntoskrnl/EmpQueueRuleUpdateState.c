/*
 * XREFs of EmpQueueRuleUpdateState @ 0x140154B40
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x1401E29F0 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x1405A3390 (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x140683AF8 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140683D50 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140683F60 (EmProviderRegisterEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  _QWORD *i; // rax
  _QWORD *PoolWithTag; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  for ( i = (_QWORD *)EmpRuleUpdateQueue; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  return KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
}
