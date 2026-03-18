/*
 * XREFs of ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180080BE0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18003D284 (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x180080520 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180080600 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18014C128 (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18014C26C (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x18016F9C8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18016FEC8 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
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
  signed int v18; // eax
  unsigned int v19; // esi
  float v21; // xmm1_4
  float v22; // xmm0_4
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __m128i v25; // xmm8
  __m128i v26; // xmm9
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  struct CSpriteVisualContent *MaskForLayerVisualNoRef; // r12
  signed int v36; // eax
  signed int v37; // eax
  signed int v38; // eax
  int v39; // r15d
  __int64 (__fastcall *v40)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, float *); // rax
  signed int v41; // eax
  signed int v42; // eax
  __int64 v43; // rax
  __int64 (__fastcall *v44)(struct CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, int *, __int128 *); // rax
  signed int v45; // eax
  signed int v46; // eax
  const struct D2D_POINT_2F *v47; // rdx
  const struct D2D_SIZE_F *v48; // r8
  struct IRenderTargetBitmap *v49; // rbx
  signed int v50; // eax
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  signed int v61; // eax
  __m128i v62; // xmm3
  __m128i v63; // xmm0
  float v64; // xmm2_4
  float v65; // xmm1_4
  signed int v66; // eax
  __m128i v67; // xmm1
  float v68; // xmm2_4
  signed int v69; // eax
  signed int v70; // eax
  float v71; // [rsp+28h] [rbp-E0h]
  struct D2D_SIZE_F v72; // [rsp+48h] [rbp-C0h] BYREF
  int v73; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_POINT_2F v74; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_SIZE_F v75; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v76[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+78h] [rbp-90h]
  __int128 v78; // [rsp+88h] [rbp-80h]
  __int128 v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+A8h] [rbp-60h]
  _OWORD v81[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v82; // [rsp+F8h] [rbp-10h]
  float v83; // [rsp+108h] [rbp+0h] BYREF
  float v84; // [rsp+10Ch] [rbp+4h]
  float v85; // [rsp+110h] [rbp+8h]
  float v86; // [rsp+114h] [rbp+Ch]
  float v87; // [rsp+118h] [rbp+10h] BYREF
  float v88; // [rsp+11Ch] [rbp+14h]
  float v89; // [rsp+120h] [rbp+18h]
  float v90; // [rsp+124h] [rbp+1Ch]
  struct D2D_SIZE_F v91; // [rsp+128h] [rbp+20h] BYREF
  float v92; // [rsp+130h] [rbp+28h]
  float v93; // [rsp+134h] [rbp+2Ch]
  __int128 v94; // [rsp+138h] [rbp+30h] BYREF
  float v95[4]; // [rsp+148h] [rbp+40h] BYREF

  v82 = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    v5 = *(CDropShadow **)(v3 + 512);
    if ( v5 )
    {
      v21 = *((float *)this + 56);
      v22 = *((float *)this + 55);
      v23 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v24 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      v26 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
      v72 = 0LL;
      v87 = v22;
      v27 = v22 + *((float *)this + 57);
      v88 = v21;
      v28 = v21 + *((float *)this + 58);
      LODWORD(v29) = _mm_cvtepi32_ps(v23).m128_u32[0];
      LODWORD(v30) = _mm_cvtepi32_ps(v24).m128_u32[0];
      v74.x = v29;
      v74.y = v30;
      v89 = v27;
      v90 = v28;
      LODWORD(v31) = _mm_cvtepi32_ps(v25).m128_u32[0];
      LODWORD(v32) = _mm_cvtepi32_ps(v26).m128_u32[0];
      CLayerVisual::GetUpdatedDropShadowBounds(v3, &v87, &v91);
      LODWORD(v33) = COERCE_UNSIGNED_INT((float)*((int *)this + 5)) ^ _xmm;
      LODWORD(v34) = COERCE_UNSIGNED_INT((float)*((int *)this + 4)) ^ _xmm;
      v84 = v91.height + v33;
      v83 = v91.width + v34;
      v86 = v93 + v33;
      v85 = v92 + v34;
      MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v5);
      if ( MaskForLayerVisualNoRef )
      {
        CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
          *((_QWORD *)this + 31),
          (_DWORD)this + 120,
          (_DWORD)this + 204,
          (unsigned int)&v87,
          (__int64)v95);
        v31 = v87;
        v32 = v88;
        v29 = v89 - v87;
        v30 = v90 - v88;
        v74.x = v89 - v87;
        v74.y = v90 - v88;
      }
      if ( (unsigned __int8)CDrawingContext::IsSurfaceSizeValid(a2, (int)v29, (int)v30) )
      {
        DWORD2(v94) = 35;
        *(_QWORD *)&v94 = "DWM Tree Effect Shadow intermediate";
        if ( (int)CDrawingContext::PushOffScreenRenderingLayer(
                    a2,
                    (const struct CResourceTag *)&v94,
                    (const struct D2D_SIZE_F *)&v74,
                    1,
                    (struct IRenderTargetBitmap **)&v72) >= 0 )
          goto LABEL_28;
        *((_QWORD *)&v94 + 1) = *((_QWORD *)this + 31);
        LODWORD(v94) = 6;
        v36 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)a2 + 112, &v94);
        v19 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x185u);
LABEL_25:
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
          return v19;
        }
      }
      else
      {
        *((_QWORD *)&v94 + 1) = *((_QWORD *)this + 31);
        LODWORD(v94) = 6;
        v37 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)a2 + 112, &v94);
        v19 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x18Du);
          goto LABEL_25;
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
LABEL_28:
      v38 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
      v19 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v38, 0x193u);
        goto LABEL_25;
      }
      v39 = 1;
      if ( MaskForLayerVisualNoRef )
      {
        if ( CVisual::GetEffectiveSize(*((CVisual **)this + 31), (float *)&v75, (float *)&v91) )
        {
          v40 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, float *))(*(_QWORD *)MaskForLayerVisualNoRef + 168LL);
          v75.height = v91.width;
          v41 = v40(MaskForLayerVisualNoRef, 0LL, &v75, &v87);
          v19 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v41, 0x1A0u);
            goto LABEL_52;
          }
          v91.width = v89 - v87;
          v91.height = v90 - v88;
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)this + 120, (__int64)&v87, v95);
          v77 = _xmm;
          LOWORD(v80) = 32085;
          v78 = _xmm;
          *(_OWORD *)&v76[0].width = _xmm;
          v79 = _xmm;
          CMILMatrix::Translate((CMILMatrix *)v76, v95[0] - v31, v95[1] - v32);
          v42 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v76, 0, 1);
          v19 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v42, 0x1AEu);
            goto LABEL_52;
          }
          v43 = *(_QWORD *)MaskForLayerVisualNoRef;
          LOBYTE(v73) = 0;
          v44 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, int *, __int128 *))(v43 + 160);
          v39 = 2;
          v94 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v45 = v44(MaskForLayerVisualNoRef, a2, &v91, &v73, &v94);
          v19 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v45, 0x1B6u);
            goto LABEL_52;
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
      }
      else
      {
        v62 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
        v63 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
        v64 = *((float *)this + 48);
        v65 = *((float *)this + 47);
        v80 = 0;
        v91.width = _mm_cvtepi32_ps(v62).m128_f32[0];
        v91.height = _mm_cvtepi32_ps(v63).m128_f32[0];
        CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
          this,
          v65 - v91.width,
          v64 - v91.height,
          1.0,
          1.0,
          (const struct D2D_POINT_2F *)&v91,
          (struct CMILMatrix *)v76,
          &v75);
        v66 = CTreeEffectLayer::RenderLayer(
                (__int64)this,
                (__int64)a2,
                (const struct CMILMatrix *)v76,
                &v83,
                (float *)&v75);
        v19 = v66;
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v66, 0x1CDu);
          goto LABEL_52;
        }
      }
      CDrawingContext::PopTransformInternal(a2, 1);
      CDrawingContext::PopLayer(a2);
      v81[0] = _xmm;
      LOWORD(v82) = 32085;
      v81[1] = _xmm;
      v81[2] = _xmm;
      v81[3] = _xmm;
      CMILMatrix::Translate((CMILMatrix *)v81, v31, v32);
      v46 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v81, 0, 1);
      v19 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v46, 0x1DAu);
        goto LABEL_25;
      }
      v49 = (struct IRenderTargetBitmap *)v72;
      v39 = 1;
      v50 = CTreeEffectLayer::RenderShadow(this, v47, v48, 0.0, v71, a2, v5, *(struct IRenderTargetBitmap **)&v72);
      v19 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v50, 0x1E4u);
      }
      else
      {
        CDrawingContext::PopTransformInternal(a2, 1);
        if ( MaskForLayerVisualNoRef )
        {
          v51 = *((float *)this + 55);
          v52 = *((float *)this + 56);
          v53 = v51 + *((float *)this + 57);
          v54 = *((float *)this + 64);
          v55 = v52 + *((float *)this + 58);
          v85 = v53;
          v83 = v51;
          v84 = v52;
          v86 = v55;
          if ( v54 > v51 )
          {
            v83 = v54;
            v51 = v54;
          }
          v56 = *((float *)this + 65);
          if ( v56 > v52 )
          {
            v84 = *((float *)this + 65);
            v52 = v56;
          }
          v57 = *((float *)this + 66);
          if ( v53 > v57 )
          {
            v85 = *((float *)this + 66);
            v53 = v57;
          }
          v58 = *((float *)this + 67);
          if ( v55 > v58 )
          {
            v86 = *((float *)this + 67);
            v55 = v58;
          }
          if ( v53 <= v51 || v55 <= v52 )
          {
            v86 = 0.0;
            v85 = 0.0;
            v84 = 0.0;
            v83 = 0.0;
          }
          v59 = *((float *)this + 48);
          v60 = *((float *)this + 47);
          v80 = 0;
          v74.x = 0.0;
          v74.y = 0.0;
          CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
            this,
            v60,
            v59,
            1.0,
            1.0,
            &v74,
            (struct CMILMatrix *)v76,
            &v91);
          v61 = CTreeEffectLayer::RenderLayer(
                  (__int64)this,
                  (__int64)a2,
                  (const struct CMILMatrix *)v76,
                  &v83,
                  (float *)&v91);
          v19 = v61;
          if ( v61 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v61, 0x202u);
          goto LABEL_25;
        }
        v77 = _xmm;
        LOWORD(v80) = 32085;
        v67 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
        v78 = _xmm;
        v68 = (float)*((int *)this + 5);
        *(_OWORD *)&v76[0].width = _xmm;
        v79 = _xmm;
        CMILMatrix::Translate((CMILMatrix *)v76, _mm_cvtepi32_ps(v67).m128_f32[0], v68);
        v69 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v76, 0, 1);
        v19 = v69;
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v69, 0x20Bu);
          goto LABEL_25;
        }
        v70 = CTreeEffectLayer::RenderMask(this, (const struct D2D_SIZE_F *)&v74, a2, v49);
        v19 = v70;
        if ( v70 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          goto LABEL_25;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v70, 0x20Du);
      }
LABEL_52:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
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
  v85 = v8;
  v83 = v6;
  v84 = v7;
  v86 = v10;
  if ( v9 > v6 )
  {
    v83 = v9;
    v6 = v9;
  }
  v11 = *((float *)this + 65);
  if ( v11 > v7 )
  {
    v84 = *((float *)this + 65);
    v7 = v11;
  }
  v12 = *((float *)this + 66);
  if ( v8 > v12 )
  {
    v85 = *((float *)this + 66);
    v8 = v12;
  }
  v13 = *((float *)this + 67);
  if ( v10 > v13 )
  {
    v86 = *((float *)this + 67);
    v10 = v13;
  }
  if ( v8 <= v6 || v10 <= v7 )
  {
    v86 = 0.0;
    v85 = 0.0;
    v84 = 0.0;
    v83 = 0.0;
  }
  v14 = *((float *)this + 69);
  v15 = *((float *)this + 68);
  v16 = *((float *)this + 48);
  v17 = *((float *)this + 47);
  v80 = 0;
  v74.x = 0.0;
  v74.y = 0.0;
  CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(this, v17, v16, v15, v14, &v74, (struct CMILMatrix *)v76, &v72);
  v18 = CTreeEffectLayer::RenderLayer((__int64)this, (__int64)a2, (const struct CMILMatrix *)v76, &v83, (float *)&v72);
  v19 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x22Au);
  return v19;
}
