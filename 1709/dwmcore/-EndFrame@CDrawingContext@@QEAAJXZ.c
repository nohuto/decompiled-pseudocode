/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C9C (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180187A0C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x18001FDD0 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x18002C740 (-Release@CSwRenderTargetGetBounds@@UEAAKXZ.c)
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18002C760 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003B61C (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180045150 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18011D88C (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this, __int64 a2, __int64 a3)
{
  int v4; // r15d
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // rbp
  int v9; // eax
  int v10; // eax
  unsigned int i; // esi
  CMILRefCountBase *v12; // rcx
  int v13; // eax
  CScopedClipStack *v14; // rcx
  int v15; // eax
  unsigned int j; // esi
  int v17; // eax
  int v18; // eax
  CSwRenderTargetGetBounds *v19; // rcx
  const struct ID2DContextOwner *v20; // rdx
  __int64 (__fastcall *v21)(CSwRenderTargetGetBounds *, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v22; // eax
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx
  CD3DDeviceLevel1 *v26; // rcx
  void (*v27)(void); // rax
  CSwRenderTargetGetBounds *v28; // rcx
  void (*v29)(void); // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 result; // rax
  unsigned int v33; // eax
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdi
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rdi
  void (*v45)(void); // rax
  SIZE_T v46; // r8
  LPVOID v47; // rsi
  int v48; // r9d
  SIZE_T v49; // r8
  LPVOID v50; // rsi
  int v51; // r9d
  LPVOID v52; // rsi
  int v53; // r9d
  __int64 v54; // rcx
  SIZE_T v55; // r8
  LPVOID v56; // rsi
  int v57; // r9d
  SIZE_T v58; // r8
  LPVOID v59; // rsi
  int v60; // r9d
  SIZE_T v61; // r8
  LPVOID v62; // rsi
  int v63; // r9d
  SIZE_T v64; // r8
  LPVOID v65; // rdi
  int v66; // eax
  int v67; // esi
  struct IRenderTarget *v68; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 846) = 0LL;
  *((_DWORD *)this + 112) = 0;
  v4 = -2147024882;
  v5 = *((_DWORD *)this + 114);
  v6 = 64LL;
  v7 = 1LL;
  if ( v5 != 10 )
  {
    *((_DWORD *)this + 114) = v5 + 1;
    goto LABEL_3;
  }
  v43 = *((_DWORD *)this + 118);
  v44 = 64LL;
  if ( v43 > 0x40 )
    v44 = v43;
  a3 = (unsigned int)v44;
  if ( (unsigned __int64)(3 * v44) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
    goto LABEL_100;
  }
  if ( (unsigned int)(3 * v44) <= *((_DWORD *)this + 113) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v44 <= 0x10 )
    {
      v48 = -2147024809;
      goto LABEL_99;
    }
    v46 = 16LL * (unsigned int)v44;
    if ( !v46 )
      v46 = 1LL;
    v47 = HeapAlloc(WPF::g_processHeap, 0, v46);
    if ( !v47 )
    {
      v48 = -2147024882;
LABEL_99:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x100u);
      goto LABEL_100;
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 58));
    *((_QWORD *)this + 58) = v47;
    *((_DWORD *)this + 113) = v44;
LABEL_100:
    v7 = 1LL;
  }
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 114) = 0;
LABEL_3:
  *((_DWORD *)this + 120) = 0;
  v8 = 8LL;
  v9 = *((_DWORD *)this + 122);
  if ( v9 != 8 )
  {
    *((_DWORD *)this + 122) = v9 + 1;
    goto LABEL_5;
  }
  v33 = *((_DWORD *)this + 126);
  v34 = 8LL;
  if ( v33 > 8 )
    v34 = v33;
  if ( (unsigned __int64)(3 * v34) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v34) <= *((_DWORD *)this + 121) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v34 <= 0x44 )
    {
      v51 = -2147024809;
    }
    else
    {
      v49 = 68LL * (unsigned int)v34;
      if ( !v49 )
        v49 = 1LL;
      v50 = HeapAlloc(WPF::g_processHeap, 0, v49);
      if ( v50 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 62));
        *((_QWORD *)this + 62) = v50;
        *((_DWORD *)this + 121) = v34;
        goto LABEL_55;
      }
      v51 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x100u);
  }
