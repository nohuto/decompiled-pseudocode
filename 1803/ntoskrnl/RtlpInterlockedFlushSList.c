/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401B2C50
 * Callers:
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     PfFbBufferListFlushStandby @ 0x14007AC44 (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x140080B6C (MiFreePageFileHashPfns.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14009AD0C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x1400B1B20 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x1400C2E94 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1400C2F20 (ExFlushLookasideListEx.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1400CDC88 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpWorkerFactoryManagerThread @ 0x140176D50 (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     RtlpHpLfhCacheEmpty @ 0x14029A380 (RtlpHpLfhCacheEmpty.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1402B5240 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1402B54CC (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x1405292B0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140529600 (PfpFlushBuffers.c)
 *     ExDrainPoolLookasideList @ 0x1405ECFB8 (ExDrainPoolLookasideList.c)
 *     CmUnRegisterCallback @ 0x1406ED880 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x14075AAC4 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14075B53C (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x1407B31E8 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1407B3C74 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B3E20 (EtwpCovSampCaptureWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140824AF0 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
