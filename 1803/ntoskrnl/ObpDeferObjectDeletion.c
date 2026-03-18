/*
 * XREFs of ObpDeferObjectDeletion @ 0x1400BD920
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     ExTimerRundown @ 0x140040D7C (ExTimerRundown.c)
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     ObDereferenceObjectEx @ 0x14005A5F0 (ObDereferenceObjectEx.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rdx
  signed __int64 i; // rax
  WORK_QUEUE_TYPE v6; // edx

  _m_prefetchw(&ObpRemoveObjectList);
  v4 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v4);
        i != v4;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v4 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v4 )
  {
    if ( (unsigned __int8)KeAreInterruptsEnabled(a1, 0LL, a3, a4) && KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, v6);
    else
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
  }
}
