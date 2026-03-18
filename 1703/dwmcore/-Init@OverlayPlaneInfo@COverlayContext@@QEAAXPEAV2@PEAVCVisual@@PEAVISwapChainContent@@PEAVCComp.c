/*
 * XREFs of ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N888881@Z @ 0x180150F8C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
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
        __int64 a7,
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
  *(_OWORD *)(a1 + 40) = *(_OWORD *)a7;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a7 + 16);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a7 + 32);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a7 + 48);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a7 + 64);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a7 + 80);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a7 + 96);
  v14 = *a8;
  *(_QWORD *)(a1 + 160) = a9;
  *(_BYTE *)(a1 + 168) = a10;
  *(_BYTE *)(a1 + 169) = a11;
  *(_BYTE *)(a1 + 170) = a12;
  *(_BYTE *)(a1 + 171) = a13;
  *(_BYTE *)(a1 + 172) = a14;
  *(_BYTE *)(a1 + 173) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_WORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 196) = 0LL;
  *(_DWORD *)(a1 + 204) = 0;
  *(_WORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 212) = 0LL;
  *(_BYTE *)(a1 + 220) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_BYTE *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 144) = v14;
  COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)a1);
}
