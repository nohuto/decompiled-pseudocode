/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x18000CCC0 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180156620 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180159DF0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18000B6BC (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18000DC64 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034830 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180034868 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800422F4 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180050F08 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C9650 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?MagnifierSetExclude@CComposition@@QEAAX_N@Z @ 0x18014A430 (-MagnifierSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180161C64 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180162554 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, bool *a2)
{
  COffScreenRenderTarget *v2; // r15
  unsigned int v5; // esi
  struct CDrawingContext *DrawingContext; // rax
  __int64 v7; // r13
  char v8; // r14
  int v9; // r12d
  int v10; // eax
  int v11; // eax
  __int64 v12; // r13
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  void (__fastcall *v16)(COffScreenRenderTarget *, __int64 *); // rax
  bool v17; // al
  char v18; // bl
  char v19; // r10
  unsigned int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  char v23; // si
  char v24; // al
  int v25; // eax
  int v26; // eax
  bool v27; // zf
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  char v32; // [rsp+60h] [rbp-A0h]
  char v33; // [rsp+61h] [rbp-9Fh]
  char v34; // [rsp+64h] [rbp-9Ch]
  bool v35; // [rsp+68h] [rbp-98h]
  unsigned int v36; // [rsp+6Ch] [rbp-94h]
  unsigned int ResampleMode; // [rsp+70h] [rbp-90h]
  CDrawingContext *v38; // [rsp+78h] [rbp-88h]
  struct IRenderTarget *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  __int128 v41; // [rsp+90h] [rbp-70h]
  __int64 v42[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-40h]
  __int128 v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-20h]
  _OWORD v47[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v48; // [rsp+130h] [rbp+30h]
  int v49; // [rsp+140h] [rbp+40h]
  int v50; // [rsp+144h] [rbp+44h]
  float v51; // [rsp+148h] [rbp+48h]
  float v52; // [rsp+14Ch] [rbp+4Ch]

  v2 = (COffScreenRenderTarget *)((char *)this - 64);
  v5 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((COffScreenRenderTarget *)((char *)this - 64), (bool)a2);
  v34 = 0;
  v7 = 0LL;
  ResampleMode = 0;
  v8 = 0;
  LOBYTE(v9) = 0;
  *a2 = 0;
  v38 = DrawingContext;
  v41 = _xmm;
  v33 = 0;
  if ( !*((_BYTE *)this + 202) )
    return v5;
  v10 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 216LL))(v2);
  v5 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x129u);
    goto LABEL_20;
  }
  if ( !*((_DWORD *)this + 58) )
    return v5;
  CComposition::ShowHideCursors(*((CComposition **)this - 6), *((_BYTE *)this + 200) != 0);
  v11 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 7));
  v5 = v11;
  if ( v11 >= 0 )
  {
    v8 = 1;
    if ( *((_BYTE *)this + 201) )
    {
      CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 1);
      v33 = 1;
    }
    *(_BYTE *)(*((_QWORD *)this - 6) + 1344LL) = 1;
    v12 = *((_QWORD *)this + 7);
    if ( !v12 )
    {
LABEL_24:
      *(_BYTE *)(*((_QWORD *)this - 6) + 1344LL) = 0;
LABEL_25:
      if ( v33 )
        CComposition::MagnifierSetExclude(*((CComposition **)this - 6), 0);
      goto LABEL_27;
    }
    v13 = *((_DWORD *)this + 74);
    v49 = 0;
    v50 = 0;
    v46 = 0;
    v7 = *(_QWORD *)(v12 + 24);
    v14 = (float)v13;
    v15 = (float)*((int *)this + 75);
    v16 = *(void (__fastcall **)(COffScreenRenderTarget *, __int64 *))(*(_QWORD *)v2 + 208LL);
    v51 = v14;
    v52 = v15;
    v16(v2, v42);
    v47[0] = *(_OWORD *)v42;
    v47[1] = v43;
    v47[2] = v44;
    v47[3] = v45;
    v48 = v46;
    v17 = CMILMatrix::Invert((CMILMatrix *)v47);
    v18 = *(_DWORD *)(v7 + 96);
    v9 = (int)(*(_DWORD *)(v7 + 96) << 18) >> 28;
    v35 = v17;
    v34 = v18;
    ResampleMode = CVisual::GetResampleMode(v7);
    *(_BYTE *)(v7 + 96) = v19 | 2;
    *(_DWORD *)(v7 + 96) &= 0xFFFFC7FF;
    *(_DWORD *)(v7 + 96) |= 0x400u;
    CVisual::SetResampleMode(v7, *((unsigned int *)this + 32));
    v20 = 0;
    v36 = 0;
    if ( !*((_DWORD *)this + 58) )
    {
LABEL_21:
      if ( v7 )
      {
        *(_BYTE *)(v7 + 96) = v18;
        *(_DWORD *)(v7 + 96) &= 0xFFFFC3FF;
        *(_DWORD *)(v7 + 96) |= (v9 & 0xF) << 10;
        CVisual::SetResampleMode(v7, ResampleMode);
      }
      if ( !v8 )
        goto LABEL_25;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v39 = *(struct IRenderTarget **)(*((_QWORD *)this + 26) + 8LL * v20);
      v21 = *(_QWORD *)v39;
      (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 144LL))(this);
      (*(void (__fastcall **)(struct IRenderTarget *))(v21 + 176))(v39);
      v32 = 0;
      v22 = CDrawingContext::BeginFrame(v38, v39, (__int64)v42, *((_QWORD *)this + 14), 0, 0LL);
      v5 = v22;
      if ( v22 < 0 )
        break;
      ++dword_1802D6248;
      if ( (*(unsigned int (__fastcall **)(COffScreenRenderTarget *, _QWORD))(*(_QWORD *)v2 + 240LL))(v2, v36) )
      {
        v29 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, _QWORD))(*(_QWORD *)v2 + 240LL))(v2, v36);
        v30 = CDrawingContext::PushStereoContext(v38, v29, 0LL);
        v5 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x184u);
          goto LABEL_20;
        }
        v32 = 1;
      }
      v23 = 0;
      if ( v35 )
        CDrawingContext::CalculateOcclusion(v38, *((struct CVisualTree **)this + 7), 0, 1, (__int64)&v40);
      if ( *((_BYTE *)this + 203) && *((_BYTE *)this + 204) )
        v23 = 1;
      v24 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v2 + 248LL))(v2);
      v25 = CDrawingContext::DrawVisualTree(v38, 0x7FFFFFFF, v24, 0, 1, 0, 1, 1, v23);
      v5 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1A0u);
        goto LABEL_20;
      }
      v26 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, CDrawingContext *))(*(_QWORD *)v2 + 256LL))(v2, v38);
      v5 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1A3u);
        goto LABEL_20;
      }
      if ( v32 )
      {
        v31 = CDrawingContext::PopStereoContext(v38, 0LL);
        v5 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1A7u);
          goto LABEL_20;
        }
      }
      CDrawingContext::EndFrame(v38);
      v27 = !g_LockAndReadOffscreenTarget;
      *((_BYTE *)this + 203) = *((_BYTE *)v38 + 6837);
      if ( !v27 )
        (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v39 + 224LL))(v39, 0LL, 0LL);
      v20 = v36 + 1;
      v36 = v20;
      if ( v20 >= *((_DWORD *)this + 58) )
        goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x17Du);
LABEL_20:
    v18 = v34;
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x141u);
LABEL_27:
  if ( (v5 & 0x80000000) != 0 )
    ReleaseInterface<CDrawingContext>((char *)this + 48);
  else
    COffScreenRenderTarget::SetNeedsFlush(v2);
  CComposition::RestoreCursors(*((CComposition **)this - 6));
  return v5;
}
