/*
 * XREFs of ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014B124
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18014BA88 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180160020 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCShape@@@Z @ 0x180162C08 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCShape@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18004BB40 (--0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x1800C92E0 (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::CreateFromColor(
        struct CSolidColorLegacyMilBrush **a1,
        struct CComposition *a2,
        const struct _D3DCOLORVALUE *a3)
{
  unsigned int v6; // edi
  CSolidColorLegacyMilBrush *v7; // rax
  CSolidColorLegacyMilBrush *v8; // rbx
  __int128 v9; // xmm0

  v6 = 0;
  v7 = (CSolidColorLegacyMilBrush *)CSolidColorLegacyMilBrush::operator new();
  if ( v7 )
    v8 = CSolidColorLegacyMilBrush::CSolidColorLegacyMilBrush(v7, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *(_OWORD *)&a3->r;
    *((_QWORD *)v8 + 9) = 0x3FF0000000000000LL;
    *(_OWORD *)((char *)v8 + 104) = v9;
    CBitmapOfDeviceBitmaps::AddRef(v8);
    *a1 = v8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
  }
  return v6;
}
