/*
 * XREFs of ?HasRealizationContextChanged@CLinearGradientLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x180154070
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002A3E0 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::HasRealizationContextChanged(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2)
{
  unsigned int v2; // r8d

  if ( *((_DWORD *)this + 31) != 1 || !operator!=((float *)a2 + 36, (float *)this + 18) )
    return 0;
  return v2;
}
