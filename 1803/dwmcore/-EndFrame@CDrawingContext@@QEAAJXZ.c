/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D14 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800702C8 (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCF14 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800426C0 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18006BB20 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801403B0 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // r15d
  int v5; // eax
  __int64 v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int i; // esi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  unsigned int j; // esi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CSwRenderTargetGetBounds *v23; // rcx
  const struct ID2DContextOwner *v24; // rdx
  __int64 (__fastcall *v25)(CSwRenderTargetGetBounds *, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 result; // rax
  unsigned int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // edx
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // eax
  __int64 v46; // rdi
  unsigned int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rcx
  SIZE_T v50; // r8
  LPVOID v51; // rsi
  int v52; // r9d
  SIZE_T v53; // r8
  LPVOID v54; // rdi
  int v55; // r9d
  LPVOID v56; // rdi
  int v57; // r9d
  __int64 v58; // rcx
  SIZE_T v59; // r8
  LPVOID v60; // rsi
  int v61; // r9d
  SIZE_T v62; // r8
  LPVOID v63; // rsi
  int v64; // r9d
  SIZE_T v65; // r8
  LPVOID v66; // rsi
  int v67; // r9d
  SIZE_T v68; // r8
  LPVOID v69; // rsi
  int v70; // eax
  int v71; // edi
  struct IRenderTarget *v72; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 846) = 0LL;
  v2 = 0;
  *((_DWORD *)this + 112) = 0;
  v3 = *((_DWORD *)this + 114);
  v4 = -2147024882;
  if ( v3 != 10 )
  {
    v5 = v3 + 1;
    goto LABEL_3;
  }
  v39 = *((_DWORD *)this + 118);
  v40 = 64LL;
  if ( v39 > 0x40 )
    v40 = v39;
  if ( (unsigned __int64)(3 * v40) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v40) <= *((_DWORD *)this + 113) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v40 <= 0x10 )
    {
      v52 = -2147024809;
    }
    else
    {
      v50 = 16LL * (unsigned int)v40;
      if ( !v50 )
        v50 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v50);
      if ( v51 )
      {
        operator delete(*((void **)this + 58));
        *((_QWORD *)this + 58) = v51;
        *((_DWORD *)this + 113) = v40;
        goto LABEL_61;
      }
      v52 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x100u);
  }
LABEL_61:
  *((_DWORD *)this + 118) = 0;
  v5 = 0;
LABEL_3:
  *((_DWORD *)this + 114) = v5;
  v6 = 8LL;
  *((_DWORD *)this + 120) = 0;
  v7 = *((_DWORD *)this + 122);
  if ( v7 != 8 )
  {
    v8 = v7 + 1;
    goto LABEL_5;
  }
  v33 = *((_DWORD *)this + 126);
  v34 = 8LL;
  v35 = -1;
  if ( v33 > 8 )
    v34 = v33;
  v36 = 3 * v34;
  if ( (unsigned __int64)(3 * v34) <= 0xFFFFFFFF )
    v35 = 3 * v34;
  if ( v36 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v35 <= *((_DWORD *)this + 121) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v34 <= 0x44 )
    {
      v55 = -2147024809;
    }
    else
    {
      v53 = 68LL * (unsigned int)v34;
      if ( !v53 )
        v53 = 1LL;
      v54 = HeapAlloc(WPF::g_processHeap, 0, v53);
      if ( v54 )
      {
        operator delete(*((void **)this + 62));
        *((_QWORD *)this + 62) = v54;
        *((_DWORD *)this + 121) = v34;
        goto LABEL_49;
      }
      v55 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x100u);
  }
LABEL_49:
  *((_DWORD *)this + 126) = 0;
  v8 = 0;
