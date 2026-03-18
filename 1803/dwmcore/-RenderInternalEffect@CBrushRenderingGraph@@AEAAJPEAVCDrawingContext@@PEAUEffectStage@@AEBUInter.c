/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008C908 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18008DB28 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A3834 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800C2C4C (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801BD2E4 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct IRenderTarget **a2,
        struct EffectStage *a3,
        __m128 *a4,
        struct EffectInput *a5)
{
  struct EffectInput *v5; // r14
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  float v11; // xmm3_4
  int v12; // eax
  struct CDrawListCache *v13; // rdi
  int updated; // ebx
  unsigned int v15; // edx
  unsigned int v16; // ebx
  CBrushRenderingGraph *v17; // rcx
  char *v18; // rax
  char v19; // bl
  int v20; // eax
  struct IRenderTarget *v21; // rbx
  int v22; // eax
  int v23; // eax
  CDrawingContext *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // eax
  struct CRenderTargetImageSource *v30; // [rsp+48h] [rbp-C0h] BYREF
  struct IRenderTarget *v31; // [rsp+50h] [rbp-B8h] BYREF
  struct EffectInput *v32; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_SIZE_F v33; // [rsp+60h] [rbp-A8h] BYREF
  float v34; // [rsp+68h] [rbp-A0h]
  float v35; // [rsp+6Ch] [rbp-9Ch]
  float v36; // [rsp+70h] [rbp-98h]
  float v37; // [rsp+74h] [rbp-94h]
  float v38[10]; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_SIZE_F v39[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-50h]
  char *v41; // [rsp+C0h] [rbp-48h]
  __int128 v42; // [rsp+C8h] [rbp-40h]
  __int128 v43; // [rsp+D8h] [rbp-30h]
  __int128 v44; // [rsp+F8h] [rbp-10h]
  __int128 v45; // [rsp+118h] [rbp+10h] BYREF
  __int128 v46; // [rsp+128h] [rbp+20h]
  __int128 v47; // [rsp+138h] [rbp+30h]
  __int128 v48; // [rsp+148h] [rbp+40h]
  int v49; // [rsp+158h] [rbp+50h]
  struct CDrawListCache *width_low; // [rsp+168h] [rbp+60h] BYREF
  int v51; // [rsp+170h] [rbp+68h]
  FLOAT height; // [rsp+174h] [rbp+6Ch]
  float v53; // [rsp+178h] [rbp+70h]
  float v54; // [rsp+17Ch] [rbp+74h]

  v5 = a5;
  v47 = _xmm;
  v31 = 0LL;
  v9 = *a4;
  v30 = 0LL;
  v45 = _xmm;
  LOWORD(v49) = 32085;
  width_low = 0LL;
  v32 = a5;
  v33.width = 1.0;
  v33.height = 1.0;
  *(__m128 *)&v39[0].width = v9;
  v46 = _xmm;
  v10 = a4[1];
  *(_OWORD *)((char *)a5 + 84) = _xmm;
  *(_QWORD *)((char *)a5 + 52) = 0LL;
  v41 = (char *)v10.m128_u64[1];
  v40 = 0x3F8000003F800000LL;
  v48 = _xmm;
  v11 = 1.0 / _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  *((_DWORD *)a5 + 15) = 0;
  *((_DWORD *)a5 + 17) = 0;
  *((_DWORD *)a5 + 20) = 1065353216;
  v36 = 1.0 / v9.m128_f32[0];
  v37 = v11;
  *((float *)a5 + 12) = 1.0 / v9.m128_f32[0];
  *((float *)a5 + 16) = v11;
  *((float *)a5 + 18) = 0.0 - (float)((float)(1.0 / v9.m128_f32[0]) * 0.0);
  *((float *)a5 + 19) = 0.0 - (float)(v11 * 0.0);
  v12 = CDrawListCache::Create(&width_low);
  v13 = width_low;
  updated = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x173u);
    goto LABEL_28;
  }
  v15 = *((_DWORD *)a3 + 1);
  v16 = 0;
  if ( v15 )
  {
    do
    {
      v17 = (CBrushRenderingGraph *)(104LL * v16);
      v18 = (char *)a3 + (_QWORD)v17 + 8;
      v41 = v18;
      if ( v18[44] && v18[101] && v15 == 1 )
      {
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v39,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v32);
        v51 = 0;
        width_low = (struct CDrawListCache *)LODWORD(v33.width);
        height = v33.height;
        v53 = 0.0 - (float)(v33.width * 0.0);
        v54 = 0.0 - (float)(v33.height * 0.0);
        Matrix3x3::operator*((float *)a5 + 12, v38, (float *)&width_low);
        v49 = 0;
        *(float *)&v42 = v38[0];
        *((float *)&v42 + 3) = v38[2];
        *(_QWORD *)((char *)&v43 + 4) = LODWORD(v38[4]);
        *(_QWORD *)((char *)&v42 + 4) = LODWORD(v38[1]);
        *(float *)&v44 = v38[6];
        *(float *)&v43 = v38[3];
        *((float *)&v44 + 3) = v38[8];
        *((float *)&v43 + 3) = v38[5];
        *(_QWORD *)((char *)&v44 + 4) = LODWORD(v38[7]);
        v45 = v42;
        v46 = v43;
        v48 = v44;
        v47 = _xmm;
      }
      else
      {
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v17,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v39,
          (struct D2D_VECTOR_2F *)&v32);
        CMILMatrix::SetScale((CMILMatrix *)&v45, v34, v35, 1.0, 0.0, 0.0, 0.0);
      }
      v15 = *((_DWORD *)a3 + 1);
      ++v16;
    }
    while ( v16 < v15 );
    v5 = v32;
  }
  v19 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a3) == 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v31);
  v51 = 32;
  width_low = (struct CDrawListCache *)"DWM Internal Effect intermediate";
  v20 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&width_low, &v33, v19, &v31);
  updated = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x199u);
    goto LABEL_28;
  }
  v21 = v31;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v31 + 144LL))(v31, 1LL);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v30);
  v22 = CRenderTargetImageSource::Create(v21, 1, &v30);
  updated = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1A0u);
    goto LABEL_25;
  }
  v23 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, (const struct CMILMatrix *)&v45, 0, 1);
  updated = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1A2u);
    goto LABEL_25;
  }
  updated = CBrushRenderingGraph::UpdateDrawListCache(this, (struct CDrawingContext *)a2, v39, 0LL, a3, v13);
  if ( updated < 0 )
  {
    v28 = 426;
    goto LABEL_22;
  }
  updated = CDrawListCache::Render((__int64)v13, (CDrawingContext *)a2, (CMILMatrix *)&v45, 1.0);
  if ( updated < 0 )
  {
    v28 = 432;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v28);
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
LABEL_25:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_28;
  }
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  v25 = CDrawingContext::PopLayer(v24);
  updated = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1B7u);
  }
  else
  {
    v26 = CDrawListBitmap::FromImageSource((struct IImageSource **)v5, v30, (const struct CDrawingContext *)a2, 0);
    updated = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1B9u);
    }
    else
    {
      *((_DWORD *)v5 + 10) |= *((_DWORD *)v13 + 24) & 4;
      v27 = *((_DWORD *)v5 + 10) | *((_DWORD *)v13 + 24) & 2;
      *((_DWORD *)v5 + 10) = v27;
      *((_DWORD *)v5 + 10) = v27 | *((_DWORD *)v13 + 24) & 0x100;
    }
  }
LABEL_28:
  if ( v13 )
    CMILRefCountBase::Release(v13);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v31);
  return (unsigned int)updated;
}
