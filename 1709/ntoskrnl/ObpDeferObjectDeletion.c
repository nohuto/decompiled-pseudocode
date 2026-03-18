/*
 * XREFs of ObpDeferObjectDeletion @ 0x1401226B0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObDereferenceObjectEx @ 0x140067B38 (ObDereferenceObjectEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140076620 (NtReleaseWorkerFactoryWorker.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExTimerRundown @ 0x1400A9724 (ExTimerRundown.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     NtCancelTimer @ 0x1400E1574 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax
  WORK_QUEUE_TYPE v3; // edx

  _m_prefetchw(&ObpRemoveObjectList);
  v1 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, v3);
    else
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
  }
}