LABEL_5:
  *((_DWORD *)this + 122) = v8;
  *((_DWORD *)this + 128) = 0;
  v9 = *((_DWORD *)this + 130);
  if ( v9 == 10 )
  {
    v41 = *((_DWORD *)this + 134);
    v42 = 64LL;
    if ( v41 > 0x40 )
      v42 = v41;
    if ( (unsigned __int64)(3 * v42) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
    }
    else if ( (unsigned int)(3 * v42) <= *((_DWORD *)this + 129) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v42 <= 1 )
      {
        v57 = -2147024809;
      }
      else
      {
        v56 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v42);
        if ( v56 )
        {
          operator delete(*((void **)this + 66));
          *((_QWORD *)this + 66) = v56;
          *((_DWORD *)this + 129) = v42;
          goto LABEL_66;
        }
        v57 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x100u);
    }
LABEL_66:
    *((_DWORD *)this + 134) = 0;
    v10 = 0;
    goto LABEL_7;
  }
  v10 = v9 + 1;
LABEL_7:
  *((_DWORD *)this + 130) = v10;
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal((__int64)this);
  for ( i = 0; i < *((_DWORD *)this + 174); ++i )
  {
    v58 = *(_QWORD *)(*((_QWORD *)this + 84) + 16LL * i);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  *((_DWORD *)this + 174) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 672, 16LL);
  v12 = *((_QWORD *)this + 97);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    *((_QWORD *)this + 97) = 0LL;
  }
  *((_DWORD *)this + 220) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 856, 8LL);
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v13 = *((_DWORD *)this + 246);
  if ( v13 != 10 )
  {
    v14 = v13 + 1;
    goto LABEL_14;
  }
  v43 = *((_DWORD *)this + 250);
  v44 = 64LL;
  if ( v43 > 0x40 )
    v44 = v43;
  if ( (unsigned __int64)(3 * v44) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v44) <= *((_DWORD *)this + 245) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v44 <= 0x1C )
    {
      v61 = -2147024809;
    }
    else
    {
      v59 = 28LL * (unsigned int)v44;
      if ( !v59 )
        v59 = 1LL;
      v60 = HeapAlloc(WPF::g_processHeap, 0, v59);
      if ( v60 )
      {
        operator delete(*((void **)this + 124));
        *((_QWORD *)this + 124) = v60;
        *((_DWORD *)this + 245) = v44;
        goto LABEL_71;
      }
      v61 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x100u);
  }
LABEL_71:
  *((_DWORD *)this + 250) = 0;
  v14 = 0;
LABEL_14:
  *((_DWORD *)this + 246) = v14;
  *((_DWORD *)this + 258) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1008, 80LL);
  *((_DWORD *)this + 768) = 0;
  v16 = *((_DWORD *)this + 770);
  if ( v16 != 8 )
  {
    v17 = v16 + 1;
    goto LABEL_16;
  }
  v37 = *((_DWORD *)this + 774);
  v15 = 0xFFFFFFFFLL;
  if ( v37 > 8 )
    v6 = v37;
  v38 = 3 * v6;
  if ( (unsigned __int64)(3 * v6) <= 0xFFFFFFFF )
    v15 = (unsigned int)v38;
  if ( v38 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( (unsigned int)v15 <= *((_DWORD *)this + 769) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x10 )
    {
      v64 = -2147024809;
    }
    else
    {
      v62 = 16LL * (unsigned int)v6;
      if ( !v62 )
        v62 = 1LL;
      v63 = HeapAlloc(WPF::g_processHeap, 0, v62);
      if ( v63 )
      {
        operator delete(*((void **)this + 386));
        *((_QWORD *)this + 386) = v63;
        *((_DWORD *)this + 769) = v6;
        goto LABEL_56;
      }
      v64 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x100u);
  }
LABEL_56:
  *((_DWORD *)this + 774) = 0;
  v17 = 0;
