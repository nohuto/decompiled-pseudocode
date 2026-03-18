/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18006CFF0 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800435C8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18020A96C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020AB80 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, CMILMatrix *a3, float a4)
{
  unsigned int v4; // edi
  bool v5; // cc
  __int64 v6; // rax
  int v9; // esi
  _QWORD *v10; // r15
  struct D2D_RECT_F *(__fastcall *v11)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr); // rax
  __int128 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  bool v16; // zf
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm7_4
  __int128 v21; // xmm0
  CMILMatrix *v22; // r14
  struct ID2D1Geometry *v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, CDrawingContext *, CMILMatrix *); // rax
  int v26; // eax
  int v28; // eax
  int D2DGeometry; // eax
  int v30; // eax
  char v31; // [rsp+40h] [rbp-C0h]
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct ID2D1Geometry *v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  CMILMatrix *v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  float v39; // [rsp+90h] [rbp-70h]
  float v40; // [rsp+94h] [rbp-6Ch]
  float v41; // [rsp+98h] [rbp-68h]
  float v42; // [rsp+9Ch] [rbp-64h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v5 = *(float *)(a1 + 52) <= *(float *)(a1 + 44);
  v6 = *((_QWORD *)a2 + 48);
  v37 = a3;
  v36 = v6;
  v35 = 0LL;
  v34 = 0LL;
  v31 = 0;
  if ( v5 || *(float *)(a1 + 56) <= *(float *)(a1 + 48) || a4 <= 0.0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 100) & 0x20) != 0 )
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD0u);
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD4u);
      return (unsigned int)v9;
    }
  }
  if ( !*(_DWORD *)(a1 + 40) )
    return (unsigned int)v9;
  while ( 1 )
  {
    v10 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v4);
    v11 = *(struct D2D_RECT_F *(__fastcall **)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr))(*v10 + 32LL);
    if ( v11 == CHWDrawListEntry::GetBounds )
    {
      v12 = &v44;
      v44 = *(_OWORD *)(v10[7] + 56LL);
    }
    else
    {
      v12 = (__int128 *)v11(*(CHWDrawListEntry **)(*(_QWORD *)(a1 + 32) + 8LL * v4), (struct D2D_RECT_F *)&v44);
    }
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 160LL))(v36);
    v14 = 0LL;
    v15 = *(_DWORD *)(v13 + 344);
    if ( v15 )
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 320) + 8LL * (unsigned int)(v15 - 1));
    v16 = *(_DWORD *)(v14 + 76) == 1;
    v32 = *(_OWORD *)(v14 + 60);
    if ( v16 )
    {
      v20 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v32 - 0.5);
      v19 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v32 + 1) - 0.5);
      v18 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v32 + 2) - 0.5);
      v17 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v32 + 3) - 0.5);
    }
    else
    {
      v17 = *((float *)&v32 + 3);
      v18 = *((float *)&v32 + 2);
      v19 = *((float *)&v32 + 1);
      v20 = *(float *)&v32;
    }
    v21 = *v12;
    v22 = v37;
    v38 = v21;
    CMILMatrix::Transform2DBoundsHelper<0>(v37);
    if ( v18 <= v39 || v17 <= v40 || v41 <= v20 || v42 <= v19 )
      goto LABEL_21;
    v23 = (struct ID2D1Geometry *)v10[6];
    if ( v35 != v23 )
    {
      v35 = (struct ID2D1Geometry *)v10[6];
      if ( v31 )
      {
        v28 = CDrawingContext::PopLayer(a2);
        v9 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xEAu);
          goto LABEL_22;
        }
        v31 = 0;
        ReleaseInterface<ID2D1Geometry>((__int64 *)&v34);
        v23 = (struct ID2D1Geometry *)v10[6];
        v35 = v23;
      }
      if ( v23 )
        break;
    }
LABEL_18:
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v4);
    v25 = *(__int64 (__fastcall **)(__int64, CDrawingContext *, CMILMatrix *))(*(_QWORD *)v24 + 40LL);
    if ( (char *)v25 == (char *)CHWDrawListEntry::Render )
      v26 = CHWDrawListEntry::Render(v24, a2, v22);
    else
      v26 = v25(v24, a2, v22);
    v9 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x105u);
      goto LABEL_22;
    }
LABEL_21:
    if ( ++v4 >= *(_DWORD *)(a1 + 40) )
      goto LABEL_22;
  }
  CComplexShape::CComplexShape((CComplexShape *)&v32, v23);
  D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)&v32, v22, &v34);
  v9 = D2DGeometry;
  if ( D2DGeometry >= 0 )
  {
    v43 = *(_OWORD *)(a1 + 44);
    CMILMatrix::Transform2DBoundsHelper<0>(v22);
    v30 = CDrawingContext::PushD2DLayer(a2, 0LL, &v45, (__int64)v34, 0LL, 1.0, 0, 0);
    v9 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x100u);
      goto LABEL_45;
    }
    v31 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    if ( *((_QWORD *)&v32 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 16LL))(*((_QWORD *)&v32 + 1));
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0xFAu);
LABEL_45:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  if ( *((_QWORD *)&v32 + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 16LL))(*((_QWORD *)&v32 + 1));
LABEL_22:
  if ( v31 )
    CDrawingContext::PopLayer(a2);
  if ( v34 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v34 + 16LL))(v34);
  return (unsigned int)v9;
}
