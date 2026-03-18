/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x1801418D8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *((_BYTE *)this + 192) = *((_BYTE *)a2 + 192);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_BYTE *)this + 200) = *((_BYTE *)a2 + 200);
  *((_BYTE *)this + 201) = *((_BYTE *)a2 + 201);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  *((_BYTE *)this + 217) = *((_BYTE *)a2 + 217);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_BYTE *)this + 228) = *((_BYTE *)a2 + 228);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((_BYTE *)this + 240) = *((_BYTE *)a2 + 240);
}