LABEL_55:
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 122) = 0;
LABEL_5:
  *((_DWORD *)this + 128) = 0;
  v10 = *((_DWORD *)this + 130);
  if ( v10 != 10 )
  {
    *((_DWORD *)this + 130) = v10 + 1;
    goto LABEL_7;
  }
  v36 = *((_DWORD *)this + 134);
  v37 = 64LL;
  if ( v36 > 0x40 )
    v37 = v36;
  a3 = (unsigned int)v37;
  if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v37) <= *((_DWORD *)this + 129) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37 <= 1 )
    {
      v53 = -2147024809;
    }
    else
    {
      v52 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v37);
      if ( v52 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 66));
        *((_QWORD *)this + 66) = v52;
        *((_DWORD *)this + 129) = v37;
        goto LABEL_65;
      }
      v53 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x100u);
  }
LABEL_65:
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 130) = 0;
LABEL_7:
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal((__int64)this);
  for ( i = 0; i < *((_DWORD *)this + 174); ++i )
  {
    v54 = *(_QWORD *)(*((_QWORD *)this + 84) + 16LL * i);
    if ( v54 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v54 + 16LL))(v54, a2, a3, v7);
  }
  *((_DWORD *)this + 174) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 672, 16LL);
  v12 = (CMILRefCountBase *)*((_QWORD *)this + 97);
  if ( v12 )
  {
    v45 = *(void (**)(void))(*(_QWORD *)v12 + 8LL);
    if ( (char *)v45 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v12);
    else
      v45();
    *((_QWORD *)this + 97) = 0LL;
  }
  *((_DWORD *)this + 220) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 856, 8LL);
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v13 = *((_DWORD *)this + 246);
  if ( v13 != 10 )
  {
    *((_DWORD *)this + 246) = v13 + 1;
    goto LABEL_12;
  }
  v38 = *((_DWORD *)this + 250);
  v39 = 64LL;
  if ( v38 > 0x40 )
    v39 = v38;
  if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v39) <= *((_DWORD *)this + 245) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 <= 0x1C )
    {
      v57 = -2147024809;
    }
    else
    {
      v55 = 28LL * (unsigned int)v39;
      if ( !v55 )
        v55 = 1LL;
      v56 = HeapAlloc(WPF::g_processHeap, 0, v55);
      if ( v56 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 124));
        *((_QWORD *)this + 124) = v56;
        *((_DWORD *)this + 245) = v39;
        goto LABEL_70;
      }
      v57 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x100u);
  }
LABEL_70:
  *((_DWORD *)this + 250) = 0;
  *((_DWORD *)this + 246) = 0;
LABEL_12:
  *((_DWORD *)this + 258) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1008, 80LL);
  *((_DWORD *)this + 768) = 0;
  v15 = *((_DWORD *)this + 770);
  if ( v15 != 8 )
  {
    *((_DWORD *)this + 770) = v15 + 1;
    goto LABEL_14;
  }
  v35 = *((_DWORD *)this + 774);
  if ( v35 > 8 )
    v8 = v35;
  if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v8) <= *((_DWORD *)this + 769) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x10 )
    {
      v60 = -2147024809;
    }
    else
    {
      v58 = 16LL * (unsigned int)v8;
      if ( !v58 )
        v58 = 1LL;
      v59 = HeapAlloc(WPF::g_processHeap, 0, v58);
      if ( v59 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 386));
        *((_QWORD *)this + 386) = v59;
        *((_DWORD *)this + 769) = v8;
        goto LABEL_60;
      }
      v60 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x100u);
  }
LABEL_60:
  *((_DWORD *)this + 774) = 0;
  *((_DWORD *)this + 770) = 0;
