/*
 * XREFs of ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x18007B990
 * Callers:
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18004AFDC (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002A3E0 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::HasRealizationContextChanged(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_DWORD *)this + 94) || *((_DWORD *)this + 108) == 1 && operator!=((float *)a2 + 36, (float *)this + 96) )
    return 1;
  return v2;
}
