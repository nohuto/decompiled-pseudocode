/*
 * XREFs of ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N888881@Z @ 0x180142E70
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7,
        __int128 *a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  __int128 v14; // xmm1

  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_OWORD *)(a1 + 40) = *a7;
  *(_OWORD *)(a1 + 56) = a7[1];
  *(_OWORD *)(a1 + 72) = a7[2];
  *(_OWORD *)(a1 + 88) = a7[3];
  *(_OWORD *)(a1 + 104) = a7[4];
  *(_OWORD *)(a1 + 120) = a7[5];
  *(_OWORD *)(a1 + 136) = a7[6];
  v14 = *a8;
  *(_QWORD *)(a1 + 168) = a9;
  *(_BYTE *)(a1 + 176) = a10;
  *(_BYTE *)(a1 + 177) = a11;
  *(_BYTE *)(a1 + 178) = a12;
  *(_BYTE *)(a1 + 179) = a13;
  *(_BYTE *)(a1 + 180) = a14;
  *(_BYTE *)(a1 + 181) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_BYTE *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_WORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 204) = 0LL;
  *(_DWORD *)(a1 + 212) = 0;
  *(_WORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 220) = 0LL;
  *(_BYTE *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_BYTE *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 152) = v14;
  COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)a1);
}
