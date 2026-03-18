/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18000ABBC (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180051E5C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18007468C (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920 (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C0CA8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180135AF4 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18013A2BC (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801C4124 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2)
{
  unsigned int v3; // ebx
  DWORD v4; // r9d
  int VisualTree; // eax
  struct CVisualTree *v6; // rsi
  CDisplayManager *v7; // rcx
  __int64 v8; // rax
  __m128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int32 v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  unsigned int *DisplayId; // rax
  struct _LUID v16; // r10
  CDrawingContext *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  CSystemMemoryBitmap *v20; // rax
  CSystemMemoryBitmap *v21; // rdi
  unsigned int v23; // [rsp+28h] [rbp-E0h]
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  CSwRenderTargetGetBounds *v25; // [rsp+80h] [rbp-88h] BYREF
  CSystemMemoryBitmap *v26; // [rsp+88h] [rbp-80h] BYREF
  CDrawingContext *v27; // [rsp+90h] [rbp-78h] BYREF
  CDisplaySet *v28; // [rsp+98h] [rbp-70h] BYREF
  struct CDisplay *v29; // [rsp+A0h] [rbp-68h] BYREF
  struct CVisualTree *v30; // [rsp+A8h] [rbp-60h] BYREF
  int v31; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v32[4]; // [rsp+B4h] [rbp-54h] BYREF
  _BYTE v33[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v35[8]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v36[16]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v37[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v38; // [rsp+118h] [rbp+10h]
  __m128 v39; // [rsp+128h] [rbp+20h] BYREF
  __int128 v40; // [rsp+138h] [rbp+30h] BYREF
  __int64 v41; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v42; // [rsp+150h] [rbp+48h]
  unsigned int v43; // [rsp+154h] [rbp+4Ch]
  _DWORD v44[4]; // [rsp+158h] [rbp+50h] BYREF
  const char *v45; // [rsp+168h] [rbp+60h] BYREF
  int v46; // [rsp+170h] [rbp+68h]
  __int64 v47; // [rsp+178h] [rbp+70h]

  v38 = 32085;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v37[0] = _xmm;
  v37[1] = _xmm;
  v37[2] = _xmm;
  v37[3] = _xmm;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v3 = -2147467259;
    v23 = 126;
LABEL_3:
    v4 = v3;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v23);
    goto LABEL_45;
  }
  *(_QWORD *)&v40 = 1LL;
  VisualTree = CVisual::GetVisualTree(CDebugVisualRenderer::s_pVisual, &v30);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 134;
    goto LABEL_43;
  }
  v6 = v30;
  VisualTree = CVisualTree::PreCompute(v30);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 136;
    goto LABEL_43;
  }
  VisualTree = CDisplayManager::GetCurrentDisplaySet(v7, &v28);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 138;
    goto LABEL_43;
  }
  VisualTree = CDisplaySet::GetPrimaryDisplay(v28, &v29);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 140;
    goto LABEL_43;
  }
  v8 = *((_QWORD *)v6 + 3);
  v9 = *(__m128 *)(v8 + 140);
  v10 = *(_QWORD *)(v8 + 156);
  v39.m128_u64[0] = 0LL;
  v11 = v9.m128_i32[0];
  v47 = v10;
  v12 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v39.m128_f32[2] = _mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v9.m128_f32[0];
  v39.m128_f32[3] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0] - v12;
  VisualTree = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v44);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 149;
    goto LABEL_43;
  }
  v13 = v39.m128_f32[3] - v39.m128_f32[1];
  v14 = v39.m128_f32[2] - v39.m128_f32[0];
  v45 = "DWM Rendertarget (debugger visualization)";
  v46 = 41;
  DisplayId = CDisplay::GetDisplayId((__int64)v29, &v31);
  VisualTree = CD3DDeviceManager::CreateRenderTargetBitmap(
                 (__int64)&qword_18026EEE8,
                 (__int64)&v45,
                 (int)(float)(v14 + 0.5),
                 (int)(float)(v13 + 0.5),
                 v40,
                 0,
                 (__int64)v44,
                 1,
                 v16,
                 *DisplayId,
                 0,
                 0,
                 1,
                 &v25);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 163;
    goto LABEL_43;
  }
  VisualTree = CDrawingContext::Create(a1, &v27);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 165;
    goto LABEL_43;
  }
  v17 = v27;
  *(_QWORD *)&v40 = __PAIR64__(
                      LODWORD(CDebugVisualRenderer::s_clearColorG),
                      LODWORD(CDebugVisualRenderer::s_clearColorR));
  *((_QWORD *)&v40 + 1) = __PAIR64__(
                            LODWORD(CDebugVisualRenderer::s_clearColorA),
                            LODWORD(CDebugVisualRenderer::s_clearColorB));
  VisualTree = CDrawingContext::BeginFrame(v27, v25, &v40, 0, 0LL, 0LL, 0, 0LL);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 176;
    goto LABEL_43;
  }
  CMILMatrix::Translate((CMILMatrix *)v37, COERCE_FLOAT(v11 ^ _xmm), COERCE_FLOAT(LODWORD(v12) ^ _xmm));
  VisualTree = CDrawingContext::PushTransformInternal(v17, 0LL, (const struct CMILMatrix *)v37, 0, 1);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 181;
    goto LABEL_43;
  }
  VisualTree = CDrawingContext::DrawVisualTree(v17, (__int64)v6, &v39, 0LL, 1, 1, 1, 0, 0, 0, 0, 0);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 188;
    goto LABEL_43;
  }
  VisualTree = CDrawingContext::EndFrame(v17, v18, v19);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 190;
    goto LABEL_43;
  }
  v41 = 0LL;
  v42 = (int)(float)((float)(v39.m128_f32[2] - v39.m128_f32[0]) + 0.5);
  v43 = (int)(float)((float)(v39.m128_f32[3] - v39.m128_f32[1]) + 0.5);
  v20 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new();
  if ( v20 )
  {
    v21 = CSystemMemoryBitmap::CSystemMemoryBitmap(v20);
    v26 = v21;
  }
  else
  {
    v21 = 0LL;
    v26 = 0LL;
  }
  if ( !v21 )
  {
    v3 = -2147024882;
    v23 = 202;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v21 + 8LL))(v21);
  v44[0] = 87;
  v44[1] = 1;
  VisualTree = CSystemMemoryBitmap::HrInit(v21, v42, v43, (const struct PixelFormatInfo *)v44, 1);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 213;
    goto LABEL_43;
  }
  VisualTree = (*(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, __m128 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v25 + 80LL))(
                 v25,
                 &v39,
                 (__int64)v21 + 24,
                 0LL,
                 0);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 215;
    goto LABEL_43;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*((_QWORD *)v21 + 3) + 24LL))(
                 (__int64)v21 + 24,
                 &v41,
                 1LL,
                 &v24);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 220;
    goto LABEL_43;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v33, v32);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 229;
    goto LABEL_43;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 40LL))(v24, v34);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 231;
    goto LABEL_43;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 24LL))(v24, &v40);
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v24 + 48LL))(v24, v35, v36);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 235;
LABEL_43:
    v4 = VisualTree;
    goto LABEL_44;
  }
LABEL_45:
  ReleaseInterface<IBitmapLock>(&v24);
  ReleaseInterface<IBitmapLock>((__int64 *)&v26);
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v25);
  ReleaseInterface<CDrawingContext>((__int64 *)&v27);
  ReleaseInterface<CDisplaySet const>(&v28);
  ReleaseInterface<CDisplay const>(&v29);
  ReleaseInterface<CVisualTree>(&v30);
  return v3;
}
