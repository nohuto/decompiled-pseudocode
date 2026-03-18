/*
 * XREFs of ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x18016F200
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18008112C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
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
