/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1401B2BD0
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiAdjustCachedStacks @ 0x1400380FC (MiAdjustCachedStacks.c)
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140081174 (MiReclaimUnusedUltraMdlMaps.c)
 *     PfFbLogEntryReserve @ 0x14008BA6C (PfFbLogEntryReserve.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x14008E958 (PfTFullEventListAdd.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140099560 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     IoMakeAssociatedIrpPriv @ 0x1400A4924 (IoMakeAssociatedIrpPriv.c)
 *     MiGetPageSlist @ 0x1400AA3F0 (MiGetPageSlist.c)
 *     MiSlistGetFreePage @ 0x1400B82CC (MiSlistGetFreePage.c)
 *     MiFreeClonePool @ 0x1400CEA18 (MiFreeClonePool.c)
 *     EtwpAdjustTraceBuffers @ 0x1400D3DA0 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MiAllocatePoolPages @ 0x1400D85D8 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140152AF8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     KeAllocateInterrupt @ 0x140168D78 (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x140186CB0 (MiEmptyKernelStackCache.c)
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14026D360 (MiGetUltraMdlContext.c)
 *     ObpDeferPushRefDerefInfo @ 0x140270F18 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x140286CB4 (RtlpStdGetSpaceForTrace.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14029B8A4 (RtlpHpLfhSubsegmentCreate.c)
 *     EtwpGetStackLookasideListEntry @ 0x1402AE040 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1402B4280 (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1402B561C (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1404E4380 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1404F3FE0 (FsRtlAllocateExtraCreateParameterList.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 *     CmpExpandPathInfo @ 0x140513354 (CmpExpandPathInfo.c)
 *     IopAllocateMiniCompletionPacket @ 0x14052EBDC (IopAllocateMiniCompletionPacket.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1405AD0E0 (ObpCaptureObjectName.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 *     WdipSemFastAllocate @ 0x14060CBAC (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x14075CFC0 (PfFbBufferListCleanup.c)
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140813894 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1408248DC (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
