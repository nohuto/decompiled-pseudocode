/*
 * XREFs of ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800C2820
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18013D450 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDrawingContext::GetOpacity(CDrawingContext *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 776);
  if ( v1 )
    return *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v1 - 1));
  else
    return FLOAT_1_0;
}
