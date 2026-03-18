/*
 * XREFs of ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800832C0
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800807C0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180083620 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016FDDC (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

__int64 __fastcall CLayerVisual::GetShadowBounds(CVisual *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  bool v5; // zf
  signed int MaskBounds; // eax
  unsigned int v8; // ebx
  float v9; // xmm4_4
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF

  v2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = *((_QWORD *)a1 + 64) == 0LL;
  v11 = v2;
  if ( v5 )
    return 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  v8 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, MaskBounds, 0x16Du);
  }
  else
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 64) + 168LL);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
    {
      *(float *)&v11 = (float)(*(float *)&v11 - v9) + *(float *)&v10;
      *((float *)&v11 + 1) = (float)(*((float *)&v11 + 1) - v9) + *((float *)&v10 + 1);
      *((float *)&v11 + 2) = (float)(*((float *)&v11 + 2) + v9) + *(float *)&v10;
      *((float *)&v11 + 3) = (float)(*((float *)&v11 + 3) + v9) + *((float *)&v10 + 1);
      *a2 = v11;
    }
  }
  return v8;
}
