/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800095A0
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024AB0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009D6C (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006C768 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  unsigned int v5; // edi
  float v7; // xmm1_4
  __int64 v8; // rcx
  int ShadowBounds; // eax
  _OWORD *v10; // rdx
  int v11; // eax
  float v12; // xmm1_4
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  FLOAT v18; // [rsp+30h] [rbp-49h] BYREF
  FLOAT v19[3]; // [rsp+34h] [rbp-45h] BYREF
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  __int128 v21; // [rsp+50h] [rbp-29h]
  __int128 v22; // [rsp+60h] [rbp-19h]
  __int128 v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+80h] [rbp+7h]
  struct D2D_RECT_F v25; // [rsp+90h] [rbp+17h] BYREF

  v5 = 0;
  v24 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (CTreeEffectLayer *)((char *)this + 120));
  CVisual::GetEffectiveSize(*((CVisual **)this + 31), &v18, v19);
  v25.left = 0.0;
  v25.top = 0.0;
  v25.right = v18;
  v25.bottom = v19[0];
  CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 120, &v25, (char *)this + 188);
  v7 = *((float *)this + 48);
  v8 = *((_QWORD *)this + 31);
  *((float *)this + 49) = (float)((float)(*((float *)this + 49) - *((float *)this + 47)) * *((float *)this + 68))
                        + *((float *)this + 47);
  *((float *)this + 50) = (float)((float)(*((float *)this + 50) - v7) * *((float *)this + 69)) + v7;
  if ( v8 )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds(v8, &v25);
    v5 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShadowBounds, 0x270u);
      return v5;
    }
    if ( IsEmpty(&v25) )
    {
      v25 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v25, v10);
    }
  }
  v11 = -*((_DWORD *)this + 5);
  LOWORD(v24) = 32085;
  v22 = _xmm;
  v21 = _xmm;
  v12 = (float)-*((_DWORD *)this + 4);
  v20 = _xmm;
  v23 = _xmm;
  CMILMatrix::Translate((CMILMatrix *)&v20, v12, (float)v11);
  CMILMatrix::Scale((CMILMatrix *)&v20, *((float *)this + 68), *((float *)this + 69), 1.0);
  v13 = v21;
  v14 = v24;
  *(_OWORD *)a3 = v20;
  v15 = v22;
  *((_OWORD *)a3 + 1) = v13;
  v16 = v23;
  *((_OWORD *)a3 + 2) = v15;
  *((_OWORD *)a3 + 3) = v16;
  *((_DWORD *)a3 + 16) = v14;
  return v5;
}
