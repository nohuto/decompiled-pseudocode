/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x18000CDA8 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180019218 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x18001A9DC (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18001B388 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x18001B69C (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x18001B6E4 (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001BCA4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18001BEC4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BF48 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800414C0 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800C0A38 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801800A0 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderExternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a5,
        struct EffectInput *a6)
{
  _QWORD *v6; // r14
  struct EffectInput *v7; // r15
  __int128 v10; // xmm0
  CCustomBlur *v12; // rsi
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int *v17; // rdx
  struct D2D_SIZE_F SurfaceSize; // rax
  __int128 width_low; // xmm11
  __int128 height_low; // xmm12
  __m128 v21; // xmm13
  __m128 v22; // xmm14
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __m128 v26; // xmm0
  float v27; // xmm7_4
  __m128 v28; // xmm6
  __m128 v29; // xmm0
  enum D2D1_GAUSSIANBLUR_OPTIMIZATION v30; // r8d
  CBrushRenderingGraph *v31; // rcx
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  bool v36; // bl
  int v37; // eax
  char v38; // al
  struct IRenderTarget *v39; // rbx
  __int64 v40; // rdx
  int v41; // eax
  float *v42; // r12
  char v43; // r13
  int CustomBlurEffectNoRef; // eax
  float v45; // xmm0_4
  FLOAT v46; // xmm2_4
  float v47; // xmm1_4
  __int64 v48; // rax
  __int64 v49; // rax
  __m128 v50; // xmm3
  __m128 v51; // xmm0
  __m128 v52; // xmm2
  __int64 v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  const struct D2D_POINT_2F *v56; // r9
  int v57; // eax
  struct CRenderTargetImageSource *v58; // rax
  struct CRenderTargetImageSource *v59; // rax
  unsigned int v61; // [rsp+28h] [rbp-E0h]
  enum D2D1_INTERPOLATION_MODE v62; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v63; // [rsp+30h] [rbp-D8h]
  enum D2D1_COMPOSITE_MODE v64[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct CRenderTargetImageSource *v65; // [rsp+50h] [rbp-B8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v66[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IRenderTarget *v67; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Image *v68; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-98h] BYREF
  __int128 v70; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-80h]
  char *v72; // [rsp+90h] [rbp-78h]
  int v73; // [rsp+98h] [rbp-70h]
  struct D2D_SIZE_F v74[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v75; // [rsp+B0h] [rbp-58h]
  float v76; // [rsp+C0h] [rbp-48h]
  float v77; // [rsp+C4h] [rbp-44h]
  __int128 v78; // [rsp+D0h] [rbp-38h]
  CCustomBlur *v79; // [rsp+E8h] [rbp-20h] BYREF
  struct D2D_SIZE_F v80; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v81; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v82; // [rsp+108h] [rbp+0h]
  int v83; // [rsp+118h] [rbp+10h]
  _BYTE v84[8]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v85[8]; // [rsp+128h] [rbp+20h] BYREF
  int v86; // [rsp+130h] [rbp+28h]
  _OWORD v87[4]; // [rsp+148h] [rbp+40h] BYREF
  int v88; // [rsp+188h] [rbp+80h]
  _BYTE v89[40]; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_VECTOR_2F v90[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  unsigned __int64 v91; // [rsp+1D0h] [rbp+C8h]
  struct D2D_RECT_F v92; // [rsp+1D8h] [rbp+D0h] BYREF

  v6 = (_QWORD *)((char *)a4 + 8);
  v7 = a6;
  v74[0] = (struct D2D_SIZE_F)a6;
  *((_QWORD *)&v75 + 1) = 0LL;
  v10 = *(_OWORD *)a5;
  v12 = 0LL;
  v71 = *((_QWORD *)a5 + 2);
  v72 = (char *)a4 + 8;
  v79 = 0LL;
  v88 = 0;
  v86 = 0;
  v70 = v10;
  v69 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v69);
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 72LL))(*v6, &v69);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1F4u);
    goto LABEL_37;
  }
  ID2DContextOwner::GetCurrentRenderTargetInfo(
    (struct CDrawingContext *)((char *)a2 + 8),
    (struct RenderTargetInfo *)v85);
  v15 = v69;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v68);
  v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, struct ID2D1Image **))(*(_QWORD *)v15 + 112LL))(
          v15,
          v85,
          0LL,
          0LL,
          &v68);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1FCu);
    goto LABEL_37;
  }
  v17 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 38) + 8LL * *(unsigned int *)a4) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(**(_QWORD **)v17 + 48LL))(
    *(_QWORD *)v17,
    v17[4],
    v66,
    &v66[1],
    v84);
  SurfaceSize = CBrushRenderingGraph::GetSurfaceSize((struct IImageSource *)*v6);
  v90[0].y = 0.0;
  v90[1].x = 0.0;
  *(struct D2D_SIZE_F *)v64 = SurfaceSize;
  width_low = LODWORD(SurfaceSize.width);
  v21 = 0LL;
  height_low = LODWORD(SurfaceSize.height);
  v22 = 0LL;
  v90[1].y = SurfaceSize.height;
  v90[0].x = SurfaceSize.width;
  v21.m128_f32[0] = 0.0 - (float)(SurfaceSize.width * 0.0);
  v22.m128_f32[0] = 0.0 - (float)(SurfaceSize.height * 0.0);
  *(float *)&v91 = v21.m128_f32[0];
  *((float *)&v91 + 1) = v22.m128_f32[0];
  v23 = Matrix3x3::operator*(v6 + 4, v89, v90);
  v24 = *(_OWORD *)v23;
  v25 = *(_OWORD *)(v23 + 16);
  LODWORD(v23) = *(_DWORD *)(v23 + 32);
  v81 = v24;
  v83 = v23;
  v82 = v25;
  *(_QWORD *)v64 = **(_QWORD **)&Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v81);
  v26 = (__m128)width_low;
  v27 = *(float *)&v64[1] * *(float *)v66;
  v80.width = *(float *)v64 * *(float *)v66;
  v80.height = *(float *)&v64[1] * *(float *)v66;
  v26.m128_f32[0] = CCustomBlur::DetermineOutputScale(*(float *)&width_low, *(float *)v64 * *(float *)v66, v66[1]);
  v28 = v26;
  v29 = (__m128)height_low;
  v29.m128_f32[0] = CCustomBlur::DetermineOutputScale(*(float *)&height_low, v27, v30);
  v71 = _mm_unpacklo_ps(v28, v29).m128_u64[0];
  if ( *((_BYTE *)v6 + 28) && *((_BYTE *)v6 + 85) )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v70,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v74);
    v32 = *(float *)&v75;
    v33 = *((float *)&v75 + 1);
    v34 = *((float *)&v75 + 3);
    v35 = *((float *)&v75 + 2);
    *(_QWORD *)v64 = v71;
  }
  else
  {
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      v31,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v70,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v74);
    v35 = *((float *)&v75 + 2);
    v34 = *((float *)&v75 + 3);
    v32 = *(float *)&v75 / v76;
    v33 = *((float *)&v75 + 1) / v77;
    *(float *)v64 = *((float *)&v75 + 2) / v76;
    *(float *)&v64[1] = *((float *)&v75 + 3) / v77;
  }
  v36 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 82) - 1, *(_DWORD *)a4) == 0;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v67);
  LODWORD(v90[1].x) = 32;
  v90[0] = (struct D2D_VECTOR_2F)"DWM External Effect intermediate";
  v37 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)v90, &v74[1], v36, &v67);
  v14 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x237u);
    v7 = (struct EffectInput *)v74[0];
    goto LABEL_37;
  }
  v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 96LL))(*v6);
  v39 = v67;
  v40 = 3LL;
  if ( !v38 )
    v40 = 1LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v67 + 152LL))(v67, v40);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v65);
  v41 = CRenderTargetImageSource::Create(v39, 1, &v65);
  v7 = (struct EffectInput *)v74[0];
  v14 = v41;
  if ( v41 < 0 )
  {
    v61 = 586;
    goto LABEL_30;
  }
  v42 = (float *)v6 + 17;
  v43 = 1;
  if ( *((_BYTE *)v6 + 85) )
  {
    v43 = 0;
  }
  else
  {
    v90[0].y = 0.0;
    v90[1].x = 0.0;
    LODWORD(v90[0].x) = width_low;
    LODWORD(v90[1].y) = height_low;
    v91 = _mm_unpacklo_ps(v21, v22).m128_u64[0];
    v53 = Matrix3x3::operator*(v6 + 4, v89, v90);
    v54 = *(_OWORD *)v53;
    v55 = *(_OWORD *)(v53 + 16);
    LODWORD(v53) = *(_DWORD *)(v53 + 32);
    v81 = v54;
    v83 = v53;
    v82 = v55;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v81, (struct Matrix3x3 *)&v81) )
    {
      v41 = -2003304441;
      v61 = 609;
      v14 = -2003304441;
LABEL_30:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, v61);
      goto LABEL_31;
    }
  }
  CustomBlurEffectNoRef = CDrawingContext::GetCustomBlurEffectNoRef(a2, &v79);
  v14 = CustomBlurEffectNoRef;
  if ( CustomBlurEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CustomBlurEffectNoRef, 0x266u);
    v12 = v79;
    goto LABEL_31;
  }
  v12 = v79;
  v41 = CCustomBlur::BuildEffect(
          v79,
          v68,
          (const struct D2D_RECT_F *)((char *)v6 + 68),
          &v80,
          v66[1],
          (const struct D2D_VECTOR_2F *)v64,
          v90);
  v14 = v41;
  if ( v41 < 0 )
  {
    v61 = 621;
    goto LABEL_30;
  }
  v45 = *((float *)v6 + 19) - *v42;
  v46 = (float)(*((float *)v6 + 18) * *(float *)&v64[1]) + v90[0].y;
  v92.left = (float)(*v42 * *(float *)v64) + v90[0].x;
  v92.top = v46;
  v47 = *((float *)v6 + 20) - *((float *)v6 + 18);
  v92.right = (float)(v45 * v32) + v92.left;
  v92.bottom = (float)(v47 * v33) + v46;
  if ( v43 )
  {
    v90[0].y = 0.0;
    v90[1].x = 0.0;
    *(_QWORD *)((char *)&v70 + 4) = 0LL;
    HIDWORD(v70) = 0;
    HIDWORD(v71) = 0;
    v73 = 1065353216;
    v90[0].x = v35;
    v90[1].y = v34;
    *(float *)&v70 = 1.0 / *(float *)v64;
    *(float *)&v71 = 1.0 / *(float *)&v64[1];
    *(float *)&v91 = 0.0 - (float)(v35 * 0.0);
    *((float *)&v91 + 1) = 0.0 - (float)(v34 * 0.0);
    *((float *)&v72 + 1) = 0.0 - (float)((float)(1.0 / *(float *)&v64[1]) * 0.0);
    *(float *)&v72 = 0.0 - (float)((float)(1.0 / *(float *)v64) * 0.0);
    v48 = Matrix3x3::operator*(&v70, v89, &v81);
    v49 = Matrix3x3::operator*(v48, &v70, v90);
    v74[1].width = 0.0;
    v50 = *(__m128 *)(v49 + 16);
    v88 = 0;
    v51 = *(__m128 *)v49;
    LODWORD(v49) = *(_DWORD *)(v49 + 32);
    *(_QWORD *)((char *)&v75 + 4) = v50.m128_u32[0];
    v52 = v51;
    v83 = v49;
    LODWORD(v74[0].height) = _mm_shuffle_ps(v51, v51, 85).m128_u32[0];
    HIDWORD(v75) = _mm_shuffle_ps(v50, v50, 85).m128_u32[0];
    LODWORD(v78) = _mm_shuffle_ps(v50, v50, 170).m128_u32[0];
    LODWORD(v74[0].width) = v51.m128_i32[0];
    HIDWORD(v78) = v49;
    LODWORD(v74[1].height) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
    LODWORD(v75) = _mm_shuffle_ps(v52, v52, 255).m128_u32[0];
    v87[0] = *(_OWORD *)&v74[0].width;
    *(_QWORD *)((char *)&v78 + 4) = _mm_shuffle_ps(v50, v50, 255).m128_u32[0];
    v87[1] = v75;
    v87[3] = v78;
    v87[2] = _xmm;
  }
  else
  {
    CMILMatrix::operator=(v87);
  }
  v41 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v87, 0, 1);
  v14 = v41;
  if ( v41 < 0 )
  {
    v61 = 652;
    goto LABEL_30;
  }
  v14 = CCustomBlur::Draw(v12, a2, &v92, v56, v62, v63);
  CDrawingContext::PopTransformInternal(a2, 1);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x297u);
LABEL_31:
    CDrawingContext::PopLayer(a2);
    goto LABEL_32;
  }
  v57 = CDrawingContext::PopLayer(a2);
  v14 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x29Bu);
  }
  else
  {
    v58 = v65;
    v65 = 0LL;
    *(_QWORD *)v7 = v58;
  }
LABEL_32:
  if ( v12 )
    CCustomBlur::Reset(v12);
LABEL_37:
  if ( v14 == -2003304441 )
  {
    v59 = v65;
    v65 = 0LL;
    v14 = 0;
    *(_QWORD *)v7 = v59;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v65);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v67);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v68);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v69);
  return (unsigned int)v14;
}
