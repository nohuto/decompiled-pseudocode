/*
 * XREFs of ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007A6F0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180167830 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::ResetOverlayCandidatesList(COverlayContext *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 54); ++i )
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 24) + 248LL * i));
  *((_DWORD *)this + 54) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 192, 0xF8u);
}
