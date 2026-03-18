/*
 * XREFs of ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001AA24
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007A658 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x1800824A4 (-TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x1800825FC (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // r9

  v4 = a2;
  if ( a1[36] )
  {
    v6 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 24LL) + 8LL))(*(_QWORD *)(*a1 + 24LL)) + 496);
    if ( a3 )
      a1[2 * v4 + 28] = v6;
    else
      a1[2 * v4 + 29] += (v6 - a1[2 * v4 + 28]) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  }
}
