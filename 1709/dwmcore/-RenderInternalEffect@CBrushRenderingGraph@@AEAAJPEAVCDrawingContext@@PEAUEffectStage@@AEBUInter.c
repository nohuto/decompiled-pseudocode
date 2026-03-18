/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800483C8 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800593F0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18006EF94 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800B2B14 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800BF7D4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180187D00 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct EffectStage *a3,
        __m128 *a4,
        struct EffectInput *a5)
{
  struct EffectInput *v6; // r14
  float *v9; // rbx
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // xmm3_4
  float v13; // xmm4_4
  signed int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // edi
  CBrushRenderingGraph *v18; // rcx
  char *v19; // rax
  bool v20; // bl
  signed int v21; // eax
  struct IRenderTarget *v22; // rbx
  signed int v23; // eax
  signed int v24; // eax
  struct CDrawListCache *v25; // rbx
  signed int updated; // eax
  signed int v27; // eax
  signed int v28; // eax
  signed int v29; // eax
  int v30; // ecx
  struct CDrawListCache *v32; // [rsp+48h] [rbp-C0h] BYREF
  struct CRenderTargetImageSource *v33; // [rsp+50h] [rbp-B8h] BYREF
  struct IRenderTarget *v34; // [rsp+58h] [rbp-B0h] BYREF
  struct EffectInput *v35; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v36; // [rsp+68h] [rbp-A0h] BYREF
  float v37; // [rsp+70h] [rbp-98h]
  float v38; // [rsp+74h] [rbp-94h]
  float v39; // [rsp+78h] [rbp-90h]
  float v40; // [rsp+7Ch] [rbp-8Ch]
  float v41[10]; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_SIZE_F v42[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-48h]
  char *v44; // [rsp+C8h] [rbp-40h]
  __int128 v45; // [rsp+D0h] [rbp-38h]
  __int128 v46; // [rsp+E0h] [rbp-28h]
  __int128 v47; // [rsp+100h] [rbp-8h]
  __int128 v48; // [rsp+118h] [rbp+10h] BYREF
  __int128 v49; // [rsp+128h] [rbp+20h]
  __int128 v50; // [rsp+138h] [rbp+30h]
  __int128 v51; // [rsp+148h] [rbp+40h]
  int v52; // [rsp+158h] [rbp+50h]
  const char *width_low; // [rsp+168h] [rbp+60h] BYREF
  int v54; // [rsp+170h] [rbp+68h]
  FLOAT height; // [rsp+174h] [rbp+6Ch]
  float v56; // [rsp+178h] [rbp+70h]
  float v57; // [rsp+17Ch] [rbp+74h]

  v6 = a5;
  v34 = 0LL;
  v9 = (float *)((char *)a5 + 48);
  v33 = 0LL;
  v32 = 0LL;
  LOWORD(v52) = 32085;
  v35 = a5;
  v36.width = 1.0;
  v36.height = 1.0;
  v50 = _xmm;
  v10 = *a4;
  v49 = _xmm;
  v11 = a4[1];
  *(__m128 *)&v42[0].width = v10;
  v44 = (char *)v11.m128_u64[1];
  v43 = 0x3F8000003F800000LL;
  v51 = _xmm;
  v12 = 1.0 / v10.m128_f32[0];
  v39 = 1.0 / v10.m128_f32[0];
  v13 = 1.0 / _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v40 = v13;
  v48 = _xmm;
  *(_OWORD *)((char *)a5 + 84) = _xmm;
  if ( a5 != (struct EffectInput *)-48LL )
  {
    *((_DWORD *)a5 + 13) = 0;
    *((_DWORD *)a5 + 14) = 0;
    *((_DWORD *)a5 + 15) = 0;
    *((_DWORD *)a5 + 17) = 0;
    *v9 = v12;
    *((float *)a5 + 16) = v13;
    *((float *)a5 + 18) = 0.0 - (float)(v12 * 0.0);
    *((float *)a5 + 19) = 0.0 - (float)(v13 * 0.0);
    *((_DWORD *)a5 + 20) = 1065353216;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v32);
  v14 = CDrawListCache::Create(&v32);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x171u);
    goto LABEL_30;
  }
  v16 = *((_DWORD *)a3 + 1);
  v17 = 0;
  if ( v16 )
  {
    do
    {
      v18 = (CBrushRenderingGraph *)(104LL * v17);
      v19 = (char *)a3 + (_QWORD)v18 + 8;
      v44 = v19;
      if ( v19[44] && v19[101] && v16 == 1 )
      {
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v42,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v35);
        v54 = 0;
        width_low = (const char *)LODWORD(v36.width);
        height = v36.height;
        v56 = 0.0 - (float)(v36.width * 0.0);
        v57 = 0.0 - (float)(v36.height * 0.0);
        Matrix3x3::operator*(v9, v41, (float *)&width_low);
        v52 = 0;
        *(float *)&v45 = v41[0];
        *((float *)&v45 + 3) = v41[2];
        *(_QWORD *)((char *)&v46 + 4) = LODWORD(v41[4]);
        *(_QWORD *)((char *)&v45 + 4) = LODWORD(v41[1]);
        *(float *)&v47 = v41[6];
        *(float *)&v46 = v41[3];
        *((float *)&v47 + 3) = v41[8];
        *((float *)&v46 + 3) = v41[5];
        *(_QWORD *)((char *)&v47 + 4) = LODWORD(v41[7]);
        v48 = v45;
        v49 = v46;
        v51 = v47;
        v50 = _xmm;
      }
      else
      {
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v18,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v42,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v35);
        CMILMatrix::SetScale((CMILMatrix *)&v48, v37, v38, 1.0, 0.0, 0.0, 0.0);
      }
      v16 = *((_DWORD *)a3 + 1);
      ++v17;
    }
    while ( v17 < v16 );
    v6 = v35;
  }
  v20 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 82) - 1, *(_DWORD *)a3) == 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v34);
  v54 = 32;
  width_low = "DWM Internal Effect intermediate";
  v21 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&width_low, &v36, v20, &v34);
  v15 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x197u);
    goto LABEL_30;
  }
  v22 = v34;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v34 + 136LL))(v34, 1LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
  v23 = CRenderTargetImageSource::Create(v22, 1, &v33);
  v15 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x19Eu);
    goto LABEL_27;
  }
  v24 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v48, 0, 1);
  v15 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x1A0u);
    goto LABEL_27;
  }
  v25 = v32;
  updated = CBrushRenderingGraph::UpdateDrawListCache(this, a2, v42, a3, v32);
  v15 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x1A7u);
    goto LABEL_24;
  }
  v27 = CDrawListCache::Render((__int64)v25, a2, (struct CMILMatrix *)&v48, 1.0);
  v15 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x1ADu);
LABEL_24:
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_27:
    CDrawingContext::PopLayer(a2);
    goto LABEL_30;
  }
  CDrawingContext::PopTransformInternal(a2, 1);
  v28 = CDrawingContext::PopLayer(a2);
  v15 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x1B4u);
  }
  else
  {
    v29 = CDrawListBitmap::FromImageSource(v6, v33, a2, 0, 0);
    v15 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x1B6u);
    }
    else
    {
      *((_DWORD *)v6 + 10) |= *((_DWORD *)v25 + 22) & 4;
      v30 = *((_DWORD *)v6 + 10) | *((_DWORD *)v25 + 22) & 2;
      *((_DWORD *)v6 + 10) = v30;
      *((_DWORD *)v6 + 10) = v30 | *((_DWORD *)v25 + 22) & 0x80;
    }
  }
LABEL_30:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v34);
  return v15;
}
