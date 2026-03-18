/*
 * XREFs of ?GetBitmap@CMILBrushBitmap@@QEBAJPEAPEAVIBitmapSource@@@Z @ 0x18020F488
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED380 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::GetBitmap(CMILBrushBitmap *this, struct IBitmapSource **a2)
{
  unsigned int v2; // ebx
  int v3; // r9d
  struct IBitmapSource *v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v4 = (struct IBitmapSource *)*((_QWORD *)this + 24);
    *a2 = 0LL;
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v4 + 8LL))(v4);
      return v2;
    }
    v3 = -2147467259;
    v6 = 170;
  }
  else
  {
    v3 = -2147024809;
    v6 = 161;
  }
  v2 = v3;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v6);
  return v2;
}
