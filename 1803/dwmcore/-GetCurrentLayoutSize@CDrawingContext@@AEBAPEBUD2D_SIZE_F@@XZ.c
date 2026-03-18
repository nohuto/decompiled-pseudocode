/*
 * XREFs of ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18006E44C
 * Callers:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800678EC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180067A44 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 * Callees:
 *     <none>
 */

const struct D2D_SIZE_F *__fastcall CDrawingContext::GetCurrentLayoutSize(CDrawingContext *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 6520)
    && (!*((_BYTE *)this + 6521) ? (v1 = *(_QWORD *)(*((_QWORD *)this + 816) + 24LL)) : (v1 = *((_QWORD *)this + 395)),
        v1) )
  {
    return (const struct D2D_SIZE_F *)(v1 + 132);
  }
  else
  {
    return 0LL;
  }
}
