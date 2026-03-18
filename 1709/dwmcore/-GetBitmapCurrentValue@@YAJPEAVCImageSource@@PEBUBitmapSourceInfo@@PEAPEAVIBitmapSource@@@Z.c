/*
 * XREFs of ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18007B114
 * Callers:
 *     ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18007C600 (-GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilR.c)
 *     ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x18007C830 (-NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetBitmapCurrentValue(
        struct CImageSource *a1,
        const struct BitmapSourceInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v3; // ebx
  signed int v4; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    v4 = (*(__int64 (__fastcall **)(char *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*((_QWORD *)a1 + 1) + 72LL))(
           (char *)a1 + 8,
           a3,
           a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x2Du);
  }
  return v3;
}
