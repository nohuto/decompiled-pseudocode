/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0
 * Callers:
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C4E0 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180143680 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18014BA88 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18014BEDC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157570 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180158434 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017676C (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  __int64 v7; // rax
  int v8; // esi
  void *v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // ebp
  int v12; // ebp
  void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // esi
  int v20; // ecx
  unsigned int v21; // r15d
  SIZE_T v22; // r8
  unsigned __int64 v23; // rcx
  unsigned int v24; // r15d
  SIZE_T v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int128 v28; // [rsp+30h] [rbp-48h]
  __int128 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-38h]
  int v31; // [rsp+48h] [rbp-30h]

  if ( !a4 )
  {
LABEL_7:
    v12 = 0;
    LOBYTE(v31) = *((_BYTE *)this + 280);
    v13 = 0LL;
    *(_QWORD *)&v29 = *(_QWORD *)((char *)this + 260);
    DWORD2(v29) = *((_DWORD *)this + 72);
    HIDWORD(v29) = *((_DWORD *)this + 67);
    v30 = *((_QWORD *)this + 34);
    v14 = *((unsigned int *)this + 221);
    if ( *((_DWORD *)this + 220) != (_DWORD)v14 )
    {
LABEL_8:
      v15 = *((_QWORD *)this + 112) + 28LL * *((unsigned int *)this + 220);
      *(_OWORD *)v15 = v29;
      *(_QWORD *)(v15 + 16) = v30;
      *(_DWORD *)(v15 + 24) = v31;
      v16 = *((_DWORD *)this + 226);
      v17 = ++*((_DWORD *)this + 220);
      if ( v16 > v17 )
        v17 = v16;
      *((_DWORD *)this + 226) = v17;
      goto LABEL_11;
    }
    v21 = 2 * v14;
    if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v18 = -2147024362;
LABEL_67:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1A97u);
      if ( a4 )
      {
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 440, 0LL, v27);
        return v18;
      }
LABEL_12:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *((_BYTE *)this + 280) = *((_DWORD *)a3 + 4) != 1;
      if ( (*(_BYTE *)a3 & 2) != 0 )
      {
        v20 = *((_DWORD *)a3 + 1);
        if ( (v20 & 0xFF000000) == 0xFF000000 )
        {
          *((_DWORD *)this + 65) = v20 & 0xFFFFFF;
        }
        else if ( !*((_BYTE *)this + 6541) )
        {
          *((_DWORD *)this + 65) = v20;
        }
      }
      if ( (*(_BYTE *)a3 & 8) != 0 )
        *((_DWORD *)this + 66) = *((_DWORD *)a3 + 2);
      if ( (*(_BYTE *)a3 & 0x10) != 0 )
        *((_DWORD *)this + 67) = *((_DWORD *)a3 + 5);
      if ( (*(_BYTE *)a3 & 0x20) != 0 )
        *((_DWORD *)this + 68) = *((_DWORD *)a3 + 6);
      if ( (*(_BYTE *)a3 & 0x40) != 0 )
        *((_DWORD *)this + 69) = *((_DWORD *)a3 + 7);
      if ( (*(_BYTE *)a3 & 4) != 0 )
        *((_DWORD *)this + 72) = *((_DWORD *)a3 + 3);
      return v18;
    }
    if ( v21 <= 0x40 )
      v21 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v21 <= 0x1C )
    {
      v12 = -2147024809;
    }
    else
    {
      v22 = 28LL * v21;
      if ( !v22 )
        v22 = 1LL;
      v13 = HeapAlloc(WPF::g_processHeap, 0, v22);
      if ( !v13 )
        v12 = -2147024882;
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x54u);
    }
    else
    {
      v23 = 28LL * *((unsigned int *)this + 220);
      if ( v23 <= 0xFFFFFFFF )
      {
        v12 = 0;
        memcpy_0(v13, *((const void **)this + 112), (unsigned int)v23);
        WPF::ProcessHeapImpl::Free(*((void **)this + 112));
        *((_QWORD *)this + 112) = v13;
        *((_DWORD *)this + 221) = v21;
        goto LABEL_8;
      }
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v13 )
      HeapFree(WPF::g_processHeap, 0, v13);
LABEL_11:
    v18 = v12;
    if ( v12 >= 0 )
      goto LABEL_12;
    goto LABEL_67;
  }
  v7 = *((unsigned int *)this + 111);
  v8 = 0;
  v9 = 0LL;
  LODWORD(v28) = 8;
  *((_QWORD *)&v28 + 1) = a2;
  if ( *((_DWORD *)this + 110) != (_DWORD)v7 )
    goto LABEL_3;
  v24 = 2 * v7;
  if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    v11 = -2147024362;
    goto LABEL_60;
  }
  if ( v24 <= 0x40 )
    v24 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v24 <= 0x10 )
  {
    v8 = -2147024809;
  }
  else
  {
    v25 = 16LL * v24;
    if ( !v25 )
      v25 = 1LL;
    v9 = HeapAlloc(WPF::g_processHeap, 0, v25);
    if ( !v9 )
      v8 = -2147024882;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x54u);
  }
  else
  {
    v26 = 16LL * *((unsigned int *)this + 110);
    if ( v26 <= 0xFFFFFFFF )
    {
      v8 = 0;
      memcpy_0(v9, *((const void **)this + 57), (unsigned int)v26);
      WPF::ProcessHeapImpl::Free(*((void **)this + 57));
      *((_QWORD *)this + 57) = v9;
      *((_DWORD *)this + 111) = v24;
LABEL_3:
      *(_OWORD *)(*((_QWORD *)this + 57) + 16LL * (unsigned int)(*((_DWORD *)this + 110))++) = v28;
      v10 = *((_DWORD *)this + 116);
      if ( v10 <= *((_DWORD *)this + 110) )
        v10 = *((_DWORD *)this + 110);
      *((_DWORD *)this + 116) = v10;
      goto LABEL_6;
    }
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v9 )
    HeapFree(WPF::g_processHeap, 0, v9);
LABEL_6:
  v11 = v8;
  if ( v8 >= 0 )
    goto LABEL_7;
LABEL_60:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1A87u);
  return v11;
}
