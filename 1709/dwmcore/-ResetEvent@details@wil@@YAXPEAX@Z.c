/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180151528
 * Callers:
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 *     ?PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9094 (-PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     ?PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9230 (-PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801BF828 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x1801C2530 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1801C26B4 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011FF64 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x873,
      (__int64)"internal\\sdk\\inc\\wil/resource.h",
      v2);
    __debugbreak();
  }
}
