/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x1400ED9A0
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
 *     MiFlushCacheForAttributeChange @ 0x1400ED7F4 (MiFlushCacheForAttributeChange.c)
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
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  bool v4; // cf
  int v5; // r8d
  int v7; // eax
  unsigned __int64 ValidPte; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 *v12; // r8
  bool v13; // cc

  v4 = (a3 & 0x20000000) != 0;
  v5 = 1;
  if ( !v4 )
    v5 = 4;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v5 |= 0x2000018u;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  }
  if ( !v7 || v7 == 3 )
  {
    v5 |= 8u;
  }
  else if ( v7 == 2 )
  {
    v5 |= 0x18u;
  }
LABEL_12:
  ValidPte = MiMakeValidPte(0LL, a1, v5 | 0xA0000000);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
      + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v12 = ValidPte;
  if ( a3 >= 0 )
  {
    if ( (unsigned __int64)v12 < 0xFFFFF6FB7DBED000uLL )
      return v11;
    v13 = (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL;
  }
  else
  {
    if ( (unsigned __int64)v12 < 0xFFFFF6FB7DBED000uLL )
      return v11;
    v13 = (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL;
  }
  if ( v13 )
    MiWritePteShadow(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ValidPte);
  return v11;
}
