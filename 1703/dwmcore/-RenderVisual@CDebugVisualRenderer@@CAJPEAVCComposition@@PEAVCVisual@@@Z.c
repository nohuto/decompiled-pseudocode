/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Render@CDebugVisualRenderer@@SAXPEAVCComposition@@@Z @ 0x180149388 (-Render@CDebugVisualRenderer@@SAXPEAVCComposition@@@Z.c)
 * Callees:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18007DCC8 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180145AF4 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1801492D4 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x1801A9010 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2)
{
  unsigned int v3; // ebx
  int v4; // r9d
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
  CD2DContext **v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  CSystemMemoryBitmap *v20; // rax
  CSystemMemoryBitmap *v21; // rdi
  unsigned int v23; // [rsp+28h] [rbp-E0h]
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  CSwRenderTargetGetBounds *v25; // [rsp+90h] [rbp-78h] BYREF
  CSystemMemoryBitmap *v26; // [rsp+98h] [rbp-70h] BYREF
  CDrawingContext *v27; // [rsp+A0h] [rbp-68h] BYREF
  CDisplaySet *v28; // [rsp+A8h] [rbp-60h] BYREF
  struct CDisplay *v29; // [rsp+B0h] [rbp-58h] BYREF
  struct CVisualTree *v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v33[4]; // [rsp+CCh] [rbp-3Ch] BYREF
  _BYTE v34[4]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v35[4]; // [rsp+D4h] [rbp-34h] BYREF
  _BYTE v36[4]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v37[4]; // [rsp+DCh] [rbp-2Ch] BYREF
  _BYTE v38[8]; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v39[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v40; // [rsp+128h] [rbp+20h]
  __int128 v41; // [rsp+138h] [rbp+30h] BYREF
  __int64 v42; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v43; // [rsp+150h] [rbp+48h]
  unsigned int v44; // [rsp+154h] [rbp+4Ch]
  __int64 v45[2]; // [rsp+158h] [rbp+50h] BYREF
  struct _D3DCOLORVALUE v46; // [rsp+168h] [rbp+60h] BYREF
  int v47[2]; // [rsp+178h] [rbp+70h] BYREF
  int v48; // [rsp+180h] [rbp+78h]
  __int64 v49; // [rsp+188h] [rbp+80h]

  v40 = 32085;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v39[0] = _xmm;
  v39[1] = _xmm;
  v39[2] = _xmm;
  v39[3] = _xmm;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v3 = -2147467259;
    v23 = 123;
LABEL_3:
    v4 = v3;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v23);
    goto LABEL_49;
  }
  v31 = 1LL;
  VisualTree = CVisual::GetVisualTree(CDebugVisualRenderer::s_pVisual, &v30);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 131;
    goto LABEL_47;
  }
  v6 = v30;
  VisualTree = CVisualTree::PreCompute(v30, 0LL);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 133;
    goto LABEL_47;
  }
  VisualTree = CDisplayManager::GetCurrentDisplaySet(v7, &v28);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 135;
    goto LABEL_47;
  }
  VisualTree = CDisplaySet::GetPrimaryDisplay(v28, &v29);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 137;
    goto LABEL_47;
  }
  v8 = *((_QWORD *)v6 + 3);
  v9 = *(__m128 *)(v8 + 136);
  v10 = *(_QWORD *)(v8 + 152);
  *(_QWORD *)&v41 = 0LL;
  v11 = v9.m128_i32[0];
  v49 = v10;
  v12 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  *((float *)&v41 + 2) = _mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v9.m128_f32[0];
  *((float *)&v41 + 3) = _mm_shuffle_ps(v9, v9, 255).m128_f32[0] - v12;
  VisualTree = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v45);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 146;
    goto LABEL_47;
  }
  v13 = *((float *)&v41 + 3) - *((float *)&v41 + 1);
  v14 = *((float *)&v41 + 2) - *(float *)&v41;
  *(_QWORD *)v47 = "DWM Rendertarget (debugger visualization)";
  v48 = 41;
  DisplayId = CDisplay::GetDisplayId((__int64)v29, &v32);
  VisualTree = CD3DDeviceManager::CreateRenderTargetBitmap(
                 (__int64)&qword_18023E818,
                 (__int64)v47,
                 (int)(float)(v14 + 0.5),
                 (int)(float)(v13 + 0.5),
                 v31,
                 0,
                 (struct PixelFormatInfo *)v45,
                 1,
                 (struct _GUID *)((char *)a1 + 324),
                 v16,
                 *DisplayId,
                 0,
                 0,
                 1,
                 (void **)&v25);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 161;
    goto LABEL_47;
  }
  VisualTree = CDrawingContext::Create(a1, &v27);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 163;
    goto LABEL_47;
  }
  v17 = (CD2DContext **)v27;
  VisualTree = CDrawingContext::BeginFrame(v27, v25, 0LL, 0, 0LL, 0LL, 0, 0LL);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 168;
    goto LABEL_47;
  }
  *(_QWORD *)&v46.r = 0LL;
  *(_QWORD *)&v46.b = 0LL;
  VisualTree = CDrawingContext::Clear(v17, &v46);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 176;
    goto LABEL_47;
  }
  CMILMatrix::Translate((CMILMatrix *)v39, COERCE_FLOAT(v11 ^ _xmm), COERCE_FLOAT(LODWORD(v12) ^ _xmm));
  VisualTree = CDrawingContext::PushTransformInternal((CDrawingContext *)v17, 0LL, (const struct CMILMatrix *)v39, 0, 1);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 180;
    goto LABEL_47;
  }
  VisualTree = CDrawingContext::DrawVisualTree((CDrawingContext *)v17, (__int64)v6, &v41, 0LL, 0, 1, 1, 0, 1, 0, 0);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 189;
    goto LABEL_47;
  }
  VisualTree = CDrawingContext::EndFrame((CDrawingContext *)v17, v18, v19);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 191;
    goto LABEL_47;
  }
  v42 = 0LL;
  v43 = (int)(float)((float)(*((float *)&v41 + 2) - *(float *)&v41) + 0.5);
  v44 = (int)(float)((float)(*((float *)&v41 + 3) - *((float *)&v41 + 1)) + 0.5);
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
    v23 = 203;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v21 + 8LL))(v21);
  v45[0] = 0x100000057LL;
  VisualTree = CSystemMemoryBitmap::HrInit(v21, v43, v44, (const struct PixelFormatInfo *)v45, 1);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 214;
    goto LABEL_47;
  }
  VisualTree = (*(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, __int128 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v25 + 96LL))(
                 v25,
                 &v41,
                 (__int64)v21 + 24,
                 0LL,
                 0);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 216;
    goto LABEL_47;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*((_QWORD *)v21 + 3) + 24LL))(
                 (__int64)v21 + 24,
                 &v42,
                 1LL,
                 &v24);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 221;
    goto LABEL_47;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v24 + 48LL))(v24, v34, v33);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 230;
    goto LABEL_47;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 56LL))(v24, v35);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 232;
    goto LABEL_47;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 24LL))(v24, v36);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 234;
    goto LABEL_47;
  }
  VisualTree = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v24 + 64LL))(v24, v37, v38);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v23 = 236;
LABEL_47:
    v4 = VisualTree;
    goto LABEL_48;
  }
LABEL_49:
  ReleaseInterface<IBitmapLock>(&v24);
  ReleaseInterface<IBitmapLock>((__int64 *)&v26);
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v25);
  ReleaseInterface<CDrawingContext>((__int64 *)&v27);
  ReleaseInterface<CDisplaySet const>(&v28);
  ReleaseInterface<CDisplay const>(&v29);
  ReleaseInterface<CVisualTree>(&v30);
  return v3;
}
