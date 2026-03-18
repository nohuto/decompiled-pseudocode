/*
 * XREFs of ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18006BFF8
 * Callers:
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180024900 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180162018 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@@Z @ 0x1801620D8 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x180162224 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x1800C314C (-InflateRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::ComputeExternalLayerOffsetAndBounds(
        CDrawingContext *this,
        struct MilPointAndSizeL *a2)
{
  __int64 v2; // r9
  int v3; // eax
  unsigned int v4; // ebx
  float v6[4]; // [rsp+30h] [rbp-28h] BYREF

  CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)v6);
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v6) )
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x156Bu);
  }
  else
  {
    v3 = InflateRectFToPointAndSizeL(v6, v2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x156Eu);
  }
  return v4;
}
