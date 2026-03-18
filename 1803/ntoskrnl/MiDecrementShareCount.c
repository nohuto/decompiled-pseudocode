/*
 * XREFs of MiDecrementShareCount @ 0x140054240
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiDeleteTopLevelPage @ 0x140070754 (MiDeleteTopLevelPage.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiAddSystemPageTableToList @ 0x1400B971C (MiAddSystemPageTableToList.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiFreeUnmappedPageTables @ 0x140137914 (MiFreeUnmappedPageTables.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     MiFinishLastForkPageTable @ 0x140142578 (MiFinishLastForkPageTable.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1401A6244 (MiRewriteTrimPteAsDemandZero.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiInitializeProtoPfn @ 0x1402681CC (MiInitializeProtoPfn.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x1408B2D58 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = *(_BYTE *)(a1 + 34);
  v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a1 + 0x58000000000LL) / 48, v1 & 7, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a1 + 24) ^= ((v2 - 1) ^ *(_QWORD *)(a1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v2 == 1 )
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
