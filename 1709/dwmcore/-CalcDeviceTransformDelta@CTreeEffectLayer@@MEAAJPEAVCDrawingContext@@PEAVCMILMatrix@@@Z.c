/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800807C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18003D31C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800832C0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3,
        __int64 a4)
{
  unsigned int v6; // r14d
  CVisual *CurrentVisual; // rax
  float v9; // xmm1_4
  __int64 v10; // rcx
  signed int ShadowBounds; // eax
  int v12; // eax
  float v13; // xmm1_4
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  float v19[4]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v20; // [rsp+40h] [rbp-49h] BYREF
  __int128 v21; // [rsp+50h] [rbp-39h]
  __int128 v22; // [rsp+60h] [rbp-29h]
  __int128 v23; // [rsp+70h] [rbp-19h]
  int v24; // [rsp+80h] [rbp-9h]
  __int128 v25; // [rsp+90h] [rbp+7h] BYREF

  v6 = 0;
  v24 = 0;
  CMatrixStack::Top(
    (struct CDrawingContext *)((char *)a2 + 480),
    (CTreeEffectLayer *)((char *)this + 120),
    (__int64)a3,
    a4);
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  CVisual::GetEffectiveSize(CurrentVisual, v19, &v19[1]);
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = *(_QWORD *)v19;
  CMILMatrix::Transform2DBoundsHelper<1>((__int64)this + 120, (__int64)&v25, (float *)this + 47);
  v9 = *((float *)this + 48);
  v10 = *((_QWORD *)this + 31);
  *((float *)this + 49) = (float)((float)(*((float *)this + 49) - *((float *)this + 47)) * *((float *)this + 68))
                        + *((float *)this + 47);
  *((float *)this + 50) = (float)((float)(*((float *)this + 50) - v9) * *((float *)this + 69)) + v9;
  if ( v10 )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds(v10, &v25);
    v6 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShadowBounds, 0x271u);
      return v6;
    }
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v25) )
    {
      v25 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_OWORD *)((char *)this + 204) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)&v25, (float *)this + 51);
    }
  }
  v12 = -*((_DWORD *)this + 5);
  LOWORD(v24) = 32085;
  v22 = _xmm;
  v21 = _xmm;
  v13 = (float)-*((_DWORD *)this + 4);
  v20 = _xmm;
  v23 = _xmm;
  CMILMatrix::Translate((CMILMatrix *)&v20, v13, (float)v12);
  CMILMatrix::Scale((CMILMatrix *)&v20, *((float *)this + 68), *((float *)this + 69), 1.0);
  v14 = v21;
  v15 = v24;
  *(_OWORD *)a3 = v20;
  v16 = v22;
  *((_OWORD *)a3 + 1) = v14;
  v17 = v23;
  *((_OWORD *)a3 + 2) = v16;
  *((_OWORD *)a3 + 3) = v17;
  *((_DWORD *)a3 + 16) = v15;
  return v6;
}
