/*
 * XREFs of ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800211D4
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800715B0 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x180075D2C (-TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180075E2C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // r10

  v4 = a2;
  if ( a1[36] )
  {
    v6 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 24LL) + 8LL))(*(_QWORD *)(*a1 + 24LL)) + 520);
    if ( a3 )
      a1[2 * v4 + 28] = v6;
    else
      a1[2 * v4 + 29] += (v6 - a1[2 * v4 + 28]) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  }
}
