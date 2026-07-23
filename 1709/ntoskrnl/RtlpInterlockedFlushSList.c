/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140188FF0
 * Callers:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006EBC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfFbBufferListFlushStandby @ 0x140011DE4 (PfFbBufferListFlushStandby.c)
 *     MiDrainZeroLookasides @ 0x140031040 (MiDrainZeroLookasides.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiFreePageFileHashPfns @ 0x1400F0478 (MiFreePageFileHashPfns.c)
 *     ExpFlushGeneralLookaside @ 0x140123D04 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140123D90 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryManagerThread @ 0x140145860 (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1402659AC (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x140455360 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140455670 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x140689490 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1406F16D8 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1406F2148 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140752884 (EtwpFreeStackCache.c)
 *     ExDrainPoolLookasideList @ 0x140757D88 (ExDrainPoolLookasideList.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1407B7890 (ViPoolDelayFreeTrimThreadRoutine.c)
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
