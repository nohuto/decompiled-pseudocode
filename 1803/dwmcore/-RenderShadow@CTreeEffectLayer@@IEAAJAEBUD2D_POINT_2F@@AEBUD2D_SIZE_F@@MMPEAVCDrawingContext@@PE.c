/*
 * XREFs of ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800347F0 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800C1544 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18013D0F8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x18013EFB8 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180161B40 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180174F98 (-InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1801C6E38 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801C714C (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  float v10; // xmm1_4
  float v11; // xmm2_4
  ID2D1Effect *v12; // rbx
  float v13; // xmm0_4
  struct ID2D1Effect *v14; // rdi
  struct ID2D1Effect *v15; // rsi
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  int v22; // eax
  unsigned int v23; // r14d
  int v24; // eax
  __int64 *v25; // r12
  float v26; // xmm9_4
  __int64 v27; // rdi
  CTreeEffectLayer *v28; // rcx
  float v29; // xmm7_4
  __m128 v30; // xmm1
  float v31; // xmm8_4
  float v32; // xmm10_4
  __m128 v33; // xmm2
  float v34; // xmm10_4
  __int64 v35; // rbx
  __int128 v36; // xmm0
  int v37; // eax
  int v38; // eax
  FLOAT v39; // eax
  struct D2D_VECTOR_3F *v40; // rax
  __int64 v41; // xmm0_8
  float v42; // xmm11_4
  CComposition *v43; // rcx
  float v44; // xmm12_4
  float v45; // xmm1_4
  float v46; // xmm13_4
  float v47; // xmm1_4
  float v48; // xmm14_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  __int64 v51; // r9
  __int64 TopByReference; // rax
  int v53; // eax
  float v54; // xmm1_4
  struct ID2D1Effect *v55; // r8
  FLOAT v56; // xmm9_4
  __int64 v57; // rax
  __int64 (__fastcall *v58)(__int64 *, __int64, struct D2D_VECTOR_3F *); // rax
  CTreeEffectLayer *v59; // rcx
  __m128 v60; // xmm1
  __m128 v61; // xmm2
  __int64 v62; // rsi
  CTreeEffectLayer *v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // [rsp+28h] [rbp-E0h]
  bool v66[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h] BYREF
  float v70[5]; // [rsp+58h] [rbp-B0h] BYREF
  float v71; // [rsp+6Ch] [rbp-9Ch]
  int v72; // [rsp+98h] [rbp-70h]
  _BYTE v73[64]; // [rsp+A8h] [rbp-60h] BYREF
  int v74; // [rsp+E8h] [rbp-20h]
  struct D2D_MATRIX_3X2_F v75; // [rsp+F8h] [rbp-10h] BYREF
  struct D2D_VECTOR_3F v76[2]; // [rsp+110h] [rbp+8h] BYREF
  float v77; // [rsp+128h] [rbp+20h] BYREF
  float v78; // [rsp+12Ch] [rbp+24h]
  float v79; // [rsp+130h] [rbp+28h]
  float v80; // [rsp+134h] [rbp+2Ch]
  struct D2D_MATRIX_3X2_F v81; // [rsp+138h] [rbp+30h] BYREF
  __int128 v82; // [rsp+150h] [rbp+48h] BYREF

  *(_QWORD *)&v75.m11 = a7;
  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a8 + 224LL))(
      a8,
      *((_QWORD *)a6 + 48),
      ((unsigned __int64)a6 + 8) & -(__int64)(a6 != 0LL));
  v10 = *((float *)this + 55);
  v11 = *((float *)this + 56);
  *(_OWORD *)&v81.m11 = _xmm;
  v67 = 0LL;
  *(_QWORD *)&v81.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v12 = 0LL;
  v13 = (float)*((int *)this + 5);
  v14 = 0LL;
  v72 = 0;
  v15 = 0LL;
  v74 = 0;
  v66[0] = 0;
  v82 = 0uLL;
  v16 = v11 - v13;
  v68 = 0LL;
  v17 = (float)*((int *)this + 4);
  v69 = 0LL;
  v78 = v16;
  v18 = v10 - v17;
  v19 = (float)*((int *)this + 6);
  v77 = v18;
  v20 = (float)(v19 / *((float *)this + 68)) + v18;
  v21 = (float)*((int *)this + 7);
  v79 = v20;
  v80 = (float)(v21 / *((float *)this + 69)) + v16;
  v22 = CDrawingContext::PushGpuClipRectInternal((__int64)a6, 0LL, (float *)this + 64, 1, 1, 0);
  v23 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x38Du);
    goto LABEL_51;
  }
  v24 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(*(_QWORD *)a8 + 88LL))(a8, &v69);
  v23 = v24;
  if ( v24 < 0 )
  {
    v65 = 912;
    goto LABEL_48;
  }
  v25 = (__int64 *)*((_QWORD *)a6 + 48);
  v26 = *(float *)(*(_QWORD *)&v75.m11 + 152LL);
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
    (CTreeEffectLayer *)((char *)this + 120),
    (struct CMILMatrix *)v70,
    (struct CMILMatrix *)v73,
    v66);
  v24 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v25 + 256))(v25, &CLSID_D2D12DAffineTransform, &v67);
  v23 = v24;
  if ( v24 < 0 )
  {
    v65 = 928;
    goto LABEL_48;
  }
  v27 = v67;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v67 + 104) + 8LL))(*(_QWORD *)(v67 + 104));
  v29 = v70[0];
  v30 = 0LL;
  v31 = v71;
  v76[0].y = 0.0;
  v76[0].z = 0.0;
  v14 = *(struct ID2D1Effect **)(v27 + 104);
  if ( v70[0] <= v71 )
  {
    v76[0].x = 1.0;
    v33 = 0LL;
    v32 = v70[0];
    v76[1].x = v70[0] / v71;
    v33.m128_f32[0] = 0.0 - (float)((float)(v70[0] / v71) * 0.0);
    v30.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v33).m128_u64[0];
  }
  else
  {
    v76[1].x = 1.0;
    v32 = v71;
    v76[0].x = v71 / v70[0];
    v30.m128_f32[0] = 0.0 - (float)((float)(v71 / v70[0]) * 0.0);
    v30.m128_u64[0] = _mm_unpacklo_ps(v30, (__m128)0LL).m128_u64[0];
  }
  v34 = v32 * v26;
  *(_OWORD *)&v81.m11 = *(_OWORD *)&v76[0].x;
  *(_QWORD *)&v81.m[2][0] = v30.m128_u64[0];
  v24 = CTreeEffectLayer::InitializeShadowEffect(v28, v14, &v81);
  v23 = v24;
  if ( v24 < 0 )
  {
    v65 = 945;
    goto LABEL_48;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 112LL))(v14, 0LL, v69, 1LL);
  v24 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v25 + 256))(v25, &CLSID_D2D1Shadow, &v67);
  v23 = v24;
  if ( v24 < 0 )
  {
    v65 = 949;
    goto LABEL_48;
  }
  v35 = v67;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v67 + 104) + 8LL))(*(_QWORD *)(v67 + 104));
  v12 = *(ID2D1Effect **)(v35 + 104);
  v36 = *(_OWORD *)(*(_QWORD *)&v75.m11 + 136LL);
  v76[0].x = v34 / 3.0;
  v82 = v36;
  v37 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct D2D_VECTOR_3F *, int))(*(_QWORD *)v12 + 72LL))(
          v12,
          0LL,
          0LL,
          v76,
          4);
  v23 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x3BAu);
  }
  else
  {
    v38 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v12 + 72LL))(
            v12,
            1LL,
            0LL,
            &v82,
            16);
    v23 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x3BBu);
    }
    else
    {
      v76[0].x = 0.0;
      v24 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct D2D_VECTOR_3F *, int))(*(_QWORD *)v12 + 72LL))(
              v12,
              2LL,
              0LL,
              v76,
              4);
      v23 = v24;
      if ( v24 < 0 )
      {
        v65 = 956;
        goto LABEL_48;
      }
      v39 = *(float *)(*(_QWORD *)&v75.m11 + 168LL);
      *(_QWORD *)&v75.m11 = *(_QWORD *)(*(_QWORD *)&v75.m11 + 160LL);
      v75.m21 = v39;
      v40 = CMILMatrix::Transform3DVector(
              (CTreeEffectLayer *)((char *)this + 120),
              v76,
              (const struct D2D_VECTOR_3F *)&v75);
      v41 = *(_QWORD *)&v40->x;
      v42 = v79 + v34;
      *(FLOAT *)&v40 = v40->z;
      v43 = (CComposition *)*((_QWORD *)a6 + 4);
      v44 = v80 + v34;
      *(_QWORD *)&v75.m11 = v41;
      v45 = *(float *)&v41;
      v46 = v77 - v34;
      *(float *)&v41 = (float)*((int *)this + 4);
      LODWORD(v75.m21) = (_DWORD)v40;
      v79 = v79 + v34;
      v47 = (float)(v45 + v77) - v34;
      v77 = v77 - v34;
      v48 = v78 - v34;
      v80 = v80 + v34;
      v49 = v47 + *(float *)&v41;
      *(float *)&v41 = (float)*((int *)this + 5);
      *(float *)&v68 = v49;
      v50 = (float)((float)(v75.m12 + v78) - v34) + *(float *)&v41;
      v78 = v78 - v34;
      *((float *)&v68 + 1) = v50;
      if ( *((_DWORD *)v43 + 298) )
      {
        if ( !CComposition::IsOverdrawHeatMapEnabled(v43)
          || (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v51) + 20) & 9) == 0 )
        {
          goto LABEL_49;
        }
        v72 = 0;
        CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v70, 1.0, 1.0, v46 + v75.m11, v48 + v75.m12);
        v75.m11 = v42 - v46;
        v75.m12 = v44 - v48;
        v24 = CDrawingContext::PushTransformInternal(a6, 0LL, (const struct CMILMatrix *)v70, 1, 1);
        v23 = v24;
        if ( v24 >= 0 )
        {
          TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(*((_QWORD *)a6 + 4) + 1192LL);
          v53 = CDrawingContext::DrawColorRectangle(
                  (CMILRefCountBase **)a6,
                  (const struct _D3DCOLORVALUE *)(TopByReference + 4),
                  (const struct D2D_SIZE_F *)&v75);
          v23 = v53;
          if ( v53 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x3DBu);
          CDrawingContext::PopTransformInternal(a6, 1);
          goto LABEL_49;
        }
        v65 = 984;
        goto LABEL_48;
      }
      v54 = *((float *)this + 68);
      if ( v54 < 0.99999881 || *((float *)this + 69) < 0.99999881 )
      {
        *(_QWORD *)&v75.m[0][1] = 0LL;
        v56 = 1.0 / *((float *)this + 69);
        v57 = *v25;
        *(_QWORD *)&v76[0].x = 0LL;
        v58 = *(__int64 (__fastcall **)(__int64 *, __int64, struct D2D_VECTOR_3F *))(v57 + 224);
        v75.m22 = v56;
        v75.m11 = 1.0 / v54;
        *(_QWORD *)&v75.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v24 = v58(v25, 7LL, v76);
        v23 = v24;
        if ( v24 < 0 )
        {
          v65 = 1008;
          goto LABEL_48;
        }
        v24 = CTreeEffectLayer::InitializeShadowEffect(v59, *(struct ID2D1Effect **)&v76[0].x, &v75);
        v23 = v24;
        if ( v24 < 0 )
        {
          v65 = 1010;
          goto LABEL_48;
        }
        ID2D1Effect::SetInputEffect(*(ID2D1Effect **)&v76[0].x, 0, v14);
        v55 = *(struct ID2D1Effect **)&v76[0].x;
      }
      else
      {
        v55 = v14;
      }
      ID2D1Effect::SetInputEffect(v12, 0, v55);
      *(_QWORD *)&v75.m[0][1] = 0LL;
      v60 = 0LL;
      if ( v29 <= v31 )
      {
        v75.m11 = 1.0;
        v61 = 0LL;
        v75.m22 = v31 / v29;
        v61.m128_f32[0] = 0.0 - (float)((float)(v31 / v29) * 0.0);
        v60.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v61).m128_u64[0];
      }
      else
      {
        v75.m22 = 1.0;
        v75.m11 = v29 / v31;
        v60.m128_f32[0] = 0.0 - (float)((float)(v29 / v31) * 0.0);
        v60.m128_u64[0] = _mm_unpacklo_ps(v60, (__m128)0LL).m128_u64[0];
      }
      *(_QWORD *)&v81.m[2][0] = v60.m128_u64[0];
      *(_OWORD *)&v81.m11 = *(_OWORD *)&v75.m11;
      v24 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*v25 + 256))(
              v25,
              &CLSID_D2D12DAffineTransform,
              &v67);
      v23 = v24;
      if ( v24 < 0 )
      {
        v65 = 1033;
        goto LABEL_48;
      }
      v62 = v67;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v67 + 104) + 8LL))(*(_QWORD *)(v67 + 104));
      v15 = *(struct ID2D1Effect **)(v62 + 104);
      v24 = CTreeEffectLayer::InitializeShadowEffect(v63, v15, &v81);
      v23 = v24;
      if ( v24 < 0 )
      {
        v65 = 1036;
        goto LABEL_48;
      }
      ID2D1Effect::SetInputEffect(v15, 0, v12);
      v24 = CDrawingContext::FillEffect(a6, (__int64)v12, (__int64)&v77, (__int64)&v68);
      v23 = v24;
      if ( v24 < 0 )
      {
        v65 = 1043;
LABEL_48:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v65);
      }
    }
  }
LABEL_49:
  CDrawingContext::PopGpuClipRectInternal(a6, 0);
LABEL_51:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v69);
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v14 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v12 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v12 + 16LL))(v12);
  v64 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  return v23;
}
