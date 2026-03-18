/*
 * XREFs of ?FillShapeWithBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18001E3AC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 */

__int64 __fastcall CWindowNode::FillShapeWithBitmap(
        __int64 a1,
        CDrawingContext *a2,
        CCachedVisualImage *a3,
        __int64 a4,
        struct CShape *a5,
        int a6,
        __int64 a7)
{
  int v8; // [rsp+30h] [rbp-18h]

  return CDrawingContext::FillShapeWithBitmap(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           v8,
           a3 == (CCachedVisualImage *)((*(_QWORD *)(a1 + 920) + 64LL) & -(__int64)(*(_QWORD *)(a1 + 920) != 0LL)));
}
