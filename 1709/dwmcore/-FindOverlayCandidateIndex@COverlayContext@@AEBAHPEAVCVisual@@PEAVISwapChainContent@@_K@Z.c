/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180142B90
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801433A8 (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180144378 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        __int64 a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r10d

  v4 = -1;
  v5 = 0;
  if ( *((_DWORD *)this + 52) )
  {
    while ( a2 && *(struct CVisual **)(248LL * v5 + *((_QWORD *)this + 23) + 8) != a2
         || a3 && *(struct ISwapChainContent **)(248LL * v5 + *((_QWORD *)this + 23) + 16) != a3
         || a4 && *(_QWORD *)(248LL * v5 + *((_QWORD *)this + 23) + 32) != a4 )
    {
      if ( ++v5 >= *((_DWORD *)this + 52) )
        return v4;
    }
    return v5;
  }
  return v4;
}
