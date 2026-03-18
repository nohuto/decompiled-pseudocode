/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18008180C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B6AB0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800C78B0 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C9650 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180156D64 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180158404 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18015D3A8 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180200854 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2)
{
  unsigned int v3; // ebx
  int v4; // r9d
  int VisualTree; // eax
  struct CVisualTree *v6; // rsi
  CDisplayManager *v7; // rcx
  __int64 v8; // rax
  struct CDisplay *v9; // r14
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  int *DisplayId; // rax
  struct _LUID v19; // r10
  CDrawingContext *v20; // rdi
  CSystemMemoryBitmap *v21; // rax
  CSystemMemoryBitmap *v22; // rdi
  unsigned int v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  struct IRenderTarget *v26; // [rsp+80h] [rbp-88h] BYREF
  CDrawingContext *v27; // [rsp+88h] [rbp-80h] BYREF
  CDisplaySet *v28; // [rsp+90h] [rbp-78h] BYREF
  struct CDisplay *v29; // [rsp+98h] [rbp-70h] BYREF
  struct CVisualTree *v30; // [rsp+A0h] [rbp-68h] BYREF
  CSystemMemoryBitmap *v31; // [rsp+A8h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v33[4]; // [rsp+B4h] [rbp-54h] BYREF
  _BYTE v34[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v35[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v36[8]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v37[16]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v38[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v39; // [rsp+118h] [rbp+10h]
  __m128 v40; // [rsp+128h] [rbp+20h] BYREF
  __int128 v41; // [rsp+138h] [rbp+30h] BYREF
  __int128 v42; // [rsp+148h] [rbp+40h] BYREF
  __int64 v43; // [rsp+158h] [rbp+50h]
  __int64 v44; // [rsp+160h] [rbp+58h] BYREF
  unsigned int v45; // [rsp+168h] [rbp+60h]
  unsigned int v46; // [rsp+16Ch] [rbp+64h]
  int v47[4]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v48[2]; // [rsp+180h] [rbp+78h] BYREF

  v39 = 32085;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v38[0] = _xmm;
  v38[1] = _xmm;
  v38[2] = _xmm;
  v38[3] = _xmm;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v3 = -2147467259;
    v24 = 130;
LABEL_3:
    v4 = v3;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v24);
    goto LABEL_53;
  }
  *(_QWORD *)&v41 = 1LL;
  VisualTree = CVisual::GetVisualTree(CDebugVisualRenderer::s_pVisual, &v30);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 138;
    goto LABEL_51;
  }
  v6 = v30;
  VisualTree = CVisualTree::PreCompute(v30, 0LL);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 140;
    goto LABEL_51;
  }
  VisualTree = CDisplayManager::GetCurrentDisplaySet(v7, &v28);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 142;
    goto LABEL_51;
  }
  VisualTree = CDisplaySet::GetPrimaryDisplay(v28, &v29);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 144;
    goto LABEL_51;
  }
  v8 = *((_QWORD *)v6 + 3);
  v9 = v29;
  v10 = *(_QWORD *)(v8 + 156);
  v42 = *(_OWORD *)(v8 + 140);
  v11 = *(_OWORD *)((char *)v29 + 120);
  v43 = v10;
  *(_OWORD *)v47 = v11;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v42)
    || (v12 = *((float *)&v42 + 2), v13 = *(float *)&v42, (float)(*((float *)&v42 + 2) - *(float *)&v42) > 4096.0)
    || (v14 = *((float *)&v42 + 3),
        v15 = *((float *)&v42 + 1),
        (float)(*((float *)&v42 + 3) - *((float *)&v42 + 1)) > 2160.0) )
  {
    if ( TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v47) )
    {
      v42 = _xmm;
      v14 = *((float *)&_xmm + 3);
      v12 = *((float *)&_xmm + 2);
      v15 = *((float *)&_xmm + 1);
      v13 = *(float *)&_xmm;
    }
    else
    {
      v13 = (float)v47[0];
      v15 = (float)v47[1];
      v12 = (float)v47[2];
      v14 = (float)v47[3];
    }
  }
  v40.m128_u64[0] = 0LL;
  v40.m128_f32[2] = v12 - v13;
  v40.m128_f32[3] = v14 - v15;
  VisualTree = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v48);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 173;
    goto LABEL_51;
  }
  v16 = v40.m128_f32[3] - v40.m128_f32[1];
  v17 = v40.m128_f32[2] - v40.m128_f32[0];
  *(_QWORD *)v47 = "DWM Rendertarget (debugger visualization)";
  v47[2] = 41;
  DisplayId = CDisplay::GetDisplayId((__int64)v9, &v32);
  VisualTree = CD3DDeviceManager::CreateRenderTargetBitmap(
                 (__int64)&qword_1802D6728,
                 (__int64)v47,
                 (int)(float)(v17 + 0.5),
                 (int)(float)(v16 + 0.5),
                 v41,
                 0,
                 (__int64)v48,
                 1,
                 v19,
                 *DisplayId,
                 0,
                 0,
                 1,
                 &v26);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 187;
    goto LABEL_51;
  }
  VisualTree = CDrawingContext::Create(a1, &v27);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 189;
    goto LABEL_51;
  }
  v20 = v27;
  *(_QWORD *)&v41 = __PAIR64__(
                      LODWORD(CDebugVisualRenderer::s_clearColorG),
                      LODWORD(CDebugVisualRenderer::s_clearColorR));
  *((_QWORD *)&v41 + 1) = __PAIR64__(
                            LODWORD(CDebugVisualRenderer::s_clearColorA),
                            LODWORD(CDebugVisualRenderer::s_clearColorB));
  VisualTree = CDrawingContext::BeginFrame(v27, v26, &v41, 0, 0LL, 0LL, 0, 0LL);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 200;
    goto LABEL_51;
  }
  ++dword_1802D6248;
  CMILMatrix::Translate((CMILMatrix *)v38, COERCE_FLOAT(LODWORD(v13) ^ _xmm), COERCE_FLOAT(LODWORD(v15) ^ _xmm));
  VisualTree = CDrawingContext::PushTransformInternal(v20, 0LL, (const struct CMILMatrix *)v38, 0, 1);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 207;
    goto LABEL_51;
  }
  VisualTree = CDrawingContext::DrawVisualTree(v20, (__int64)v6, &v40, 0LL, 1, 1, 1, 1, 0, 0, 0, 0);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 214;
    goto LABEL_51;
  }
  VisualTree = CDrawingContext::EndFrame(v20);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 216;
    goto LABEL_51;
  }
  v44 = 0LL;
  v45 = (int)(float)((float)(v40.m128_f32[2] - v40.m128_f32[0]) + 0.5);
  v46 = (int)(float)((float)(v40.m128_f32[3] - v40.m128_f32[1]) + 0.5);
  v21 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new();
  if ( v21 )
    v22 = CSystemMemoryBitmap::CSystemMemoryBitmap(v21);
  else
    v22 = 0LL;
  v31 = v22;
  if ( !v22 )
  {
    v3 = -2147024882;
    v24 = 228;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v22 + 8LL))(v22);
  v48[0] = 0x100000057LL;
  VisualTree = CSystemMemoryBitmap::HrInit(v22, v45, v46, (const struct PixelFormatInfo *)v48, 1);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 239;
    goto LABEL_51;
  }
  VisualTree = (*(__int64 (__fastcall **)(struct IRenderTarget *, __m128 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v26 + 80LL))(
                 v26,
                 &v40,
                 (__int64)v22 + 24,
                 0LL,
                 0);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 241;
    goto LABEL_51;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*((_QWORD *)v22 + 3) + 24LL))(
                 (__int64)v22 + 24,
                 &v44,
                 1LL,
                 &v25);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 246;
    goto LABEL_51;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v25 + 32LL))(v25, v34, v33);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 255;
    goto LABEL_51;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 40LL))(v25, v35);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 257;
    goto LABEL_51;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 24LL))(v25, &v41);
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v25 + 48LL))(v25, v36, v37);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 261;
LABEL_51:
    v4 = VisualTree;
    goto LABEL_52;
  }
  if ( CDebugVisualRenderer::s_fForceDebugBreak )
    DebugBreak();
LABEL_53:
  ReleaseInterface<IBitmapLock>(&v25);
  ReleaseInterface<IBitmapLock>((__int64 *)&v31);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v26);
  ReleaseInterface<CDrawingContext>((__int64 *)&v27);
  ReleaseInterface<CDisplaySet const>(&v28);
  ReleaseInterface<CDisplay const>(&v29);
  ReleaseInterface<CVisualTree>(&v30);
  return v3;
}
