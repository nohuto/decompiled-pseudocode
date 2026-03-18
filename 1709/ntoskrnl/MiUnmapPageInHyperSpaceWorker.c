/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x1400ED258
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiInitializeImageHeaderPage @ 0x1400B7A00 (MiInitializeImageHeaderPage.c)
 *     MiClearContainingMapping @ 0x1400B7E88 (MiClearContainingMapping.c)
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiSlistGetFreePage @ 0x1400C807C (MiSlistGetFreePage.c)
 *     MiFinishLastForkPageTable @ 0x1400CED2C (MiFinishLastForkPageTable.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiBuildMappedCluster @ 0x1400EE1F0 (MiBuildMappedCluster.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017C214 (MiReadWriteAnyLevelShadowPte.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiUpdateSystemPdes @ 0x140213694 (MiUpdateSystemPdes.c)
 *     MiCopySinglePage @ 0x1402179B4 (MiCopySinglePage.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MiPersistPage @ 0x140223640 (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiComputePageHash @ 0x140231ED8 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x140231FD0 (MiGetFileHashPage.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  unsigned __int64 HyperPte; // rbp
  int v5; // edi
  unsigned __int64 v6; // rbp
  int v7; // edi
  _QWORD *v8; // rcx
  unsigned int v9; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 result; // rax

  v3 = a2;
  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  v5 = HyperPte & 0xFFF;
  v6 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v7 = v5 + 1;
  v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 0;
  *v8 = 0LL;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v8, 0LL);
  if ( v7 == 64 )
    MiFlushHyperSpace(v8, a2, a3);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v7 != 64 )
    v9 = v7;
  result = v6 | v9;
  CurrentPrcb->HyperPte = (void *)result;
  if ( v3 != 17 )
  {
    result = v3;
    __writecr8(v3);
  }
  return result;
}
