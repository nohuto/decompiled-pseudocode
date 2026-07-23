/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140189470
 * Callers:
 *     MiFreeClonePool @ 0x140004ABC (MiFreeClonePool.c)
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MiSlistGetFreePage @ 0x14001DFF8 (MiSlistGetFreePage.c)
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     MiEmptyKernelStackCache @ 0x14003C924 (MiEmptyKernelStackCache.c)
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x1400602BC (PfTFullEventListAdd.c)
 *     PfFbLogEntryReserve @ 0x140060480 (PfFbLogEntryReserve.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     EtwpAdjustTraceBuffers @ 0x14011D770 (EtwpAdjustTraceBuffers.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011FA24 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140121190 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     IoMakeAssociatedIrpPriv @ 0x14012C03C (IoMakeAssociatedIrpPriv.c)
 *     KeAllocateInterrupt @ 0x14014C058 (KeAllocateInterrupt.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140226CAC (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x14023B964 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x140256B28 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     CmpExpandPathInfo @ 0x14043C248 (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x140467AE4 (WdipSemFastAllocate.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14048E320 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObpCaptureObjectName @ 0x14052E190 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140545270 (FsRtlAllocateExtraCreateParameterList.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14055DE1C (IopAllocateMiniCompletionPacket.c)
 *     PfFbBufferListCleanup @ 0x1406C5130 (PfFbBufferListCleanup.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1407649F0 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1407758E8 (VfPoolCheckForLeaks.c)
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
