/*
 * XREFs of ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x180046194
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18008F1CC (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::GetBitmap(CMILBrushBitmap *this, struct IBitmapSource **a2)
{
  unsigned int v2; // ebx
  struct IBitmapSource *v3; // rcx
  int v5; // r9d
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a2 )
  {
    v5 = -2147024809;
    v6 = 161;
LABEL_7:
    v2 = v5;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v6);
    return v2;
  }
  v3 = (struct IBitmapSource *)*((_QWORD *)this + 24);
  *a2 = 0LL;
  if ( !v3 )
  {
    v5 = -2147467259;
    v6 = 170;
    goto LABEL_7;
  }
  *a2 = v3;
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 8LL))(v3);
  return v2;
}
