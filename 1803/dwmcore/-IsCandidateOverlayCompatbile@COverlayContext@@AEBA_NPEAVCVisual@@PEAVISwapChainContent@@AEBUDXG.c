/*
 * XREFs of ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801667DC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUtagRECT@@1_N@Z @ 0x180163AF4 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUtagRECT@@1_N@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180165F98 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 */

char __fastcall COverlayContext::IsCandidateOverlayCompatbile(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a4,
        enum DXGI_MODE_ROTATION a5,
        unsigned int a6,
        bool a7)
{
  char v11; // bl

  v11 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 104LL))(a3)
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, a2, 0LL, 0LL) == -1
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(this, 0LL, a3, 0LL) == -1
    && !IsRectEmpty((const RECT *)((char *)a4 + 4))
    && !IsRectEmpty((const RECT *)((char *)a4 + 20))
    && !IsRectEmpty((const RECT *)((char *)a4 + 36))
    && COverlayContext::AreSupportedStretchFactors(
         this,
         a3,
         (const struct tagRECT *)((char *)a4 + 4),
         (const struct tagRECT *)((char *)a4 + 20),
         a5 == DXGI_MODE_ROTATION_ROTATE90)
    && (a7 && *((_BYTE *)this + 1199) || *((_BYTE *)this + 1185) || a6 > 2) )
  {
    return 1;
  }
  return v11;
}
