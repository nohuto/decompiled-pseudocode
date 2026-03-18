/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180150DB8 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015BA40 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180174B64 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176020 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  unsigned int v9; // eax
  int v10; // esi
  __int64 v11; // rcx
  void *v12; // r15
  unsigned int v13; // edx
  void *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // esi
  int v20; // ecx
  int v22; // edx
  unsigned int v23; // r13d
  SIZE_T v24; // r8
  unsigned __int64 v25; // rcx
  unsigned int v26; // r13d
  SIZE_T v27; // r8
  unsigned int v28; // ecx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int128 v31; // [rsp+30h] [rbp-48h]
  __int128 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+40h] [rbp-38h]
  int v34; // [rsp+48h] [rbp-30h]

  v7 = -2147024362;
  v8 = 86;
  if ( !a4 )
  {
LABEL_7:
    v14 = 0LL;
    v15 = *((unsigned int *)this + 245);
    LOBYTE(v34) = *((_BYTE *)this + 272);
    *(_QWORD *)&v32 = *(_QWORD *)((char *)this + 252);
    DWORD2(v32) = *((_DWORD *)this + 70);
    HIDWORD(v32) = *((_DWORD *)this + 65);
    v33 = *((_QWORD *)this + 33);
    v16 = *((unsigned int *)this + 244);
    if ( (_DWORD)v16 != (_DWORD)v15 )
    {
LABEL_8:
      v17 = *((_QWORD *)this + 124) + 28 * v16;
      *(_OWORD *)v17 = v32;
      *(_QWORD *)(v17 + 16) = v33;
      *(_DWORD *)(v17 + 24) = v34;
      ++*((_DWORD *)this + 244);
      v18 = *((_DWORD *)this + 250);
      if ( v18 <= *((_DWORD *)this + 244) )
        v18 = *((_DWORD *)this + 244);
      v19 = 0;
      *((_DWORD *)this + 250) = v18;
      goto LABEL_11;
    }
    v23 = 2 * v15;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_69:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x199Bu);
      if ( a4 )
      {
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
          (int *)this + 112,
          0LL);
        return v7;
      }
LABEL_12:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *((_BYTE *)this + 272) = *((_DWORD *)a3 + 4) != 1;
      v20 = *(_DWORD *)a3;
      if ( (*(_DWORD *)a3 & 2) == 0 )
        goto LABEL_14;
      v22 = *((_DWORD *)a3 + 1);
      if ( (v22 & 0xFF000000) == 0xFF000000 )
      {
        v22 &= 0xFFFFFFu;
      }
      else if ( *((_BYTE *)this + 6605) )
      {
LABEL_14:
        if ( (v20 & 8) != 0 )
        {
          *((_DWORD *)this + 64) = *((_DWORD *)a3 + 2);
          v20 = *(_DWORD *)a3;
        }
        if ( (v20 & 0x10) != 0 )
        {
          *((_DWORD *)this + 65) = *((_DWORD *)a3 + 5);
          v20 = *(_DWORD *)a3;
        }
        if ( (v20 & 0x20) != 0 )
        {
          *((_DWORD *)this + 66) = *((_DWORD *)a3 + 6);
          v20 = *(_DWORD *)a3;
        }
        if ( (v20 & 0x40) != 0 )
        {
          *((_DWORD *)this + 67) = *((_DWORD *)a3 + 7);
          v20 = *(_DWORD *)a3;
        }
        if ( (v20 & 4) != 0 )
          *((_DWORD *)this + 70) = *((_DWORD *)a3 + 3);
        return v7;
      }
      *((_DWORD *)this + 63) = v22;
      v20 = *(_DWORD *)a3;
      goto LABEL_14;
    }
    if ( v23 <= 0x40 )
      v23 = 64;
    v19 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v23 <= 0x1C )
    {
      v19 = -2147024809;
    }
    else
    {
      v24 = 28LL * v23;
      if ( !v24 )
        v24 = 1LL;
      v14 = HeapAlloc(WPF::g_processHeap, 0, v24);
      if ( !v14 )
        v19 = -2147024882;
    }
    if ( v19 < 0 )
    {
      v8 = 84;
    }
    else
    {
      v25 = 28LL * *((unsigned int *)this + 244);
      if ( v25 <= 0xFFFFFFFF )
      {
        memcpy_0(v14, *((const void **)this + 124), (unsigned int)v25);
        operator delete(*((void **)this + 124));
        v16 = *((unsigned int *)this + 244);
        *((_QWORD *)this + 124) = v14;
        *((_DWORD *)this + 245) = v23;
        goto LABEL_8;
      }
      v19 = -2147024362;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v8);
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
LABEL_11:
    v7 = v19;
    if ( v19 >= 0 )
      goto LABEL_12;
    goto LABEL_69;
  }
  v9 = *((_DWORD *)this + 112);
  v10 = 0;
  v11 = *((unsigned int *)this + 113);
  v12 = 0LL;
  LODWORD(v31) = 8;
  *((_QWORD *)&v31 + 1) = a2;
  if ( v9 != (_DWORD)v11 )
    goto LABEL_3;
  if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_6;
  }
  v26 = 2 * v11;
  if ( (unsigned int)(2 * v11) <= 0x40 )
    v26 = 64;
  v10 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v26 <= 0x10 )
  {
    v10 = -2147024809;
  }
  else
  {
    v27 = 16LL * v26;
    if ( !v27 )
      v27 = 1LL;
    v12 = HeapAlloc(WPF::g_processHeap, 0, v27);
    if ( !v12 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v30 = 84;
  }
  else
  {
    v28 = -1;
    v29 = 16LL * *((unsigned int *)this + 112);
    if ( v29 <= 0xFFFFFFFF )
      v28 = 16 * *((_DWORD *)this + 112);
    v10 = 0;
    if ( v29 <= 0xFFFFFFFF )
    {
      memcpy_0(v12, *((const void **)this + 58), v28);
      operator delete(*((void **)this + 58));
      v9 = *((_DWORD *)this + 112);
      *((_QWORD *)this + 58) = v12;
      *((_DWORD *)this + 113) = v26;
LABEL_3:
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v9) = v31;
      v13 = *((_DWORD *)this + 118);
      if ( v13 <= ++*((_DWORD *)this + 112) )
        v13 = *((_DWORD *)this + 112);
      *((_DWORD *)this + 118) = v13;
      goto LABEL_6;
    }
    v10 = -2147024362;
    v30 = 86;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v30);
  if ( v12 )
    HeapFree(WPF::g_processHeap, 0, v12);
LABEL_6:
  if ( v10 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x198Bu);
  return (unsigned int)v10;
}
