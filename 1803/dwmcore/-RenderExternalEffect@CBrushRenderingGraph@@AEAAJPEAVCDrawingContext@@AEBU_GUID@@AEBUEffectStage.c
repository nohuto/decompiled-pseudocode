/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x180067B74 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180077218 (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800772B8 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18008C720 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008C908 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18008CA28 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18008DB28 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BDF98 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800C0D78 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x1800C108C (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x1800C1488 (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800C14D0 (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800C2C4C (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801BD2E4 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderExternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a5,
        struct IImageSource **a6)
{
  char *v6; // r13
  struct IImageSource **v7; // r12
  __int128 v9; // xmm1
  __int128 v11; // xmm0
  CCustomBlur *v12; // r15
  struct CRenderTargetImageSource *v13; // rbx
  int D2DBitmap; // eax
  int v15; // edi
  CBrushRenderingGraph *v16; // rdi
  unsigned int *v17; // rdx
  float v18; // xmm11_4
  float v19; // xmm12_4
  __m128 v20; // xmm13
  __m128 v21; // xmm14
  float *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  float *v25; // rax
  FLOAT v26; // xmm7_4
  float v27; // xmm6_4
  enum D2D1_GAUSSIANBLUR_OPTIMIZATION v28; // r8d
  CBrushRenderingGraph *v29; // rcx
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  char v34; // di
  int v35; // eax
  char IsOpaque; // al
  struct IRenderTarget *v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  int CustomBlurEffectNoRef; // eax
  struct D2D_RECT_F *v41; // r13
  float v42; // xmm0_4
  FLOAT v43; // xmm2_4
  float v44; // xmm1_4
  const struct D2D_POINT_2F *v45; // r9
  CDrawingContext *v46; // rcx
  int v47; // eax
  int v48; // eax
  float *v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  unsigned int v53; // eax
  float *v54; // rax
  float *v55; // rax
  __m128 v56; // xmm3
  __m128 v57; // xmm0
  __m128 v58; // xmm2
  enum D2D1_INTERPOLATION_MODE v59; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v60; // [rsp+30h] [rbp-D8h]
  char v61; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v63[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IRenderTarget *v64; // [rsp+60h] [rbp-A8h] BYREF
  struct CRenderTargetImageSource *v65; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Bitmap1 *v66; // [rsp+70h] [rbp-98h] BYREF
  CBrushRenderingGraph *v67; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_VECTOR_2F v68[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v69; // [rsp+90h] [rbp-78h]
  float v70; // [rsp+A0h] [rbp-68h]
  float v71; // [rsp+A4h] [rbp-64h]
  __int128 v72; // [rsp+B0h] [rbp-58h]
  CCustomBlur *v73; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_SIZE_F v74; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v75; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v76; // [rsp+E8h] [rbp-20h]
  int v77; // [rsp+F8h] [rbp-10h]
  _BYTE v78[8]; // [rsp+100h] [rbp-8h] BYREF
  __int128 v79; // [rsp+108h] [rbp+0h] BYREF
  __int128 v80; // [rsp+118h] [rbp+10h]
  __int128 v81; // [rsp+128h] [rbp+20h]
  __int128 v82; // [rsp+138h] [rbp+30h]
  int v83; // [rsp+148h] [rbp+40h]
  float v84[10]; // [rsp+158h] [rbp+50h] BYREF
  struct D2D_RECT_F *v85; // [rsp+180h] [rbp+78h] BYREF
  int v86; // [rsp+188h] [rbp+80h]
  float v87; // [rsp+18Ch] [rbp+84h]
  float v88; // [rsp+190h] [rbp+88h]
  float v89; // [rsp+194h] [rbp+8Ch]
  __int128 v90; // [rsp+198h] [rbp+90h] BYREF
  unsigned __int64 v91; // [rsp+1A8h] [rbp+A0h]
  char *v92; // [rsp+1B0h] [rbp+A8h]
  int v93; // [rsp+1B8h] [rbp+B0h]
  struct D2D_RECT_F v94; // [rsp+1C0h] [rbp+B8h] BYREF

  v6 = (char *)a4 + 8;
  v7 = a6;
  v67 = this;
  *((_QWORD *)&v69 + 1) = 0LL;
  v9 = *((_OWORD *)a5 + 1);
  v11 = *(_OWORD *)a5;
  v12 = 0LL;
  v73 = 0LL;
  v91 = v9;
  v92 = (char *)a4 + 8;
  v13 = 0LL;
  v83 = 0;
  v90 = v11;
  v68[0] = (struct D2D_VECTOR_2F)a6;
  v66 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v66);
  D2DBitmap = CDrawListBitmap::GetD2DBitmap((CDrawListBitmap *)v6, a2, &v66);
  v15 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, D2DBitmap, 0x1F7u);
    goto LABEL_22;
  }
  v16 = v67;
  v17 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)v67 + 18) + 8LL * *(unsigned int *)a4) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(**(_QWORD **)v17 + 48LL))(
    *(_QWORD *)v17,
    v17[4],
    v63,
    &v63[1],
    v78);
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6, &v62);
  HIDWORD(v85) = 0;
  v86 = 0;
  v18 = (float)(int)v62;
  v20 = 0LL;
  v21 = 0LL;
  v19 = (float)SHIDWORD(v62);
  *(float *)&v85 = (float)(int)v62;
  v87 = (float)SHIDWORD(v62);
  v20.m128_f32[0] = 0.0 - (float)((float)(int)v62 * 0.0);
  v21.m128_f32[0] = 0.0 - (float)((float)SHIDWORD(v62) * 0.0);
  v88 = v20.m128_f32[0];
  v89 = v21.m128_f32[0];
  v22 = Matrix3x3::operator*((float *)v6 + 12, v84, (float *)&v85);
  v23 = *(_OWORD *)v22;
  v24 = *((_OWORD *)v22 + 1);
  *(float *)&v22 = v22[8];
  v75 = v23;
  v77 = (int)v22;
  v76 = v24;
  v25 = (float *)Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v75, (struct D2D_VECTOR_2F)&v85);
  v26 = v25[1] * *(float *)v63;
  v74.width = *v25 * *(float *)v63;
  v74.height = v26;
  v27 = CCustomBlur::DetermineOutputScale(v18, v74.width, v63[1]);
  v91 = __PAIR64__(COERCE_UNSIGNED_INT(CCustomBlur::DetermineOutputScale(v19, v26, v28)), LODWORD(v27));
  if ( v6[44] && v6[101] )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v90,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v68);
    v30 = *(float *)&v69;
    v31 = *((float *)&v69 + 1);
    v32 = *((float *)&v69 + 3);
    v33 = *((float *)&v69 + 2);
    v62 = v91;
  }
  else
  {
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      v29,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v90,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v68);
    v33 = *((float *)&v69 + 2);
    v32 = *((float *)&v69 + 3);
    v30 = *(float *)&v69 / v70;
    v31 = *((float *)&v69 + 1) / v71;
    *(float *)&v62 = *((float *)&v69 + 2) / v70;
    *((float *)&v62 + 1) = *((float *)&v69 + 3) / v71;
  }
  v34 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(v16, *((_DWORD *)v16 + 42) - 1, *(_DWORD *)a4) == 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v64);
  v86 = 32;
  v85 = (struct D2D_RECT_F *)"DWM External Effect intermediate";
  v35 = CDrawingContext::PushOffScreenRenderingLayer(
          (struct IRenderTarget **)a2,
          (const struct CResourceTag *)&v85,
          (const struct D2D_SIZE_F *)&v68[1],
          v34,
          &v64);
  v15 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v35, 0x232u);
    v7 = (struct IImageSource **)v68[0];
    goto LABEL_22;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v6);
  v37 = v64;
  v38 = 3LL;
  if ( !IsOpaque )
    v38 = 1LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v64 + 144LL))(v64, v38);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v65);
  v39 = CRenderTargetImageSource::Create(v37, 1, &v65);
  v7 = (struct IImageSource **)v68[0];
  v15 = v39;
  v13 = v65;
  if ( v39 < 0 )
  {
    v53 = 581;
    goto LABEL_35;
  }
  v61 = 1;
  v85 = (struct D2D_RECT_F *)(v6 + 84);
  if ( v6[101] )
  {
    v61 = 0;
  }
  else
  {
    DWORD2(v90) = 0;
    *(_QWORD *)&v90 = LODWORD(v18);
    *((float *)&v90 + 3) = v19;
    v91 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
    v50 = Matrix3x3::operator*((float *)v6 + 12, v84, (float *)&v90);
    v51 = *(_OWORD *)v50;
    v52 = *((_OWORD *)v50 + 1);
    *(float *)&v50 = v50[8];
    v75 = v51;
    v77 = (int)v50;
    v76 = v52;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v75, (struct Matrix3x3 *)&v75) )
    {
      v15 = -2003304441;
      v53 = 604;
      goto LABEL_35;
    }
  }
  CustomBlurEffectNoRef = CDrawingContext::GetCustomBlurEffectNoRef(a2, &v73);
  v12 = v73;
  v15 = CustomBlurEffectNoRef;
  if ( CustomBlurEffectNoRef < 0 )
  {
    v53 = 609;
  }
  else
  {
    v41 = v85;
    v15 = CCustomBlur::BuildEffect(
            v73,
            v66,
            v85,
            &v74,
            v63[1],
            (const struct D2D_VECTOR_2F *)&v62,
            (struct D2D_VECTOR_2F *)&v67);
    if ( v15 < 0 )
    {
      v53 = 616;
    }
    else
    {
      v42 = (float)(v41->right - v41->left) * v30;
      v43 = (float)(v41->top * *((float *)&v62 + 1)) + *((float *)&v67 + 1);
      v94.left = (float)(v41->left * *(float *)&v62) + *(float *)&v67;
      v44 = v41->bottom - v41->top;
      v94.top = v43;
      v94.right = v42 + v94.left;
      v94.bottom = (float)(v44 * v31) + v43;
      if ( v61 )
      {
        v86 = 0;
        *(_QWORD *)((char *)&v90 + 4) = 0LL;
        HIDWORD(v90) = 0;
        HIDWORD(v91) = 0;
        v93 = 1065353216;
        v85 = (struct D2D_RECT_F *)LODWORD(v33);
        v87 = v32;
        *(float *)&v90 = 1.0 / *(float *)&v62;
        *(float *)&v91 = 1.0 / *((float *)&v62 + 1);
        v88 = 0.0 - (float)(v33 * 0.0);
        v89 = 0.0 - (float)(v32 * 0.0);
        *((float *)&v92 + 1) = 0.0 - (float)((float)(1.0 / *((float *)&v62 + 1)) * 0.0);
        *(float *)&v92 = 0.0 - (float)((float)(1.0 / *(float *)&v62) * 0.0);
        v54 = Matrix3x3::operator*((float *)&v90, v84, (float *)&v75);
        v55 = Matrix3x3::operator*(v54, (float *)&v90, (float *)&v85);
        v56 = *(__m128 *)(v55 + 4);
        v83 = 0;
        v57 = *(__m128 *)v55;
        *(float *)&v55 = v55[8];
        *(_QWORD *)((char *)&v69 + 4) = v56.m128_u32[0];
        v58 = v57;
        v77 = (int)v55;
        *(_QWORD *)&v68[0].y = _mm_shuffle_ps(v57, v57, 85).m128_u32[0];
        HIDWORD(v69) = _mm_shuffle_ps(v56, v56, 85).m128_u32[0];
        LODWORD(v72) = _mm_shuffle_ps(v56, v56, 170).m128_u32[0];
        HIDWORD(v72) = (_DWORD)v55;
        LODWORD(v68[0].x) = v57.m128_i32[0];
        LODWORD(v68[1].y) = _mm_shuffle_ps(v58, v58, 170).m128_u32[0];
        v79 = *(_OWORD *)&v68[0].x;
        LODWORD(v69) = _mm_shuffle_ps(v58, v58, 255).m128_u32[0];
        *(_QWORD *)((char *)&v72 + 4) = _mm_shuffle_ps(v56, v56, 255).m128_u32[0];
        v80 = v69;
        v82 = v72;
      }
      else
      {
        v79 = _xmm;
        LOWORD(v83) = 32085;
        v80 = _xmm;
        v82 = _xmm;
      }
      v81 = _xmm;
      v15 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v79, 0, 1);
      if ( v15 < 0 )
      {
        v53 = 647;
      }
      else
      {
        v15 = CCustomBlur::Draw(v12, a2, &v94, v45, v59, v60);
        CDrawingContext::PopTransformInternal(a2, 1);
        if ( v15 >= 0 )
        {
          v47 = CDrawingContext::PopLayer(v46);
          v15 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v47, 0x296u);
          }
          else
          {
            v48 = CDrawListBitmap::FromImageSource(v7, v13, a2, 0);
            v15 = v48;
            if ( v48 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v48, 0x298u);
          }
          goto LABEL_20;
        }
        v53 = 658;
      }
    }
  }
LABEL_35:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v15, v53);
  CDrawingContext::PopLayer(a2);
LABEL_20:
  if ( v12 )
    CCustomBlur::Reset(v12);
LABEL_22:
  if ( v15 == -2003304441 )
    v15 = CDrawListBitmap::FromImageSource(v7, v13, a2, 0);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v65);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v64);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v66);
  return (unsigned int)v15;
}
