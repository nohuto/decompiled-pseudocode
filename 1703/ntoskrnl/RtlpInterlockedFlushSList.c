/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1401894F0
 * Callers:
 *     MiDrainZeroLookasides @ 0x14001C448 (MiDrainZeroLookasides.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001FDF0 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x14002D7C0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14002D850 (ExFlushLookasideListEx.c)
 *     PfFbBufferListFlushStandby @ 0x14005F298 (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x140083F7C (MiFreePageFileHashPfns.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     ExpWorkerFactoryManagerThread @ 0x14015D930 (ExpWorkerFactoryManagerThread.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     PfpFlushEventBuffers @ 0x1404962F0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140496650 (PfpFlushBuffers.c)
 *     ExDrainPoolLookasideList @ 0x14057A8E0 (ExDrainPoolLookasideList.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1406C2C74 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1406C36D8 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140713738 (EtwpFreeStackCache.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140775A50 (ViPoolDelayFreeTrimThreadRoutine.c)
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
