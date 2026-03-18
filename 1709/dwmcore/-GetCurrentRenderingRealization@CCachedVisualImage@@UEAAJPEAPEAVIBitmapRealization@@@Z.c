/*
 * XREFs of ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008DFB0
 * Callers:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180037114 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetCurrentRenderingRealization(
        CCachedVisualImage *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // r8

  v2 = (struct IBitmapRealization *)(((unsigned __int64)this + 128) & -(__int64)(this != (CCachedVisualImage *)8));
  *a2 = v2;
  (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