LABEL_16:
  *((_DWORD *)this + 770) = v17;
  for ( j = 0; j < *((_DWORD *)this + 466); ++j )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v15,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 230) + 120LL * j));
  *((_DWORD *)this + 466) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1840, 120LL);
  *((_DWORD *)this + 776) = 0;
  v19 = *((_DWORD *)this + 778);
  if ( v19 != 10 )
  {
    v20 = v19 + 1;
    goto LABEL_19;
  }
  v45 = *((_DWORD *)this + 782);
  v46 = 64LL;
  if ( v45 > 0x40 )
    v46 = v45;
  if ( (unsigned __int64)(3 * v46) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v46) <= *((_DWORD *)this + 777) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 <= 4 )
    {
      v67 = -2147024809;
    }
    else
    {
      v65 = 4LL * (unsigned int)v46;
      if ( !v65 )
        v65 = 1LL;
      v66 = HeapAlloc(WPF::g_processHeap, 0, v65);
      if ( v66 )
      {
        operator delete(*((void **)this + 390));
        *((_QWORD *)this + 390) = v66;
        *((_DWORD *)this + 777) = v46;
        goto LABEL_76;
      }
      v67 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x100u);
  }
LABEL_76:
  *((_DWORD *)this + 782) = 0;
  v20 = 0;
LABEL_19:
  *((_DWORD *)this + 778) = v20;
  *((_DWORD *)this + 826) = 0;
  v21 = *((_DWORD *)this + 828);
  if ( v21 != 10 )
  {
    v22 = v21 + 1;
    goto LABEL_21;
  }
  v47 = *((_DWORD *)this + 832);
  v48 = 64LL;
  if ( v47 > 0x40 )
    v48 = v47;
  if ( (unsigned __int64)(3 * v48) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v48) <= *((_DWORD *)this + 827) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v48 <= 0x10 )
    {
      v4 = -2147024809;
    }
    else
    {
      v68 = 16LL * (unsigned int)v48;
      if ( !v68 )
        v68 = 1LL;
      v69 = HeapAlloc(WPF::g_processHeap, 0, v68);
      if ( v69 )
      {
        operator delete(*((void **)this + 415));
        *((_QWORD *)this + 415) = v69;
        *((_DWORD *)this + 827) = v48;
        goto LABEL_81;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x100u);
  }
LABEL_81:
  *((_DWORD *)this + 832) = 0;
  v22 = 0;
LABEL_21:
  *((_DWORD *)this + 828) = v22;
  if ( *((_QWORD *)this + 45) )
  {
    v23 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 48);
    v72 = 0LL;
    v24 = (CDrawingContext *)((char *)this + 8);
    v25 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v23 + 32LL);
    if ( v25 == CSwRenderTargetGetBounds::PopTarget )
      v26 = CSwRenderTargetGetBounds::PopTarget(v23, v24, &v72);
    else
      v26 = v25(v23, v24, &v72);
    v2 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x2578u);
    }
    else if ( g_LockAndReadD2DTarget )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 45) + 224LL))(
        *((_QWORD *)this + 45),
        0LL,
        0LL);
    }
    v27 = *((_QWORD *)this + 45);
    if ( v27 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      *((_QWORD *)this + 45) = 0LL;
    }
    v28 = *((_QWORD *)this + 46);
    if ( v28 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      *((_QWORD *)this + 46) = 0LL;
    }
    if ( v72 )
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v72 + 16LL))(v72);
    *((_BYTE *)this + 6825) = 1;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1DCu);
  }
  v29 = *((_QWORD *)this + 48);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    *((_QWORD *)this + 48) = 0LL;
  }
  v30 = *((_QWORD *)this + 505);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    *((_QWORD *)this + 505) = 0LL;
  }
  v31 = *((_QWORD *)this + 443);
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    *((_QWORD *)this + 443) = 0LL;
  }
  *((_BYTE *)this + 6828) = 0;
  if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
  {
    v49 = *((_QWORD *)this + 850);
    if ( v49 )
    {
      v70 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v49 + 24) + 88LL))(*(_QWORD *)(v49 + 24));
      v71 = v70;
      if ( v70 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x1F3u);
      if ( !v2 || v2 >= 0 && v71 < 0 )
        v2 = v71;
      *((_QWORD *)this + 850) = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  }
  result = (unsigned int)v2;
  *((_QWORD *)this + 417) = 0LL;
  return result;
}
