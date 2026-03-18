/*
 * XREFs of ?DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008F950
 * Callers:
 *     ?DrawPath@CHwTextureRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1800C6940 (-DrawPath@CHwTextureRenderTarget@@WMA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSta.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008EF14 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 */

__int64 __fastcall CHwTextureRenderTarget::DrawPath(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        CLegacyMilBrushRealizer *a8,
        int a9)
{
  signed int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+38h] [rbp-20h]

  v9 = CHwSurfaceRenderTarget::DrawPathInternal(a1, a2, a3, a4, a4 + 212, a5, a6, v12, a8, a9);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x8Au);
  return v10;
}
