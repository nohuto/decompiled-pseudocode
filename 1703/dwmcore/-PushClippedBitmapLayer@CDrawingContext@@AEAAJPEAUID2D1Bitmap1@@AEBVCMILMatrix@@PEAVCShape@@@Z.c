/*
 * XREFs of ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x18014D2B0
 * Callers:
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18000DF60 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4En.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x18014AB80 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801576CC (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@.c)
 */

__int64 __fastcall CDrawingContext::PushClippedBitmapLayer(
        struct IRenderTarget **this,
        struct ID2D1Bitmap1 *a2,
        const struct CMILMatrix *a3,
        struct CShape *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CClippedBitmapLayer *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = CClippedBitmapLayer::Create(this[46], (const struct _GUID *)((char *)this[4] + 324), a2, a3, a4, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1767u);
  }
  else
  {
    v7 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v9, 1, 0);
    v6 = v7;
    if ( v7 >= 0 )
      return v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x176Fu);
  }
  if ( v9 )
    CClippedBitmapLayer::`scalar deleting destructor'(v9, 1);
  return v6;
}
