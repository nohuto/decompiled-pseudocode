/*
 * XREFs of ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009D6C
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800095A0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198470 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

__int64 __fastcall CLayerVisual::GetShadowBounds(CLayerVisual *a1, struct D2D_RECT_F *a2)
{
  struct D2D_RECT_F v2; // xmm0
  bool v5; // zf
  int MaskBounds; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  float v10; // xmm2_4
  float v11[4]; // [rsp+30h] [rbp-30h]
  struct D2D_RECT_F v12; // [rsp+40h] [rbp-20h] BYREF

  v2 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a2 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = *((_QWORD *)a1 + 65) == 0LL;
  v12 = v2;
  if ( v5 )
    return 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  v8 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskBounds, 0x18Fu);
  }
  else
  {
    v9 = *((_QWORD *)a1 + 65);
    v10 = *(float *)(v9 + 152);
    *(_QWORD *)v11 = *(_QWORD *)(v9 + 160);
    if ( !IsEmpty(&v12) )
    {
      v12.left = (float)(v12.left - v10) + v11[0];
      v12.top = (float)(v12.top - v10) + v11[1];
      v12.right = (float)(v12.right + v10) + v11[0];
      v12.bottom = (float)(v12.bottom + v10) + v11[1];
      *a2 = v12;
    }
  }
  return v8;
}
