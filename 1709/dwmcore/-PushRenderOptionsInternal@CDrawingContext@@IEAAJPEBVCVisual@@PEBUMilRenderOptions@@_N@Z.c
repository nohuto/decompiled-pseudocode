/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180040F90
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180018970 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18012F544 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801392C0 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014BCF4 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014CD20 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D7D0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  int v9; // esi
  void *v10; // r14
  unsigned int v11; // eax
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // esi
  int v18; // ecx
  unsigned int v19; // r12d
  SIZE_T v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // r12d
  SIZE_T v24; // r8
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  __int128 v27; // [rsp+30h] [rbp-48h]
  __int128 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+48h] [rbp-30h]

  v7 = -2147024362;
  if ( !a4 )
  {
LABEL_7:
    v12 = 0LL;
    LOBYTE(v30) = *((_BYTE *)this + 272);
    *(_QWORD *)&v28 = *(_QWORD *)((char *)this + 252);
    DWORD2(v28) = *((_DWORD *)this + 70);
    HIDWORD(v28) = *((_DWORD *)this + 65);
    v29 = *((_QWORD *)this + 33);
    v13 = *((unsigned int *)this + 245);
    if ( *((_DWORD *)this + 244) != (_DWORD)v13 )
    {
LABEL_8:
      v14 = *((_QWORD *)this + 124) + 28LL * *((unsigned int *)this + 244);
      *(_OWORD *)v14 = v28;
      *(_QWORD *)(v14 + 16) = v29;
      *(_DWORD *)(v14 + 24) = v30;
      v15 = ++*((_DWORD *)this + 244);
      if ( *((_DWORD *)this + 250) > v15 )
        v15 = *((_DWORD *)this + 250);
      v16 = 0;
      *((_DWORD *)this + 250) = v15;
      goto LABEL_11;
    }
    v19 = 2 * v13;
    if ( (unsigned __int64)(2 * v13) > 0xFFFFFFFF )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_69:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1871u);
      if ( a4 )
      {
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
          (char *)this + 448,
          0LL);
        return v7;
      }
LABEL_12:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *((_BYTE *)this + 272) = *((_DWORD *)a3 + 4) != 1;
      if ( (*(_BYTE *)a3 & 2) == 0 )
        goto LABEL_14;
      v18 = *((_DWORD *)a3 + 1);
      if ( (v18 & 0xFF000000) == 0xFF000000 )
      {
        v18 &= 0xFFFFFFu;
      }
      else if ( *((_BYTE *)this + 6605) )
      {
LABEL_14:
        if ( (*(_BYTE *)a3 & 8) != 0 )
          *((_DWORD *)this + 64) = *((_DWORD *)a3 + 2);
        if ( (*(_BYTE *)a3 & 0x10) != 0 )
          *((_DWORD *)this + 65) = *((_DWORD *)a3 + 5);
        if ( (*(_BYTE *)a3 & 0x20) != 0 )
          *((_DWORD *)this + 66) = *((_DWORD *)a3 + 6);
        if ( (*(_BYTE *)a3 & 0x40) != 0 )
          *((_DWORD *)this + 67) = *((_DWORD *)a3 + 7);
        if ( (*(_BYTE *)a3 & 4) != 0 )
          *((_DWORD *)this + 70) = *((_DWORD *)a3 + 3);
        return v7;
      }
      *((_DWORD *)this + 63) = v18;
      goto LABEL_14;
    }
    if ( v19 <= 0x40 )
      v19 = 64;
    v16 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v19 <= 0x1C )
    {
      v16 = -2147024809;
    }
    else
    {
      v20 = 28LL * v19;
      if ( !v20 )
        v20 = 1LL;
      v12 = HeapAlloc(WPF::g_processHeap, 0, v20);
      if ( !v12 )
        v16 = -2147024882;
    }
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x54u);
    }
    else
    {
      v21 = 28LL * *((unsigned int *)this + 244);
      if ( v21 <= 0xFFFFFFFF )
      {
        memcpy_0(v12, *((const void **)this + 124), (unsigned int)v21);
        WPF::ProcessHeapImpl::Free(*((void **)this + 124));
        *((_QWORD *)this + 124) = v12;
        *((_DWORD *)this + 245) = v19;
        goto LABEL_8;
      }
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v12 )
      HeapFree(WPF::g_processHeap, 0, v12);
LABEL_11:
    v7 = v16;
    if ( v16 >= 0 )
      goto LABEL_12;
    goto LABEL_69;
  }
  v8 = *((unsigned int *)this + 113);
  v9 = 0;
  v10 = 0LL;
  LODWORD(v27) = 8;
  *((_QWORD *)&v27 + 1) = a2;
  if ( *((_DWORD *)this + 112) != (_DWORD)v8 )
    goto LABEL_3;
  v22 = 2 * v8;
  if ( v22 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_6;
  }
  v23 = v22;
  if ( (unsigned int)v22 <= 0x40 )
    v23 = 64;
  v9 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v23 <= 0x10 )
  {
    v9 = -2147024809;
  }
  else
  {
    v24 = 16LL * v23;
    if ( !v24 )
      v24 = 1LL;
    v10 = HeapAlloc(WPF::g_processHeap, 0, v24);
    if ( !v10 )
      v9 = -2147024882;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x54u);
  }
  else
  {
    v25 = -1;
    v26 = 16LL * *((unsigned int *)this + 112);
    if ( v26 <= 0xFFFFFFFF )
      v25 = 16 * *((_DWORD *)this + 112);
    v9 = 0;
    if ( v26 <= 0xFFFFFFFF )
    {
      memcpy_0(v10, *((const void **)this + 58), v25);
      WPF::ProcessHeapImpl::Free(*((void **)this + 58));
      *((_QWORD *)this + 58) = v10;
      *((_DWORD *)this + 113) = v23;
LABEL_3:
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * (unsigned int)(*((_DWORD *)this + 112))++) = v27;
      v11 = *((_DWORD *)this + 118);
      if ( v11 <= *((_DWORD *)this + 112) )
        v11 = *((_DWORD *)this + 112);
      *((_DWORD *)this + 118) = v11;
      goto LABEL_6;
    }
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v10 )
    HeapFree(WPF::g_processHeap, 0, v10);
LABEL_6:
  if ( v9 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1861u);
  return (unsigned int)v9;
}
