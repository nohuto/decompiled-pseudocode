/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE4B0
 * Callers:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800173D0 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18013FD20 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
        unsigned int *a1,
        _OWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rsi
  unsigned int v7; // ecx
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  SIZE_T v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v9 = 2LL * a1[1];
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = 2 * a1[1];
  v3 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v10 <= 8 )
    v10 = 8;
  v3 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 <= 0x10 )
  {
    v3 = -2147024809;
  }
  else
  {
    v11 = 16LL * v10;
    if ( !v11 )
      v11 = 1LL;
    v4 = HeapAlloc(WPF::g_processHeap, 0, v11);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v12 = -1;
    v13 = 16LL * *a1;
    if ( v13 <= 0xFFFFFFFF )
      v12 = 16 * *a1;
    v3 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v13 <= 0xFFFFFFFF )
    {
      memcpy_0(v4, *((const void **)a1 + 2), v12);
      operator delete(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v4;
      v4 = 0LL;
      a1[1] = v10;
LABEL_2:
      *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v2) = *a2;
      v7 = a1[6];
      if ( v7 <= ++*a1 )
        v7 = *a1;
      a1[6] = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x56u);
  }
LABEL_5:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  return (unsigned int)v3;
}
