/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x1400BABE0
 * Callers:
 *     MiSwitchKstackPages @ 0x1400027AC (MiSwitchKstackPages.c)
 *     MiSwapStackPageNoDpc @ 0x140002BDC (MiSwapStackPageNoDpc.c)
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400CB730 (MiUnlockNestedProtoPoolPage.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1401A6244 (MiRewriteTrimPteAsDemandZero.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14026D914 (MiSwapHardFaultPage.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
