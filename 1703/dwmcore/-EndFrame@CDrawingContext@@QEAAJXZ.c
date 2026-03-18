/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180160020 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18017FE9C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18003DBE0 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800541D0 (-Release@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180077780 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801348DC (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
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
  __int64 v12; // rcx
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
  CBitmapOfDeviceBitmaps *v28; // rcx
  __int64 v29; // rcx
  __int64 result; // rax
  unsigned int v31; // eax
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdi
  unsigned int v42; // eax
  void (*v43)(void); // rax
  __int64 v44; // rcx
  SIZE_T v45; // r8
  LPVOID v46; // rsi
  int v47; // r9d
  SIZE_T v48; // r8
  LPVOID v49; // rsi
  int v50; // r9d
  LPVOID v51; // rsi
  int v52; // r9d
  __int64 v53; // rcx
  SIZE_T v54; // r8
  LPVOID v55; // rsi
  int v56; // r9d
  SIZE_T v57; // r8
  LPVOID v58; // rsi
  int v59; // r9d
  SIZE_T v60; // r8
  LPVOID v61; // rsi
  int v62; // r9d
  SIZE_T v63; // r8
  LPVOID v64; // rdi
  int v65; // eax
  int v66; // esi
  struct IRenderTarget *v67; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 838) = 0LL;
  *((_DWORD *)this + 110) = 0;
  v4 = -2147024882;
  v5 = *((_DWORD *)this + 112);
  v6 = 64LL;
  v7 = 1LL;
  if ( v5 != 10 )
  {
    *((_DWORD *)this + 112) = v5 + 1;
    goto LABEL_3;
  }
  v34 = *((_DWORD *)this + 116);
  v35 = 64LL;
  if ( v34 > 0x40 )
    v35 = v34;
  a3 = (unsigned int)v35;
  if ( (unsigned __int64)(3 * v35) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    goto LABEL_97;
  }
  if ( (unsigned int)(3 * v35) <= *((_DWORD *)this + 111) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v35 <= 0x10 )
    {
      v47 = -2147024809;
      goto LABEL_96;
    }
    v45 = 16LL * (unsigned int)v35;
    if ( !v45 )
      v45 = 1LL;
    v46 = HeapAlloc(WPF::g_processHeap, 0, v45);
    if ( !v46 )
    {
      v47 = -2147024882;
LABEL_96:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0xF3u);
      goto LABEL_97;
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 57));
    *((_QWORD *)this + 57) = v46;
    *((_DWORD *)this + 111) = v35;
LABEL_97:
    v7 = 1LL;
  }
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 112) = 0;
LABEL_3:
  *((_DWORD *)this + 118) = 0;
  v8 = 8LL;
  v9 = *((_DWORD *)this + 120);
  if ( v9 != 8 )
  {
    *((_DWORD *)this + 120) = v9 + 1;
    goto LABEL_5;
  }
  v31 = *((_DWORD *)this + 124);
  v32 = 8LL;
  if ( v31 > 8 )
    v32 = v31;
  if ( (unsigned __int64)(3 * v32) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v32) <= *((_DWORD *)this + 119) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 <= 0x44 )
    {
      v50 = -2147024809;
    }
    else
    {
      v48 = 68LL * (unsigned int)v32;
      if ( !v48 )
        v48 = 1LL;
      v49 = HeapAlloc(WPF::g_processHeap, 0, v48);
      if ( v49 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 61));
        *((_QWORD *)this + 61) = v49;
        *((_DWORD *)this + 119) = v32;
        goto LABEL_46;
      }
      v50 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0xF3u);
  }
