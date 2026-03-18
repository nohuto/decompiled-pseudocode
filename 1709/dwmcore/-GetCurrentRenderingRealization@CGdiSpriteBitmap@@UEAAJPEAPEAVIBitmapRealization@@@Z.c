/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18009DEA0
 * Callers:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180037114 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  signed int Bitmap; // eax

  v2 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 40) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(
               (CGdiSpriteBitmap *)((char *)this - 56),
               (enum DXGI_FORMAT)*((_DWORD *)this + 8));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bitmap, 0x125u);
  }
  if ( *((_QWORD *)this + 40) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 8LL))(*((_QWORD *)this + 40));
    *a2 = (struct IBitmapRealization *)*((_QWORD *)this + 40);
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x174u);
  }
  return v2;
}
