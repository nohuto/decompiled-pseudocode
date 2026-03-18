/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18003E988 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180045A04 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801CB55C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CB710 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, struct CMILMatrix *a3, float a4)
{
  unsigned int v4; // edi
  bool v5; // cc
  __int64 v6; // rax
  int v9; // r15d
  _QWORD *v10; // r14
  struct D2D_RECT_F *(__fastcall *v11)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr); // rax
  __int128 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  bool v16; // zf
  float v17; // xmm6_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  __int128 v21; // xmm0
  struct CMILMatrix *v22; // rsi
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64, CDrawingContext *, struct CMILMatrix *); // rax
  int v25; // eax
  struct ID2D1Geometry *v26; // r14
  int v28; // eax
  struct ID2D1Geometry *v29; // rax
  int D2DGeometry; // eax
  int v31; // eax
  char v32; // [rsp+40h] [rbp-C0h]
  struct ID2D1Geometry *v33; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h]
  struct ID2D1Geometry *v35; // [rsp+60h] [rbp-A0h]
  _BYTE v36[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  struct CMILMatrix *v39; // [rsp+80h] [rbp-80h]
  __int128 v40; // [rsp+88h] [rbp-78h] BYREF
  float v41[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v44[16]; // [rsp+C8h] [rbp-38h] BYREF

  v4 = 0;
  v5 = *(float *)(a1 + 52) <= *(float *)(a1 + 44);
  v6 = *((_QWORD *)a2 + 48);
  v39 = a3;
  v38 = v6;
  v35 = 0LL;
  v33 = 0LL;
  v32 = 0;
  if ( v5 || *(float *)(a1 + 56) <= *(float *)(a1 + 48) || a4 <= 0.0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 92) & 0x20) != 0 )
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC4u);
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC8u);
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
      v12 = &v43;
      v43 = *(_OWORD *)(v10[7] + 56LL);
    }
    else
    {
      v12 = (__int128 *)v11(*(CHWDrawListEntry **)(*(_QWORD *)(a1 + 32) + 8LL * v4), (struct D2D_RECT_F *)&v43);
    }
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 152LL))(v38);
    v14 = 0LL;
    v15 = *(_DWORD *)(v13 + 344);
    if ( v15 )
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 320) + 8LL * (unsigned int)(v15 - 1));
    v16 = *(_DWORD *)(v14 + 76) == 1;
    v34 = *(_OWORD *)(v14 + 60);
    if ( v16 )
    {
      v20 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v34 - 0.5);
      v19 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v34 + 1) - 0.5);
      v18 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v34 + 2) - 0.5);
      v17 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v34 + 3) - 0.5);
    }
    else
    {
      v17 = *((float *)&v34 + 3);
      v18 = *((float *)&v34 + 2);
      v19 = *((float *)&v34 + 1);
      v20 = *(float *)&v34;
    }
    v21 = *v12;
    v22 = v39;
    v40 = v21;
    CMILMatrix::Transform2DBoundsHelper<0>(v39, &v40, v41);
    if ( v18 <= v41[0] || v17 <= v41[1] || v41[2] <= v20 || v41[3] <= v19 )
      goto LABEL_21;
    if ( v35 != (struct ID2D1Geometry *)v10[6] )
      break;
LABEL_18:
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v4);
    v24 = *(__int64 (__fastcall **)(__int64, CDrawingContext *, struct CMILMatrix *))(*(_QWORD *)v23 + 40LL);
    if ( (char *)v24 == (char *)CHWDrawListEntry::Render )
      v25 = CHWDrawListEntry::Render(v23, a2, v22);
    else
      v25 = v24(v23, a2, v22);
    v9 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xF9u);
      goto LABEL_22;
    }
LABEL_21:
    if ( ++v4 >= *(_DWORD *)(a1 + 40) )
      goto LABEL_22;
  }
  if ( v32 )
  {
    v28 = CDrawingContext::PopLayer(a2);
    v9 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xDEu);
LABEL_22:
      v26 = v33;
      goto LABEL_23;
    }
    v32 = 0;
    ReleaseInterface<ID2D1Geometry>(&v33);
  }
  v29 = (struct ID2D1Geometry *)v10[6];
  v35 = v29;
  if ( !v29 )
    goto LABEL_18;
  CComplexShape::CComplexShape((CComplexShape *)v36, v29);
  D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)v36, v22, &v33);
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0xEEu);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v37);
    goto LABEL_22;
  }
  v42 = *(_OWORD *)(a1 + 44);
  CMILMatrix::Transform2DBoundsHelper<0>(v22, &v42, v44);
  v26 = v33;
  v31 = CDrawingContext::PushD2DLayer(a2, 0LL, SLODWORD(FLOAT_1_0), 0, 0);
  v9 = v31;
  if ( v31 >= 0 )
  {
    v32 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v37);
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xF4u);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v37);
LABEL_23:
  if ( v32 )
    CDrawingContext::PopLayer(a2);
  if ( v26 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v26 + 16LL))(v26);
  return (unsigned int)v9;
}