LABEL_46:
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 120) = 0;
LABEL_5:
  *((_DWORD *)this + 126) = 0;
  v10 = *((_DWORD *)this + 128);
  if ( v10 != 10 )
  {
    *((_DWORD *)this + 128) = v10 + 1;
    goto LABEL_7;
  }
  v36 = *((_DWORD *)this + 132);
  v37 = 64LL;
  if ( v36 > 0x40 )
    v37 = v36;
  a3 = (unsigned int)v37;
  if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v37) <= *((_DWORD *)this + 127) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37 <= 1 )
    {
      v52 = -2147024809;
    }
    else
    {
      v51 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v37);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 65));
        *((_QWORD *)this + 65) = v51;
        *((_DWORD *)this + 127) = v37;
        goto LABEL_61;
      }
      v52 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xF3u);
  }
LABEL_61:
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 128) = 0;
LABEL_7:
  while ( *((_DWORD *)this + 140) )
    CDrawingContext::PopLayerInternal((__int64)this);
  for ( i = 0; i < *((_DWORD *)this + 172); ++i )
  {
    v53 = *(_QWORD *)(*((_QWORD *)this + 83) + 8LL * i);
    if ( v53 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v53 + 16LL))(v53, a2, a3, v7);
  }
  *((_DWORD *)this + 172) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 664, 8u);
  v12 = *((_QWORD *)this + 92);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    *((_QWORD *)this + 92) = 0LL;
  }
  *((_DWORD *)this + 210) = 0;
  *((_DWORD *)this + 220) = 0;
  v13 = *((_DWORD *)this + 222);
  if ( v13 != 10 )
  {
    *((_DWORD *)this + 222) = v13 + 1;
    goto LABEL_13;
  }
  v38 = *((_DWORD *)this + 226);
  v39 = 64LL;
  if ( v38 > 0x40 )
    v39 = v38;
  if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v39) <= *((_DWORD *)this + 221) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 <= 0x1C )
    {
      v56 = -2147024809;
    }
    else
    {
      v54 = 28LL * (unsigned int)v39;
      if ( !v54 )
        v54 = 1LL;
      v55 = HeapAlloc(WPF::g_processHeap, 0, v54);
      if ( v55 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 112));
        *((_QWORD *)this + 112) = v55;
        *((_DWORD *)this + 221) = v39;
        goto LABEL_66;
      }
      v56 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xF3u);
  }
LABEL_66:
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 222) = 0;
LABEL_13:
  *((_DWORD *)this + 234) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 912, 0x50u);
  *((_DWORD *)this + 744) = 0;
  v15 = *((_DWORD *)this + 746);
  if ( v15 != 8 )
  {
    *((_DWORD *)this + 746) = v15 + 1;
    goto LABEL_15;
  }
  v33 = *((_DWORD *)this + 750);
  if ( v33 > 8 )
    v8 = v33;
  if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v8) <= *((_DWORD *)this + 745) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x10 )
    {
      v59 = -2147024809;
    }
    else
    {
      v57 = 16LL * (unsigned int)v8;
      if ( !v57 )
        v57 = 1LL;
      v58 = HeapAlloc(WPF::g_processHeap, 0, v57);
      if ( v58 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 374));
        *((_QWORD *)this + 374) = v58;
        *((_DWORD *)this + 745) = v8;
        goto LABEL_51;
      }
      v59 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xF3u);
  }
LABEL_51:
  *((_DWORD *)this + 750) = 0;
  *((_DWORD *)this + 746) = 0;
LABEL_15:
  for ( j = 0; j < *((_DWORD *)this + 442); ++j )
    CScopedClipStack::FreeCpuClipStackState(
      v14,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 218) + 120LL * j));
  *((_DWORD *)this + 442) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1744, 0x78u);
  *((_DWORD *)this + 752) = 0;
  v17 = *((_DWORD *)this + 754);
  if ( v17 != 10 )
  {
    *((_DWORD *)this + 754) = v17 + 1;
    goto LABEL_18;
  }
  v40 = *((_DWORD *)this + 758);
  v41 = 64LL;
  if ( v40 > 0x40 )
    v41 = v40;
  if ( (unsigned __int64)(3 * v41) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v41) <= *((_DWORD *)this + 753) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v41 <= 4 )
    {
      v62 = -2147024809;
    }
    else
    {
      v60 = 4 * v41;
      if ( !(4 * v41) )
        v60 = 1LL;
      v61 = HeapAlloc(WPF::g_processHeap, 0, v60);
      if ( v61 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 378));
        *((_QWORD *)this + 378) = v61;
        *((_DWORD *)this + 753) = v41;
        goto LABEL_71;
      }
      v62 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0xF3u);
  }
