/*
 * XREFs of ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013E6C
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800143E0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180161930 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

__int64 __fastcall CLayerVisual::GetShadowBounds(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  bool v5; // zf
  int MaskBounds; // eax
  unsigned int v8; // ebx
  float v9; // xmm4_4
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF

  v2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = *(_QWORD *)(a1 + 496) == 0LL;
  v11 = v2;
  if ( v5 )
    return 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v11);
  v8 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MaskBounds, 0x16Du);
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 104LL);
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v11) )
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
