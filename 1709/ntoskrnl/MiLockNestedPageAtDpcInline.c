/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x14011C690
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x1400CE7A0 (MiSwapStackPageNoDpc.c)
 *     MiSwitchKstackPages @ 0x1400D059C (MiSwitchKstackPages.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MiReplacePageOfProtoPool @ 0x14011DA1C (MiReplacePageOfProtoPool.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140131C48 (MiUnlockNestedProtoPoolPage.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiSwapHardFaultPage @ 0x140235F34 (MiSwapHardFaultPage.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
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