LABEL_71:
  *((_DWORD *)this + 758) = 0;
  *((_DWORD *)this + 754) = 0;
LABEL_18:
  *((_DWORD *)this + 802) = 0;
  v18 = *((_DWORD *)this + 804);
  if ( v18 != 10 )
  {
    *((_DWORD *)this + 804) = v18 + 1;
    goto LABEL_20;
  }
  v42 = *((_DWORD *)this + 808);
  if ( v42 > 0x40 )
    v6 = v42;
  if ( (unsigned __int64)(3 * v6) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v6) <= *((_DWORD *)this + 803) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x10 )
    {
      v4 = -2147024809;
    }
    else
    {
      v63 = 16LL * (unsigned int)v6;
      if ( !v63 )
        v63 = 1LL;
      v64 = HeapAlloc(WPF::g_processHeap, 0, v63);
      if ( v64 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 403));
        *((_QWORD *)this + 403) = v64;
        *((_DWORD *)this + 803) = v6;
        goto LABEL_76;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF3u);
  }
LABEL_76:
  *((_DWORD *)this + 808) = 0;
  *((_DWORD *)this + 804) = 0;
LABEL_20:
  v19 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 49);
  v67 = 0LL;
  v20 = (CDrawingContext *)((char *)this + 8);
  v21 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v19 + 32LL);
  if ( v21 == CSwRenderTargetGetBounds::PopTarget )
  {
    v22 = CSwRenderTargetGetBounds::PopTarget(v19, v20, &v67);
  }
  else if ( v21 == CD2DContext::PopTarget )
  {
    v22 = CD2DContext::PopTarget(v19, v20, &v67);
  }
  else
  {
    v22 = v21(v19, v20, &v67);
  }
  v23 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x2628u);
  }
  else if ( g_LockAndReadD2DTarget )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 46) + 176LL))(
      *((_QWORD *)this + 46),
      0LL,
      0LL);
  }
  v24 = *((_QWORD *)this + 46);
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    *((_QWORD *)this + 46) = 0LL;
  }
  v25 = *((_QWORD *)this + 47);
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    *((_QWORD *)this + 47) = 0LL;
  }
  if ( v67 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v67 + 16LL))(v67);
  *((_BYTE *)this + 6769) = 1;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x1E9u);
  v26 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 49);
  if ( v26 )
  {
    v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
    if ( (char *)v27 == (char *)CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(v26);
    else
      v27();
    *((_QWORD *)this + 49) = 0LL;
  }
  v28 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 497);
  if ( v28 )
  {
    v43 = *(void (**)(void))(*(_QWORD *)v28 + 16LL);
    if ( (char *)v43 == (char *)CBitmapOfDeviceBitmaps::Release )
      CBitmapOfDeviceBitmaps::Release(v28);
    else
      v43();
    *((_QWORD *)this + 497) = 0LL;
  }
  v29 = *((_QWORD *)this + 431);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    *((_QWORD *)this + 431) = 0LL;
  }
  *((_BYTE *)this + 6772) = 0;
  if ( !*((_BYTE *)this + 3040) && !*((_QWORD *)this + 838) )
  {
    v44 = *((_QWORD *)this + 843);
    if ( v44 )
    {
      v65 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v44 + 24) + 88LL))(*(_QWORD *)(v44 + 24));
      v66 = v65;
      if ( v65 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x205u);
      if ( !v23 || v23 >= 0 && v66 < 0 )
        v23 = v66;
      *((_QWORD *)this + 843) = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      TemplateEventDescriptor(v44, &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
  }
  result = (unsigned int)v23;
  *((_QWORD *)this + 405) = 0LL;
  return result;
}
