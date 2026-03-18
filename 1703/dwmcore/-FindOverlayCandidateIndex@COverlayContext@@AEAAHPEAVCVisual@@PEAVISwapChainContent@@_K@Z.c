/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180150C68
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
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
  if ( *((_DWORD *)this + 50) )
  {
    while ( a2 && *(struct CVisual **)(240LL * v5 + *((_QWORD *)this + 22) + 8) != a2
         || a3 && *(struct ISwapChainContent **)(240LL * v5 + *((_QWORD *)this + 22) + 16) != a3
         || a4 && *(_QWORD *)(240LL * v5 + *((_QWORD *)this + 22) + 32) != a4 )
    {
      if ( ++v5 >= *((_DWORD *)this + 50) )
        return v4;
    }
    return v5;
  }
  return v4;
}
