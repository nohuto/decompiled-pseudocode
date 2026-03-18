/*
 * XREFs of ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1801AF5F8
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801B725C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1801CEA80 (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrushBitmap **a2)
{
  unsigned int v2; // ebx
  struct CMILBrushBitmap **v3; // rdi
  signed int v5; // eax

  v2 = 0;
  v3 = (struct CMILBrushBitmap **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) || (v5 = CMILBrushBitmap::Create(this, (struct IBitmapSource *)a2, v3), v2 = v5, v5 >= 0) )
    *a2 = *v3;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xFCu);
  return v2;
}
