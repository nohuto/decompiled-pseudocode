/*
 * XREFs of ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1800099C0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000829C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1800092E4 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1801750CC (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18018A428 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801981FC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18019855C (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CTreeEffectLayer::Draw(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v3; // rcx
  CDropShadow *v5; // r13
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // eax
  unsigned int v19; // esi
  float v21; // xmm1_4
  float v22; // xmm0_4
  __m128i v23; // xmm7
  __m128i v24; // xmm6
  __m128i v25; // xmm8
  __m128i v26; // xmm9
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  struct CSpriteVisualContent *MaskForLayerVisualNoRef; // r12
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // r15d
  __int64 (__fastcall *v40)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, float *); // rax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  __int64 (__fastcall *v44)(struct CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, int *, __int128 *); // rax
  int v45; // eax
  CDrawingContext *v46; // rcx
  int v47; // eax
  const struct D2D_POINT_2F *v48; // rdx
  const struct D2D_SIZE_F *v49; // r8
  struct IRenderTargetBitmap *v50; // rbx
  int v51; // eax
  float v52; // xmm4_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  int v62; // eax
  __m128i v63; // xmm3
  __m128i v64; // xmm0
  float v65; // xmm2_4
  float v66; // xmm1_4
  int v67; // eax
  __m128i v68; // xmm1
  float v69; // xmm2_4
  bool v70; // dl
  int v71; // eax
  int v72; // eax
  float v73; // [rsp+28h] [rbp-E0h]
  struct D2D_SIZE_F v74; // [rsp+48h] [rbp-C0h] BYREF
  int v75; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_POINT_2F v76; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_SIZE_F v77; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v78[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v79; // [rsp+78h] [rbp-90h]
  __int128 v80; // [rsp+88h] [rbp-80h]
  __int128 v81; // [rsp+98h] [rbp-70h]
  int v82; // [rsp+A8h] [rbp-60h]
  _OWORD v83[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v84; // [rsp+F8h] [rbp-10h]
  float v85; // [rsp+108h] [rbp+0h] BYREF
  float v86; // [rsp+10Ch] [rbp+4h]
  float v87; // [rsp+110h] [rbp+8h]
  float v88; // [rsp+114h] [rbp+Ch]
  float v89; // [rsp+118h] [rbp+10h] BYREF
  float v90; // [rsp+11Ch] [rbp+14h]
  float v91; // [rsp+120h] [rbp+18h]
  float v92; // [rsp+124h] [rbp+1Ch]
  struct D2D_SIZE_F v93; // [rsp+128h] [rbp+20h] BYREF
  float v94; // [rsp+130h] [rbp+28h]
  float v95; // [rsp+134h] [rbp+2Ch]
  __int128 v96; // [rsp+138h] [rbp+30h] BYREF
  float v97[4]; // [rsp+148h] [rbp+40h] BYREF

  v84 = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    v5 = *(CDropShadow **)(v3 + 520);
    if ( v5 )
    {
      v21 = *((float *)this + 56);
      v22 = *((float *)this + 55);
      v23 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v24 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      v26 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
      v74 = 0LL;
      v89 = v22;
      v27 = v22 + *((float *)this + 57);
      v90 = v21;
      v28 = v21 + *((float *)this + 58);
      LODWORD(v29) = _mm_cvtepi32_ps(v23).m128_u32[0];
      LODWORD(v30) = _mm_cvtepi32_ps(v24).m128_u32[0];
      v76.x = v29;
      v76.y = v30;
      v91 = v27;
      v92 = v28;
      LODWORD(v31) = _mm_cvtepi32_ps(v25).m128_u32[0];
      LODWORD(v32) = _mm_cvtepi32_ps(v26).m128_u32[0];
      CLayerVisual::GetUpdatedDropShadowBounds(v3, &v89, &v93);
      LODWORD(v33) = COERCE_UNSIGNED_INT((float)*((int *)this + 5)) ^ _xmm;
      LODWORD(v34) = COERCE_UNSIGNED_INT((float)*((int *)this + 4)) ^ _xmm;
      v86 = v93.height + v33;
      v85 = v93.width + v34;
      v88 = v95 + v33;
      v87 = v94 + v34;
      MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v5);
      if ( MaskForLayerVisualNoRef )
      {
        CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
          *((_QWORD *)this + 31),
          (__int64)v97);
        v31 = v89;
        v32 = v90;
        v29 = v91 - v89;
        v30 = v92 - v90;
        v76.x = v91 - v89;
        v76.y = v92 - v90;
      }
      if ( (unsigned __int8)CDrawingContext::IsSurfaceSizeValid(a2, (int)v29, (int)v30) )
      {
        DWORD2(v96) = 35;
        *(_QWORD *)&v96 = "DWM Tree Effect Shadow intermediate";
        if ( (int)CDrawingContext::PushOffScreenRenderingLayer(
                    a2,
                    (const struct CResourceTag *)&v96,
                    (const struct D2D_SIZE_F *)&v76,
                    1,
                    (struct IRenderTargetBitmap **)&v74) >= 0 )
          goto LABEL_28;
        *((_QWORD *)&v96 + 1) = *((_QWORD *)this + 31);
        LODWORD(v96) = 6;
        v36 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)a2 + 448, &v96);
        v19 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x185u);
LABEL_25:
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v74);
          return v19;
        }
      }
      else
      {
        *((_QWORD *)&v96 + 1) = *((_QWORD *)this + 31);
        LODWORD(v96) = 6;
        v37 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)a2 + 448, &v96);
        v19 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x18Du);
          goto LABEL_25;
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v74);
LABEL_28:
      v38 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
      v19 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x193u);
        goto LABEL_25;
      }
      v39 = 1;
      if ( MaskForLayerVisualNoRef )
      {
        if ( CVisual::GetEffectiveSize(*((CVisual **)this + 31), (float *)&v77, (float *)&v93) )
        {
          v40 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, float *))(*(_QWORD *)MaskForLayerVisualNoRef + 168LL);
          v77.height = v93.width;
          v41 = v40(MaskForLayerVisualNoRef, 0LL, &v77, &v89);
          v19 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1A0u);
            goto LABEL_52;
          }
          v93.width = v91 - v89;
          v93.height = v92 - v90;
          CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 120, &v89, v97);
          v79 = _xmm;
          LOWORD(v82) = 32085;
          v80 = _xmm;
          *(_OWORD *)&v78[0].width = _xmm;
          v81 = _xmm;
          CMILMatrix::Translate((CMILMatrix *)v78, v97[0] - v31, v97[1] - v32);
          v42 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v78, 0, 1);
          v19 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x1AEu);
            goto LABEL_52;
          }
          v43 = *(_QWORD *)MaskForLayerVisualNoRef;
          LOBYTE(v75) = 0;
          v44 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, int *, __int128 *))(v43 + 160);
          v39 = 2;
          v96 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v45 = v44(MaskForLayerVisualNoRef, a2, &v93, &v75, &v96);
          v19 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x1B6u);
            goto LABEL_52;
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
      }
      else
      {
        v63 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
        v64 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
        v65 = *((float *)this + 48);
        v66 = *((float *)this + 47);
        v82 = 0;
        v93.width = _mm_cvtepi32_ps(v63).m128_f32[0];
        v93.height = _mm_cvtepi32_ps(v64).m128_f32[0];
        CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
          this,
          v66 - v93.width,
          v65 - v93.height,
          1.0,
          1.0,
          (const struct D2D_POINT_2F *)&v93,
          (struct CMILMatrix *)v78,
          &v77);
        v67 = CTreeEffectLayer::RenderLayer(
                (__int64)this,
                (__int64)a2,
                (const struct CMILMatrix *)v78,
                (int)&v85,
                (float *)&v77);
        v19 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x1CDu);
          goto LABEL_52;
        }
      }
      CDrawingContext::PopTransformInternal(a2, 1);
      CDrawingContext::PopLayer(v46);
      v83[0] = _xmm;
      LOWORD(v84) = 32085;
      v83[1] = _xmm;
      v83[2] = _xmm;
      v83[3] = _xmm;
      CMILMatrix::Translate((CMILMatrix *)v83, v31, v32);
      v47 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v83, 0, 1);
      v19 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x1DAu);
        goto LABEL_25;
      }
      v50 = (struct IRenderTargetBitmap *)v74;
      v39 = 1;
      v51 = CTreeEffectLayer::RenderShadow(this, v48, v49, 0.0, v73, a2, v5, *(struct IRenderTargetBitmap **)&v74);
      v19 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x1E4u);
      }
      else
      {
        CDrawingContext::PopTransformInternal(a2, 1);
        if ( MaskForLayerVisualNoRef )
        {
          v52 = *((float *)this + 55);
          v53 = *((float *)this + 56);
          v54 = v52 + *((float *)this + 57);
          v55 = *((float *)this + 64);
          v56 = v53 + *((float *)this + 58);
          v87 = v54;
          v85 = v52;
          v86 = v53;
          v88 = v56;
          if ( v55 > v52 )
          {
            v85 = v55;
            v52 = v55;
          }
          v57 = *((float *)this + 65);
          if ( v57 > v53 )
          {
            v86 = *((float *)this + 65);
            v53 = v57;
          }
          v58 = *((float *)this + 66);
          if ( v54 > v58 )
          {
            v87 = *((float *)this + 66);
            v54 = v58;
          }
          v59 = *((float *)this + 67);
          if ( v56 > v59 )
          {
            v88 = *((float *)this + 67);
            v56 = v59;
          }
          if ( v54 <= v52 || v56 <= v53 )
          {
            v88 = 0.0;
            v87 = 0.0;
            v86 = 0.0;
            v85 = 0.0;
          }
          v60 = *((float *)this + 48);
          v61 = *((float *)this + 47);
          v82 = 0;
          v76.x = 0.0;
          v76.y = 0.0;
          CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
            this,
            v61,
            v60,
            1.0,
            1.0,
            &v76,
            (struct CMILMatrix *)v78,
            &v93);
          v62 = CTreeEffectLayer::RenderLayer(
                  (__int64)this,
                  (__int64)a2,
                  (const struct CMILMatrix *)v78,
                  (int)&v85,
                  (float *)&v93);
          v19 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x202u);
          goto LABEL_25;
        }
        v79 = _xmm;
        LOWORD(v82) = 32085;
        v68 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
        v80 = _xmm;
        v69 = (float)*((int *)this + 5);
        *(_OWORD *)&v78[0].width = _xmm;
        v81 = _xmm;
        CMILMatrix::Translate((CMILMatrix *)v78, _mm_cvtepi32_ps(v68).m128_f32[0], v69);
        v71 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v78, 0, v70);
        v19 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x20Bu);
          goto LABEL_25;
        }
        v72 = CTreeEffectLayer::RenderMask(this, (const struct D2D_SIZE_F *)&v76, a2, v50);
        v19 = v72;
        if ( v72 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          goto LABEL_25;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x20Du);
      }
LABEL_52:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v74);
      do
      {
        CDrawingContext::PopTransformInternal(a2, 1);
        --v39;
      }
      while ( v39 > 0 );
      return v19;
    }
  }
  v6 = *((float *)this + 55);
  v7 = *((float *)this + 56);
  v8 = v6 + *((float *)this + 57);
  v9 = *((float *)this + 64);
  v10 = v7 + *((float *)this + 58);
  v87 = v8;
  v85 = v6;
  v86 = v7;
  v88 = v10;
  if ( v9 > v6 )
  {
    v85 = v9;
    v6 = v9;
  }
  v11 = *((float *)this + 65);
  if ( v11 > v7 )
  {
    v86 = *((float *)this + 65);
    v7 = v11;
  }
  v12 = *((float *)this + 66);
  if ( v8 > v12 )
  {
    v87 = *((float *)this + 66);
    v8 = v12;
  }
  v13 = *((float *)this + 67);
  if ( v10 > v13 )
  {
    v88 = *((float *)this + 67);
    v10 = v13;
  }
  if ( v8 <= v6 || v10 <= v7 )
  {
    v88 = 0.0;
    v87 = 0.0;
    v86 = 0.0;
    v85 = 0.0;
  }
  v14 = *((float *)this + 69);
  v15 = *((float *)this + 68);
  v16 = *((float *)this + 48);
  v17 = *((float *)this + 47);
  v82 = 0;
  v76.x = 0.0;
  v76.y = 0.0;
  CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(this, v17, v16, v15, v14, &v76, (struct CMILMatrix *)v78, &v74);
  v18 = CTreeEffectLayer::RenderLayer(
          (__int64)this,
          (__int64)a2,
          (const struct CMILMatrix *)v78,
          (int)&v85,
          (float *)&v74);
  v19 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x22Au);
  return v19;
}
