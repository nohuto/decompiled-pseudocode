/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140032530
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConfirmPageIsZero @ 0x140053370 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
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
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3, __int64 a4)
{
  bool v5; // cf
  int v6; // r8d
  int v8; // eax
  unsigned __int64 ValidPte; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *MmInternal; // rsi
  unsigned __int64 UltraMapping; // r10
  unsigned __int64 *v14; // r8
  unsigned __int64 *v15; // rcx

  v5 = (a3 & 0x20000000) != 0;
  v6 = 1;
  if ( !v5 )
    v6 = 4;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = a3 & 3;
    if ( v8 == 2 )
    {
      v6 |= 0x2000018u;
      goto LABEL_12;
    }
  }
  else
  {
    v8 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  }
  if ( !v8 || v8 == 3 )
  {
    v6 |= 8u;
  }
  else if ( v8 == 2 )
  {
    v6 |= 0x18u;
  }
LABEL_12:
  ValidPte = MiMakeValidPte(0LL, a1, v6 | 0xA0000000, a4);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = CurrentPrcb->MmInternal;
  if ( !MmInternal
    || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
        v14 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        MmInternal[1543] = v14,
        !UltraMapping) )
  {
    UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                 + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v14 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  *v14 = ValidPte;
  if ( a3 >= 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)v14) )
      goto LABEL_22;
  }
  else if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v15 = v14;
LABEL_22:
    MiWritePteShadow(v15, ValidPte);
  }
  return UltraMapping;
}
