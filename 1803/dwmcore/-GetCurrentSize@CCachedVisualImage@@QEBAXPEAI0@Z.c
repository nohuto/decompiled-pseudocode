/*
 * XREFs of ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800B414C
 * Callers:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x1800B3E5C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x1801824C0 (-GetSize@CCachedVisualImage@@UEBAXPEAI0@Z.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801824D0 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801826F0 (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CCachedVisualImage::GetCurrentSize(CCachedVisualImage *this, unsigned int *a2, unsigned int *a3)
{
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // [rsp+20h] [rbp-28h]
  float v8; // [rsp+20h] [rbp-28h]
  float v9[4]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( (int)CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, v9) >= 0 )
  {
    v5 = (float)(v9[2] - v9[0]) + 6291456.25;
    v7 = v5;
    v6 = v9[3] - v9[1];
    *a2 = (int)(LODWORD(v7) << 10) >> 11;
    v8 = v6 + 6291456.25;
    *a3 = (int)(LODWORD(v8) << 10) >> 11;
  }
}