LABEL_14:
  for ( j = 0; j < *((_DWORD *)this + 466); ++j )
    CScopedClipStack::FreeCpuClipStackState(
      v14,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 230) + 120LL * j));
  *((_DWORD *)this + 466) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1840, 120LL);
  *((_DWORD *)this + 776) = 0;
  v17 = *((_DWORD *)this + 778);
  if ( v17 != 10 )
  {
    *((_DWORD *)this + 778) = v17 + 1;
    goto LABEL_17;
  }
  v40 = *((_DWORD *)this + 782);
  v41 = 64LL;
  if ( v40 > 0x40 )
    v41 = v40;
  if ( (unsigned __int64)(3 * v41) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v41) <= *((_DWORD *)this + 777) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v41 <= 4 )
    {
      v63 = -2147024809;
    }
    else
    {
      v61 = 4 * v41;
      if ( !(4 * v41) )
        v61 = 1LL;
      v62 = HeapAlloc(WPF::g_processHeap, 0, v61);
      if ( v62 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 390));
        *((_QWORD *)this + 390) = v62;
        *((_DWORD *)this + 777) = v41;
        goto LABEL_75;
      }
      v63 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x100u);
  }
LABEL_75:
  *((_DWORD *)this + 782) = 0;
  *((_DWORD *)this + 778) = 0;
LABEL_17:
  *((_DWORD *)this + 826) = 0;
  v18 = *((_DWORD *)this + 828);
  if ( v18 != 10 )
  {
    *((_DWORD *)this + 828) = v18 + 1;
    goto LABEL_19;
  }
  v42 = *((_DWORD *)this + 832);
  if ( v42 > 0x40 )
    v6 = v42;
  if ( (unsigned __int64)(3 * v6) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
  }
  else if ( (unsigned int)(3 * v6) <= *((_DWORD *)this + 827) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x10 )
    {
      v4 = -2147024809;
    }
    else
    {
      v64 = 16LL * (unsigned int)v6;
      if ( !v64 )
        v64 = 1LL;
      v65 = HeapAlloc(WPF::g_processHeap, 0, v64);
      if ( v65 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 415));
        *((_QWORD *)this + 415) = v65;
        *((_DWORD *)this + 827) = v6;
        goto LABEL_80;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x100u);
  }
LABEL_80:
  *((_DWORD *)this + 832) = 0;
  *((_DWORD *)this + 828) = 0;
LABEL_19:
  v19 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 48);
  v68 = 0LL;
  v20 = (CDrawingContext *)((char *)this + 8);
  v21 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v19 + 32LL);
  if ( v21 == CSwRenderTargetGetBounds::PopTarget )
  {
    v22 = CSwRenderTargetGetBounds::PopTarget(v19, v20, &v68);
  }
  else if ( v21 == CD2DContext::PopTarget )
  {
    v22 = CD2DContext::PopTarget(v19, v20, &v68);
  }
  else
  {
    v22 = v21(v19, v20, &v68);
  }
  v23 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x2430u);
  }
  else if ( g_LockAndReadD2DTarget )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 45) + 184LL))(
      *((_QWORD *)this + 45),
      0LL,
      0LL);
  }
  v24 = *((_QWORD *)this + 45);
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    *((_QWORD *)this + 45) = 0LL;
  }
  v25 = *((_QWORD *)this + 46);
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    *((_QWORD *)this + 46) = 0LL;
  }
  if ( v68 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v68 + 16LL))(v68);
  *((_BYTE *)this + 6825) = 1;
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1EAu);
  v26 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 48);
  if ( v26 )
  {
    v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
    if ( (char *)v27 == (char *)CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(v26);
    else
      v27();
    *((_QWORD *)this + 48) = 0LL;
  }
  v28 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 505);
  if ( v28 )
  {
    v29 = *(void (**)(void))(*(_QWORD *)v28 + 16LL);
    if ( (char *)v29 == (char *)CSwRenderTargetGetBounds::Release )
      CSwRenderTargetGetBounds::Release(v28);
    else
      v29();
    *((_QWORD *)this + 505) = 0LL;
  }
  v30 = *((_QWORD *)this + 443);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    *((_QWORD *)this + 443) = 0LL;
  }
  *((_BYTE *)this + 6828) = 0;
  if ( !*((_BYTE *)this + 3136) && !*((_QWORD *)this + 846) )
  {
    v31 = *((_QWORD *)this + 850);
    if ( v31 )
    {
      v66 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 24) + 88LL))(*(_QWORD *)(v31 + 24));
      v67 = v66;
      if ( v66 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x200u);
      if ( !v23 || v23 >= 0 && v67 < 0 )
        v23 = v67;
      *((_QWORD *)this + 850) = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  }
  result = (unsigned int)v23;
  *((_QWORD *)this + 417) = 0LL;
  return result;
}
