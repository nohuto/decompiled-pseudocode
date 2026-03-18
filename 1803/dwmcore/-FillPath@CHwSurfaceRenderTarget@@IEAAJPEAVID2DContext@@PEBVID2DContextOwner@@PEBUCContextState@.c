/*
 * XREFs of ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED278
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x1801ED07C (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x1801AE36C (-GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED380 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPath(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        CLegacyMilBrushRealizer *a8,
        __int64 a9,
        int a10)
{
  unsigned int v14; // edi
  struct CMILBrush *v15; // rsi
  float OpacityFromRealizedBrush; // xmm0_4
  int v17; // eax

  v14 = 0;
  v15 = (struct CMILBrush *)(*(__int64 (__fastcall **)(CLegacyMilBrushRealizer *, _QWORD))(*(_QWORD *)a8 + 48LL))(
                              a8,
                              0LL);
  OpacityFromRealizedBrush = CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(a8);
  if ( v15 )
  {
    v17 = CHwSurfaceRenderTarget::FillPathWithBrush(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            v15,
            SLODWORD(OpacityFromRealizedBrush),
            a9,
            a10);
    v14 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x8Au);
    if ( v14 == -2003304441 || v14 == -2003304438 )
      return 0;
  }
  return v14;
}
