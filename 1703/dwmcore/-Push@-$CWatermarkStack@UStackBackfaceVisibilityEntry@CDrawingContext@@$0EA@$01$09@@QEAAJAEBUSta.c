/*
 * XREFs of ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800C0848
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
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
  if ( v9 <= 0x40 )
    v9 = 64;
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
