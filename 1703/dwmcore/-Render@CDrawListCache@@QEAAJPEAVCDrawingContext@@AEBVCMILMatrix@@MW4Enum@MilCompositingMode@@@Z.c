/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB220
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18001D03C (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801B02B0 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0490 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, struct CMILMatrix *a3, float a4)
{
  struct ID2D1Geometry *v4; // r12
  bool v5; // cc
  __int64 v6; // rax
  int v9; // edi
  __int64 v10; // rsi
  _QWORD *v11; // r15
  struct D2D_RECT_F *(__fastcall *v12)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr); // rax
  __int128 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm7_4
  __int128 v22; // xmm0
  struct CMILMatrix *v23; // r14
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, CDrawingContext *, struct CMILMatrix *); // rax
  int v26; // eax
  int v28; // eax
  struct ID2D1Geometry *v29; // rax
  int D2DGeometry; // eax
  int v31; // eax
  char v32; // [rsp+40h] [rbp-C0h]
  struct ID2D1Geometry *v33; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h]
  struct ID2D1Geometry *v35; // [rsp+60h] [rbp-A0h]
  _BYTE v36[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  struct CMILMatrix *v39; // [rsp+80h] [rbp-80h]
  __int128 v40; // [rsp+88h] [rbp-78h] BYREF
  float v41[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-38h] BYREF

  v4 = 0LL;
  v5 = *(float *)(a1 + 52) <= *(float *)(a1 + 44);
  v6 = *((_QWORD *)a2 + 49);
  v39 = a3;
  v38 = v6;
  v35 = 0LL;
  v33 = 0LL;
  v32 = 0;
  if ( v5 || *(float *)(a1 + 56) <= *(float *)(a1 + 48) || a4 <= 0.0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 92) & 0x20) == 0 )
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    if ( v9 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC2u);
    return (unsigned int)v9;
  }
  v9 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBEu);
    return (unsigned int)v9;
  }
LABEL_6:
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v10);
      v12 = *(struct D2D_RECT_F *(__fastcall **)(CHWDrawListEntry *__hidden, struct D2D_RECT_F *__return_ptr __struct_ptr))(*v11 + 32LL);
      if ( v12 == CHWDrawListEntry::GetBounds )
      {
        v13 = &v43;
        v43 = *(_OWORD *)(v11[7] + 56LL);
      }
      else
      {
        v13 = (__int128 *)v12(*(CHWDrawListEntry **)(*(_QWORD *)(a1 + 32) + 8 * v10), (struct D2D_RECT_F *)&v43);
      }
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 176LL))(v38);
      v15 = 0LL;
      v16 = *(_DWORD *)(v14 + 360);
      if ( v16 )
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 336) + 8LL * (unsigned int)(v16 - 1));
      v17 = *(_DWORD *)(v15 + 76) == 1;
      v34 = *(_OWORD *)(v15 + 60);
      if ( v17 )
      {
        v21 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v34 - 0.5);
        v20 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v34 + 1) - 0.5);
        v19 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v34 + 2) - 0.5);
        v18 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v34 + 3) - 0.5);
      }
      else
      {
        v18 = *((float *)&v34 + 3);
        v19 = *((float *)&v34 + 2);
        v20 = *((float *)&v34 + 1);
        v21 = *(float *)&v34;
      }
      v22 = *v13;
      v23 = v39;
      v40 = v22;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v39, (__int64)&v40, v41);
      if ( v19 > v41[0] && v18 > v41[1] && v41[2] > v21 && v41[3] > v20 )
      {
        if ( v35 != (struct ID2D1Geometry *)v11[6] )
        {
          if ( v32 )
          {
            v28 = CDrawingContext::PopLayer(a2);
            v9 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xD8u);
              goto LABEL_22;
            }
            v32 = 0;
            ReleaseInterface<ID2D1Geometry>((__int64 *)&v33);
            v4 = v33;
          }
          v29 = (struct ID2D1Geometry *)v11[6];
          v35 = v29;
          if ( v29 )
          {
            CComplexShape::CComplexShape((CComplexShape *)v36, v29);
            D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)v36, v23, &v33);
            v9 = D2DGeometry;
            if ( D2DGeometry < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0xE8u);
              Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v37);
              v4 = v33;
              goto LABEL_22;
            }
            v42 = *(_OWORD *)(a1 + 44);
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v23, (__int64)&v42, (float *)&v44);
            v4 = v33;
            v31 = CDrawingContext::PushD2DLayer(a2, 0LL, &v44, (__int64)v33, 0LL, 1.0, 0, 0);
            v9 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xEEu);
              Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v37);
              goto LABEL_22;
            }
            v32 = 1;
            Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v37);
          }
        }
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10);
        v25 = *(__int64 (__fastcall **)(__int64, CDrawingContext *, struct CMILMatrix *))(*(_QWORD *)v24 + 40LL);
        v26 = (char *)v25 == (char *)CHWDrawListEntry::Render
            ? CHWDrawListEntry::Render(v24, a2, v23)
            : v25(v24, a2, v23);
        v9 = v26;
        if ( v26 < 0 )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_22;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xF3u);
LABEL_22:
    if ( v32 )
      CDrawingContext::PopLayer(a2);
    if ( v4 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)v9;
}
