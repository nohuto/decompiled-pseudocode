/*
 * XREFs of ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18007D36C
 * Callers:
 *     ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18007B3D0 (-GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV-$TMilR.c)
 *     ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x18007B600 (-NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVC.c)
 * Callees:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetBitmapCurrentValue(
        struct CImageSource *a1,
        const struct BitmapSourceInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v3; // ebx
  CCachedVisualImage *v4; // rcx
  __int64 (__fastcall *v5)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *); // rax
  int BitmapSource; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( a1 )
  {
    v4 = (struct CImageSource *)((char *)a1 + 8);
    v5 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)v4 + 64LL);
    if ( v5 == CCachedVisualImage::GetBitmapSource )
      BitmapSource = CCachedVisualImage::GetBitmapSource(v4, a3, a2);
    else
      BitmapSource = v5(v4, a3, a2);
    v3 = BitmapSource;
    if ( BitmapSource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x2Du);
  }
  return v3;
}
