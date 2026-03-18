/*
 * XREFs of ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x1801574CC
 * Callers:
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801576CC (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

CClippedBitmapLayer *__fastcall CClippedBitmapLayer::CClippedBitmapLayer(
        CClippedBitmapLayer *this,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3,
        const struct MilPoint2F *a4,
        struct ID2D1Bitmap1 *a5,
        const struct CMILMatrix *a6,
        struct CShape *a7)
{
  __int64 v9; // xmm0_8

  CExternalLayer::CExternalLayer(this, a2, a3);
  v9 = *(_QWORD *)a4;
  *(_QWORD *)this = &CClippedBitmapLayer::`vftable';
  *((_QWORD *)this + 15) = a5;
  *((_QWORD *)this + 14) = v9;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = a7;
  *((_WORD *)this + 104) = 0;
  *((_BYTE *)this + 210) = 0;
  *((_OWORD *)this + 8) = *(_OWORD *)a6;
  *((_OWORD *)this + 9) = *((_OWORD *)a6 + 1);
  *((_OWORD *)this + 10) = *((_OWORD *)a6 + 2);
  *((_OWORD *)this + 11) = *((_OWORD *)a6 + 3);
  *((_DWORD *)this + 48) = *((_DWORD *)a6 + 16);
  return this;
}
