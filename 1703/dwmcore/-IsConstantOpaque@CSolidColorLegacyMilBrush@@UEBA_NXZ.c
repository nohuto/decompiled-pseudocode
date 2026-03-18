/*
 * XREFs of ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x18004BC60
 * Callers:
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18004AF90 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009BC50 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsConstantOpaque(CSolidColorLegacyMilBrush *this)
{
  return !*((_QWORD *)this + 10) && *((double *)this + 9) == 1.0 && *((float *)this + 29) == 1.0;
}
