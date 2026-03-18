/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800143E0
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015530 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DE04 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013E6C (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  unsigned int v5; // r14d
  CVisual *CurrentVisual; // rax
  float v8; // xmm1_4
  __int64 v9; // rcx
  int ShadowBounds; // eax
  int v11; // eax
  float v12; // xmm1_4
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  float v18[4]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v19; // [rsp+40h] [rbp-49h] BYREF
  __int128 v20; // [rsp+50h] [rbp-39h]
  __int128 v21; // [rsp+60h] [rbp-29h]
  __int128 v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+80h] [rbp-9h]
  __int128 v24; // [rsp+90h] [rbp+7h] BYREF

  v5 = 0;
  v23 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 472), (CTreeEffectLayer *)((char *)this + 116));
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  CVisual::GetEffectiveSize(CurrentVisual, v18, &v18[1]);
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = *(_QWORD *)v18;
  CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 116, &v24, (char *)this + 184);
  v8 = *((float *)this + 47);
  v9 = *((_QWORD *)this + 30);
  *((float *)this + 48) = (float)((float)(*((float *)this + 48) - *((float *)this + 46)) * *((float *)this + 66))
                        + *((float *)this + 46);
  *((float *)this + 49) = (float)((float)(*((float *)this + 49) - v8) * *((float *)this + 67)) + v8;
  if ( v9 )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds(v9, &v24);
    v5 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShadowBounds, 0x259u);
      return v5;
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v24) )
    {
      v24 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_OWORD *)((char *)this + 200) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)&v24, (float *)this + 50);
    }
  }
  v11 = -*((_DWORD *)this + 5);
  LOWORD(v23) = 32085;
  v21 = _xmm;
  v20 = _xmm;
  v12 = (float)-*((_DWORD *)this + 4);
  v19 = _xmm;
  v22 = _xmm;
  CMILMatrix::Translate((CMILMatrix *)&v19, v12, (float)v11);
  CMILMatrix::Scale((CMILMatrix *)&v19, *((float *)this + 66), *((float *)this + 67), 1.0);
  v13 = v20;
  v14 = v23;
  *(_OWORD *)a3 = v19;
  v15 = v21;
  *((_OWORD *)a3 + 1) = v13;
  v16 = v22;
  *((_OWORD *)a3 + 2) = v15;
  *((_OWORD *)a3 + 3) = v16;
  *((_DWORD *)a3 + 16) = v14;
  return v5;
}
