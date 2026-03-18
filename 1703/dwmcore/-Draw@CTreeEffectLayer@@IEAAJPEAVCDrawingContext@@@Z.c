/*
 * XREFs of ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180014D60 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z @ 0x18000DD5C (-IsSurfaceSizeValid@CDrawingContext@@AEAA_NII@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180014230 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1?$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3690 (--1-$ComPtr@UID3D11DepthStencilState@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1800C4A64 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Intersect@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180128608 (-Intersect@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x180158868 (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180158978 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801616C0 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180161A04 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CTreeEffectLayer::Draw(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v3; // rcx
  struct CDropShadow *v5; // r13
  float v6; // xmm1_4
  float v7; // xmm0_4
  __m128i v8; // xmm6
  __m128i v9; // xmm7
  __m128i v10; // xmm8
  __m128i v11; // xmm9
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm1_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  __int64 *v18; // r12
  float v19; // xmm3_4
  float v20; // xmm2_4
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // r15d
  __int64 (__fastcall *v26)(__int64 *, _QWORD, struct D2D_SIZE_F *, const char **); // rax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64 *, struct CDrawingContext *, struct D2D_POINT_2F *, int *, __int128 *); // rax
  int v31; // eax
  __m128i v32; // xmm3
  __m128i v33; // xmm0
  float v34; // xmm2_4
  float v35; // xmm1_4
  int v36; // eax
  int v37; // eax
  const struct D2D_POINT_2F *v38; // rdx
  const struct D2D_SIZE_F *v39; // r8
  struct IRenderTargetBitmap *v40; // rbx
  int v41; // eax
  float v42; // xmm2_4
  float v43; // xmm1_4
  int v44; // eax
  int v45; // eax
  float v46; // xmm1_4
  unsigned int v47; // xmm0_4
  float v48; // xmm0_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  int v52; // eax
  float v54; // [rsp+28h] [rbp-E0h]
  struct D2D_SIZE_F v55; // [rsp+48h] [rbp-C0h] BYREF
  int v56; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_POINT_2F v57; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_SIZE_F v58; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v59[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v60; // [rsp+78h] [rbp-90h]
  __int128 v61; // [rsp+88h] [rbp-80h]
  __int128 v62; // [rsp+98h] [rbp-70h]
  int v63; // [rsp+A8h] [rbp-60h]
  _OWORD v64[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v65; // [rsp+F8h] [rbp-10h]
  const char *v66; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v67; // [rsp+110h] [rbp+8h]
  struct D2D_POINT_2F v68; // [rsp+118h] [rbp+10h] BYREF
  float v69; // [rsp+120h] [rbp+18h]
  float v70; // [rsp+124h] [rbp+1Ch]
  __int128 v71; // [rsp+128h] [rbp+20h] BYREF
  float v72[4]; // [rsp+138h] [rbp+30h] BYREF

  v63 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    v5 = *(struct CDropShadow **)(v3 + 496);
    if ( v5 )
    {
      v6 = *((float *)this + 55);
      v7 = *((float *)this + 54);
      v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
      v55 = 0LL;
      v66 = (const char *)__PAIR64__(LODWORD(v6), LODWORD(v7));
      *(float *)&v12 = v7 + *((float *)this + 56);
      *(float *)&v13 = v6 + *((float *)this + 57);
      LODWORD(v14) = _mm_cvtepi32_ps(v8).m128_u32[0];
      LODWORD(v15) = _mm_cvtepi32_ps(v9).m128_u32[0];
      v57.x = v14;
      v57.y = v15;
      v67 = __PAIR64__(v13, v12);
      LODWORD(v16) = _mm_cvtepi32_ps(v10).m128_u32[0];
      LODWORD(v17) = _mm_cvtepi32_ps(v11).m128_u32[0];
      CLayerVisual::GetUpdatedDropShadowBounds(v3, &v66, &v68);
      v18 = (__int64 *)*((_QWORD *)v5 + 17);
      LODWORD(v19) = COERCE_UNSIGNED_INT((float)*((int *)this + 5)) ^ _xmm;
      LODWORD(v20) = COERCE_UNSIGNED_INT((float)*((int *)this + 4)) ^ _xmm;
      *((float *)&v71 + 1) = v68.y + v19;
      *(float *)&v71 = v68.x + v20;
      *((float *)&v71 + 3) = v70 + v19;
      *((float *)&v71 + 2) = v69 + v20;
      if ( v18 )
      {
        CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
          *((_QWORD *)this + 30),
          (_DWORD)this + 116,
          (_DWORD)this + 200,
          (unsigned int)&v66,
          (__int64)v72);
        v16 = *(float *)&v66;
        v17 = *((float *)&v66 + 1);
        v14 = *(float *)&v67 - *(float *)&v66;
        v15 = *((float *)&v67 + 1) - *((float *)&v66 + 1);
        v57.x = *(float *)&v67 - *(float *)&v66;
        v57.y = *((float *)&v67 + 1) - *((float *)&v66 + 1);
      }
      if ( (unsigned __int8)CDrawingContext::IsSurfaceSizeValid(a2, (int)v14, (int)v15) )
      {
        LODWORD(v67) = 35;
        v66 = "DWM Tree Effect Shadow intermediate";
        if ( (int)CDrawingContext::PushOffScreenRenderingLayer(
                    a2,
                    (const struct CResourceTag *)&v66,
                    (const struct D2D_SIZE_F *)&v57,
                    1,
                    (struct IRenderTargetBitmap **)&v55) >= 0 )
          goto LABEL_12;
        v67 = *((_QWORD *)this + 30);
        LODWORD(v66) = 6;
        v21 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)a2 + 440, &v66);
        v22 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x187u);
LABEL_9:
          Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>(&v55);
          return v22;
        }
      }
      else
      {
        v67 = *((_QWORD *)this + 30);
        LODWORD(v66) = 6;
        v23 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)a2 + 440, &v66);
        v22 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x18Fu);
          goto LABEL_9;
        }
      }
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v55);
LABEL_12:
      v24 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
      v22 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x195u);
        goto LABEL_9;
      }
      v25 = 1;
      if ( v18 )
      {
        if ( !CVisual::GetEffectiveSize(*((CVisual **)this + 30), (float *)&v58, (float *)&v68) )
          goto LABEL_23;
        v26 = *(__int64 (__fastcall **)(__int64 *, _QWORD, struct D2D_SIZE_F *, const char **))(*v18 + 152);
        v58.height = v68.x;
        v27 = v26(v18, 0LL, &v58, &v66);
        v22 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1A2u);
        }
        else
        {
          v68.x = *(float *)&v67 - *(float *)&v66;
          v68.y = *((float *)&v67 + 1) - *((float *)&v66 + 1);
          CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 116, &v66, v72);
          v64[1] = _xmm;
          LOWORD(v65) = 32085;
          v64[2] = _xmm;
          v64[0] = _xmm;
          v64[3] = _xmm;
          CMILMatrix::Translate((CMILMatrix *)v64, v72[0] - v16, v72[1] - v17);
          v28 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v64, 0, 1);
          v22 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1B0u);
          }
          else
          {
            v29 = *v18;
            LOBYTE(v56) = 0;
            v30 = *(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, struct D2D_POINT_2F *, int *, __int128 *))(v29 + 144);
            v25 = 2;
            v71 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v31 = v30(v18, a2, &v68, &v56, &v71);
            v22 = v31;
            if ( v31 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              goto LABEL_23;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1B8u);
          }
        }
      }
      else
      {
        v32 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
        v33 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
        v34 = *((float *)this + 47);
        v35 = *((float *)this + 46);
        v65 = 0;
        v68.x = _mm_cvtepi32_ps(v32).m128_f32[0];
        v68.y = _mm_cvtepi32_ps(v33).m128_f32[0];
        CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
          this,
          v35 - v68.x,
          v34 - v68.y,
          1.0,
          1.0,
          &v68,
          (struct CMILMatrix *)v64,
          &v58);
        v36 = CTreeEffectLayer::RenderLayer(
                (__int64)this,
                (__int64)a2,
                (const struct CMILMatrix *)v64,
                (int)&v71,
                (__int64)&v58);
        v22 = v36;
        if ( v36 >= 0 )
        {
LABEL_23:
          CDrawingContext::PopTransformInternal(a2, 1);
          CDrawingContext::PopLayer(a2);
          v60 = _xmm;
          LOWORD(v63) = 32085;
          v61 = _xmm;
          *(_OWORD *)&v59[0].width = _xmm;
          v62 = _xmm;
          CMILMatrix::Translate((CMILMatrix *)v59, v16, v17);
          v37 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v59, 0, 1);
          v22 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x1DCu);
            goto LABEL_9;
          }
          v40 = (struct IRenderTargetBitmap *)v55;
          v25 = 1;
          v41 = CTreeEffectLayer::RenderShadow(this, v38, v39, 0.0, v54, a2, v5, *(struct IRenderTargetBitmap **)&v55);
          v22 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x1E6u);
          }
          else
          {
            CDrawingContext::PopTransformInternal(a2, 1);
            LOWORD(v63) = 32085;
            *(_OWORD *)&v59[0].width = _xmm;
            v60 = _xmm;
            v61 = _xmm;
            v62 = _xmm;
            if ( v18 )
            {
              v42 = v17;
              v43 = v16;
            }
            else
            {
              v42 = (float)*((int *)this + 5);
              v43 = (float)*((int *)this + 4);
            }
            CMILMatrix::Translate((CMILMatrix *)v59, v43, v42);
            v44 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v59, 0, 1);
            v22 = v44;
            if ( v44 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x1F8u);
              goto LABEL_9;
            }
            v45 = CTreeEffectLayer::RenderMask(this, (const struct D2D_SIZE_F *)&v57, a2, v40);
            v22 = v45;
            if ( v45 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              goto LABEL_9;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x1FAu);
          }
          goto LABEL_36;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x1CFu);
      }
LABEL_36:
      Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>(&v55);
      do
      {
        CDrawingContext::PopTransformInternal(a2, 1);
        --v25;
      }
      while ( v25 > 0 );
      return v22;
    }
  }
  v46 = *((float *)this + 55);
  LODWORD(v66) = *((_DWORD *)this + 54);
  *(float *)&v47 = *(float *)&v66 + *((float *)this + 56);
  *((float *)&v66 + 1) = v46;
  v67 = __PAIR64__(v46 + *((float *)this + 57), v47);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Intersect(&v66, (char *)this + 248);
  v48 = *((float *)this + 67);
  v49 = *((float *)this + 66);
  v50 = *((float *)this + 47);
  v51 = *((float *)this + 46);
  v65 = 0;
  v57.x = 0.0;
  v57.y = 0.0;
  CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(this, v51, v50, v49, v48, &v57, (struct CMILMatrix *)v64, &v55);
  v52 = CTreeEffectLayer::RenderLayer(
          (__int64)this,
          (__int64)a2,
          (const struct CMILMatrix *)v64,
          (int)&v66,
          (__int64)&v55);
  v22 = v52;
  if ( v52 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x216u);
  return v22;
}
