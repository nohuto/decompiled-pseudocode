/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180165F98
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801667DC (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r10
  unsigned int v9; // r9d
  unsigned int v10; // edx

  v4 = -1;
  v5 = 0LL;
  if ( a3 )
    v5 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 200LL))(a3);
  v9 = *((_DWORD *)this + 54);
  v10 = 0;
  if ( v9 )
  {
    while ( a2 && *(struct CVisual **)(248LL * v10 + *((_QWORD *)this + 24) + 8) != a2
         || v5 && *(_QWORD *)(248LL * v10 + *((_QWORD *)this + 24) + 24) != v5
         || a4 && *(_QWORD *)(248LL * v10 + *((_QWORD *)this + 24) + 32) != a4 )
    {
      if ( ++v10 >= v9 )
        return v4;
    }
    return v10;
  }
  return v4;
}
