/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14002E300
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConfirmPageIsZero @ 0x140053370 (MiConfirmPageIsZero.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiClearContainingMapping @ 0x1400707C8 (MiClearContainingMapping.c)
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiInitializeImageHeaderPage @ 0x1400C7E10 (MiInitializeImageHeaderPage.c)
 *     MiFlushCacheForAttributeChange @ 0x1400CF57C (MiFlushCacheForAttributeChange.c)
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiBuildMappedCluster @ 0x140133CF8 (MiBuildMappedCluster.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiFinishLastForkPageTable @ 0x140142578 (MiFinishLastForkPageTable.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiComputePageHash @ 0x140153754 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x140155748 (MiGetFileHashPage.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14015767C (MiMirrorOmitPagesFromCopy.c)
 *     MiCopySinglePage @ 0x14015B52C (MiCopySinglePage.c)
 *     MiReplicatePteChangeToProcess @ 0x14016B5AC (MiReplicatePteChangeToProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140176218 (MiReadWriteAnyLevelShadowPte.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1401A6244 (MiRewriteTrimPteAsDemandZero.c)
 *     MiUpdateSystemPdes @ 0x14025191C (MiUpdateSystemPdes.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x14025E29C (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFlushHyperSpace @ 0x1400B9164 (MiFlushHyperSpace.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v5; // edi
  _QWORD *v6; // rcx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rsi
  _QWORD *MmInternal; // r10
  __int64 v10; // rdx
  __int64 result; // rax
  bool v12; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = 0;
  v8 = 0LL;
  MmInternal = CurrentPrcb->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
  }
  else
  {
    v8 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v7 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  }
  v10 = ZeroPte;
  *v6 = ZeroPte;
  if ( a3 >= 0 )
  {
    result = MiPteInShadowRange((unsigned __int64)v6);
    if ( !(_DWORD)result )
      goto LABEL_10;
    goto LABEL_9;
  }
  result = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
LABEL_9:
      result = MiWritePteShadow(v6, v10);
  }
LABEL_10:
  if ( !MmInternal )
  {
    v12 = v7 == 64;
    if ( v7 == 64 )
    {
      MiFlushHyperSpace();
      v12 = 1;
    }
    if ( !v12 )
      v5 = v7;
    result = v8 | v5;
    CurrentPrcb->HyperPte = (void *)result;
  }
  if ( a2 != 17 )
  {
    result = a2;
    __writecr8(a2);
  }
  return result;
}
