/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z @ 0x1801502BC
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  *((_BYTE *)this + 184) = *((_BYTE *)a2 + 184);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_BYTE *)this + 192) = *((_BYTE *)a2 + 192);
  *((_BYTE *)this + 193) = *((_BYTE *)a2 + 193);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_BYTE *)this + 208) = *((_BYTE *)a2 + 208);
  *((_BYTE *)this + 209) = *((_BYTE *)a2 + 209);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_BYTE *)this + 220) = *((_BYTE *)a2 + 220);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_BYTE *)this + 232) = *((_BYTE *)a2 + 232);
}
