/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140188F70
 * Callers:
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14000667C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiEmptyKernelStackCache @ 0x14000F458 (MiEmptyKernelStackCache.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x1400128F8 (PfTFullEventListAdd.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     MiAdjustCachedStacks @ 0x14008CEDC (MiAdjustCachedStacks.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     KeAllocateInterrupt @ 0x1400B2D10 (KeAllocateInterrupt.c)
 *     PfFbLogEntryReserve @ 0x1400B99F0 (PfFbLogEntryReserve.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     MiSlistGetFreePage @ 0x1400C807C (MiSlistGetFreePage.c)
 *     EtwpAdjustTraceBuffers @ 0x1400D5060 (EtwpAdjustTraceBuffers.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0FD4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     IoMakeAssociatedIrpPriv @ 0x140117BC4 (IoMakeAssociatedIrpPriv.c)
 *     MiFreeClonePool @ 0x14012BE94 (MiFreeClonePool.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x140234AAC (MiGetUltraMdlContext.c)
 *     ObpDeferPushRefDerefInfo @ 0x140239458 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1402511F0 (RtlpStdGetSpaceForTrace.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402675D8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     EtwpGetStackLookasideListEntry @ 0x14027FA00 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceStackKey @ 0x1402821CC (EtwpTraceStackKey.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140492980 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1404ACFE0 (ObpCaptureObjectName.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x1404EBA2C (IopAllocateMiniCompletionPacket.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14053B1F0 (FsRtlAllocateExtraCreateParameterList.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     CmpExpandPathInfo @ 0x140564BA0 (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x1405AAA04 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1406F4C50 (PfFbBufferListCleanup.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1407A6714 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1407B76A8 (VfPoolCheckForLeaks.c)
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
