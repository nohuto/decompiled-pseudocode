/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x1800375C4 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180048234 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800483C8 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800484E8 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800487FC (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18004889C (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18006EF94 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B37C8 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800BCC2C (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x1800BCF40 (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x1800BD314 (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800BD35C (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800BF7D4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180187D00 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderExternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a5,
        struct EffectInput *a6)
{
  char *v6; // r13
  CDrawListBitmap *v7; // r12
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
  bool v34; // di
  int v35; // eax
  char IsOpaque; // al
  struct IRenderTarget *v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  int CustomBlurEffectNoRef; // eax
  struct D2D_RECT_F *v41; // r13
  int v42; // eax
  float v43; // xmm0_4
  FLOAT v44; // xmm2_4
  float v45; // xmm1_4
  int v46; // eax
  const struct D2D_POINT_2F *v47; // r9
  int v48; // eax
  int v49; // eax
  float *v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
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
  struct ID2D1Image *v66; // [rsp+70h] [rbp-98h] BYREF
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
  _OWORD v79[4]; // [rsp+108h] [rbp+0h] BYREF
  int v80; // [rsp+148h] [rbp+40h]
  float v81[10]; // [rsp+158h] [rbp+50h] BYREF
  struct D2D_RECT_F *v82; // [rsp+180h] [rbp+78h] BYREF
  int v83; // [rsp+188h] [rbp+80h]
  float v84; // [rsp+18Ch] [rbp+84h]
  float v85; // [rsp+190h] [rbp+88h]
  float v86; // [rsp+194h] [rbp+8Ch]
  __int128 v87; // [rsp+198h] [rbp+90h] BYREF
  unsigned __int64 v88; // [rsp+1A8h] [rbp+A0h]
  char *v89; // [rsp+1B0h] [rbp+A8h]
  int v90; // [rsp+1B8h] [rbp+B0h]
  struct D2D_RECT_F v91; // [rsp+1C0h] [rbp+B8h] BYREF

  v6 = (char *)a4 + 8;
  v7 = a6;
  v67 = this;
  *((_QWORD *)&v69 + 1) = 0LL;
  v9 = *((_OWORD *)a5 + 1);
  v11 = *(_OWORD *)a5;
  v12 = 0LL;
  v73 = 0LL;
  v88 = v9;
  v89 = (char *)a4 + 8;
  v13 = 0LL;
  v80 = 0;
  v87 = v11;
  v68[0] = (struct D2D_VECTOR_2F)a6;
  v66 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
  D2DBitmap = CDrawListBitmap::GetD2DBitmap((CDrawListBitmap *)v6, a2, &v66);
  v15 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, D2DBitmap, 0x1F4u);
    goto LABEL_22;
  }
  v16 = v67;
  v17 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)v67 + 38) + 8LL * *(unsigned int *)a4) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(**(_QWORD **)v17 + 48LL))(
    *(_QWORD *)v17,
    v17[4],
    v63,
    &v63[1],
    v78);
  CDrawListBitmap::GetSize((CDrawListBitmap *)v6, &v62);
  HIDWORD(v82) = 0;
  v83 = 0;
  v18 = (float)(int)v62;
  v20 = 0LL;
  v21 = 0LL;
  v19 = (float)SHIDWORD(v62);
  *(float *)&v82 = (float)(int)v62;
  v84 = (float)SHIDWORD(v62);
  v20.m128_f32[0] = 0.0 - (float)((float)(int)v62 * 0.0);
  v21.m128_f32[0] = 0.0 - (float)((float)SHIDWORD(v62) * 0.0);
  v85 = v20.m128_f32[0];
  v86 = v21.m128_f32[0];
  v22 = Matrix3x3::operator*((float *)v6 + 12, v81, (float *)&v82);
  v23 = *(_OWORD *)v22;
  v24 = *((_OWORD *)v22 + 1);
  *(float *)&v22 = v22[8];
  v75 = v23;
  v77 = (int)v22;
  v76 = v24;
  v25 = (float *)Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v75, (struct D2D_VECTOR_2F)&v82);
  v26 = v25[1] * *(float *)v63;
  v74.width = *v25 * *(float *)v63;
  v74.height = v26;
  v27 = CCustomBlur::DetermineOutputScale(v18, v74.width, v63[1]);
  v88 = __PAIR64__(COERCE_UNSIGNED_INT(CCustomBlur::DetermineOutputScale(v19, v26, v28)), LODWORD(v27));
  if ( v6[44] && v6[101] )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v87,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v68);
    v30 = *(float *)&v69;
    v31 = *((float *)&v69 + 1);
    v32 = *((float *)&v69 + 3);
    v33 = *((float *)&v69 + 2);
    v62 = v88;
  }
  else
  {
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      v29,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v87,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v68);
    v33 = *((float *)&v69 + 2);
    v32 = *((float *)&v69 + 3);
    v30 = *(float *)&v69 / v70;
    v31 = *((float *)&v69 + 1) / v71;
    *(float *)&v62 = *((float *)&v69 + 2) / v70;
    *((float *)&v62 + 1) = *((float *)&v69 + 3) / v71;
  }
  v34 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(v16, *((_DWORD *)v16 + 82) - 1, *(_DWORD *)a4) == 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v64);
  v83 = 32;
  v82 = (struct D2D_RECT_F *)"DWM External Effect intermediate";
  v35 = CDrawingContext::PushOffScreenRenderingLayer(
          a2,
          (const struct CResourceTag *)&v82,
          (const struct D2D_SIZE_F *)&v68[1],
          v34,
          &v64);
  v15 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v35, 0x22Fu);
    v7 = (CDrawListBitmap *)v68[0];
    goto LABEL_22;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v6);
  v37 = v64;
  v38 = 3LL;
  if ( !IsOpaque )
    v38 = 1LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v64 + 136LL))(v64, v38);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v65);
  v39 = CRenderTargetImageSource::Create(v37, 1, &v65);
  v7 = (CDrawListBitmap *)v68[0];
  v15 = v39;
  v13 = v65;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v39, 0x242u);
    goto LABEL_35;
  }
  v61 = 1;
  v82 = (struct D2D_RECT_F *)(v6 + 84);
  if ( v6[101] )
  {
    v61 = 0;
  }
  else
  {
    DWORD2(v87) = 0;
    *(_QWORD *)&v87 = LODWORD(v18);
    *((float *)&v87 + 3) = v19;
    v88 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
    v51 = Matrix3x3::operator*((float *)v6 + 12, v81, (float *)&v87);
    v52 = *(_OWORD *)v51;
    v53 = *((_OWORD *)v51 + 1);
    *(float *)&v51 = v51[8];
    v75 = v52;
    v77 = (int)v51;
    v76 = v53;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v75, (struct Matrix3x3 *)&v75) )
    {
      v15 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, -2003304441, 0x259u);
      goto LABEL_35;
    }
  }
  CustomBlurEffectNoRef = CDrawingContext::GetCustomBlurEffectNoRef(a2, &v73);
  v15 = CustomBlurEffectNoRef;
  if ( CustomBlurEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, CustomBlurEffectNoRef, 0x25Eu);
    v12 = v73;
  }
  else
  {
    v41 = v82;
    v12 = v73;
    v42 = CCustomBlur::BuildEffect(
            v73,
            v66,
            v82,
            &v74,
            v63[1],
            (const struct D2D_VECTOR_2F *)&v62,
            (struct D2D_VECTOR_2F *)&v67);
    v15 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v42, 0x265u);
    }
    else
    {
      v43 = (float)(v41->right - v41->left) * v30;
      v44 = (float)(v41->top * *((float *)&v62 + 1)) + *((float *)&v67 + 1);
      v91.left = (float)(v41->left * *(float *)&v62) + *(float *)&v67;
      v45 = v41->bottom - v41->top;
      v91.top = v44;
      v91.right = v43 + v91.left;
      v91.bottom = (float)(v45 * v31) + v44;
      if ( v61 )
      {
        v83 = 0;
        *(_QWORD *)((char *)&v87 + 4) = 0LL;
        HIDWORD(v87) = 0;
        HIDWORD(v88) = 0;
        v90 = 1065353216;
        v82 = (struct D2D_RECT_F *)LODWORD(v33);
        v84 = v32;
        *(float *)&v87 = 1.0 / *(float *)&v62;
        *(float *)&v88 = 1.0 / *((float *)&v62 + 1);
        v85 = 0.0 - (float)(v33 * 0.0);
        v86 = 0.0 - (float)(v32 * 0.0);
        *((float *)&v89 + 1) = 0.0 - (float)((float)(1.0 / *((float *)&v62 + 1)) * 0.0);
        *(float *)&v89 = 0.0 - (float)((float)(1.0 / *(float *)&v62) * 0.0);
        v54 = Matrix3x3::operator*((float *)&v87, v81, (float *)&v75);
        v55 = Matrix3x3::operator*(v54, (float *)&v87, (float *)&v82);
        v56 = *(__m128 *)(v55 + 4);
        v80 = 0;
        v57 = *(__m128 *)v55;
        *(float *)&v55 = v55[8];
        *(_QWORD *)((char *)&v69 + 4) = v56.m128_u32[0];
        v58 = v57;
        v77 = (int)v55;
        *(_QWORD *)&v68[0].y = _mm_shuffle_ps(v57, v57, 85).m128_u32[0];
        HIDWORD(v69) = _mm_shuffle_ps(v56, v56, 85).m128_u32[0];
        LODWORD(v72) = _mm_shuffle_ps(v56, v56, 170).m128_u32[0];
        LODWORD(v68[0].x) = v57.m128_i32[0];
        HIDWORD(v72) = (_DWORD)v55;
        LODWORD(v68[1].y) = _mm_shuffle_ps(v58, v58, 170).m128_u32[0];
        LODWORD(v69) = _mm_shuffle_ps(v58, v58, 255).m128_u32[0];
        v79[0] = *(_OWORD *)&v68[0].x;
        *(_QWORD *)((char *)&v72 + 4) = _mm_shuffle_ps(v56, v56, 255).m128_u32[0];
        v79[1] = v69;
        v79[3] = v72;
        v79[2] = _xmm;
      }
      else
      {
        CMILMatrix::operator=((__int64)v79);
      }
      v46 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v79, 0, 1);
      v15 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v46, 0x284u);
      }
      else
      {
        v15 = CCustomBlur::Draw(v12, a2, &v91, v47, v59, v60);
        CDrawingContext::PopTransformInternal(a2, 1);
        if ( v15 >= 0 )
        {
          v48 = CDrawingContext::PopLayer(a2);
          v15 = v48;
          if ( v48 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v48, 0x293u);
          }
          else
          {
            v49 = CDrawListBitmap::FromImageSource(v7, v13, a2, 0, 0);
            v15 = v49;
            if ( v49 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v49, 0x295u);
          }
          goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v15, 0x28Fu);
      }
    }
  }
LABEL_35:
  CDrawingContext::PopLayer(a2);
LABEL_20:
  if ( v12 )
    CCustomBlur::Reset(v12);
LABEL_22:
  if ( v15 == -2003304441 )
    v15 = CDrawListBitmap::FromImageSource(v7, v13, a2, 0, 0);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v65);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v64);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
  return (unsigned int)v15;
}
