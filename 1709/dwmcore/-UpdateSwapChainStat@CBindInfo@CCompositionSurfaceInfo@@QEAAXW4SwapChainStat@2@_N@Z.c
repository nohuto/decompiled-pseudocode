/*
 * XREFs of ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x180075ED8
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180066ECC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x180075F7C (-TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x18007607C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180144378 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // r10

  v4 = a2;
  if ( a1[36] )
  {
    v6 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 24LL) + 8LL))(*(_QWORD *)(*a1 + 24LL)) + 472);
    if ( a3 )
      a1[2 * v4 + 28] = v6;
    else
      a1[2 * v4 + 29] += (v6 - a1[2 * v4 + 28]) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  }
}
