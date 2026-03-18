/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x140103140
 * Callers:
 *     MiFinishLastForkPageTable @ 0x140002EB4 (MiFinishLastForkPageTable.c)
 *     MiSlistGetFreePage @ 0x14001DFF8 (MiSlistGetFreePage.c)
 *     MiBuildMappedCluster @ 0x140020978 (MiBuildMappedCluster.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 *     MiInitializeImageHeaderPage @ 0x14005DF60 (MiInitializeImageHeaderPage.c)
 *     MiClearContainingMapping @ 0x140063350 (MiClearContainingMapping.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConfirmPageIsZero @ 0x1401041F0 (MiConfirmPageIsZero.c)
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiComputePageHash @ 0x14013B500 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x14013D880 (MiGetFileHashPage.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017CABC (MiReadWriteAnyLevelShadowPte.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiUpdateSystemPdes @ 0x14020C6F4 (MiUpdateSystemPdes.c)
 *     MiCopySinglePage @ 0x140210384 (MiCopySinglePage.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MiFlushFileOnlyMdl @ 0x140218B04 (MiFlushFileOnlyMdl.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUnmapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  unsigned __int64 result; // rax

  v3 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v4 = (_QWORD *)((((a1 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v4 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v4) )
    MiWritePteShadow(v5);
  if ( v6 == 64 )
  {
    MiFlushHyperSpace();
    v6 = 0;
  }
  result = v3 | v6;
  KeGetCurrentPrcb()->HyperPte = (void *)result;
  if ( a2 != 17 )
  {
    result = a2;
    __writecr8(a2);
  }
  return result;
}
