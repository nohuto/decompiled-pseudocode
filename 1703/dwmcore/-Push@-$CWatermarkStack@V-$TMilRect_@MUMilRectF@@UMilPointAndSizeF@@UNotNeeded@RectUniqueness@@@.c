/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BF5A0
 * Callers:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18001CECC (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18013464C (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
        unsigned int *a1,
        _OWORD *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  unsigned int v7; // ecx
  unsigned int v9; // esi
  SIZE_T v10; // r8
  unsigned __int64 v11; // rax

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != (_DWORD)v2 )
    goto LABEL_2;
  v9 = 2 * v2;
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v9 <= 8 )
    v9 = 8;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v9 <= 0x10 )
  {
    v3 = -2147024809;
  }
  else
  {
    v10 = 16LL * v9;
    if ( !v10 )
      v10 = 1LL;
    v4 = HeapAlloc(WPF::g_processHeap, 0, v10);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v11 = 16LL * *a1;
    if ( v11 <= 0xFFFFFFFF )
    {
      v3 = 0;
      memcpy_0(v4, *((const void **)a1 + 2), (unsigned int)v11);
      WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
      *((_QWORD *)a1 + 2) = v4;
      v4 = 0LL;
      a1[1] = v9;
LABEL_2:
      *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
      v7 = *a1;
      if ( a1[6] > *a1 )
        v7 = a1[6];
      a1[6] = v7;
      goto LABEL_5;
    }
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
LABEL_5:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  return (unsigned int)v3;
}
