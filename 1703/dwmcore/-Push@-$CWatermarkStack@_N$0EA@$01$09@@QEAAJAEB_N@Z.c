/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801347B4
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18014D6A4 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B37D8 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3984 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rbp
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx

  v2 = *((_DWORD *)a1 + 1);
  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)a1 == v2 )
  {
    v7 = 2LL * v2;
    if ( v7 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_14;
    }
    if ( (unsigned int)v7 <= 0x40 )
      LODWORD(v7) = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 1 )
    {
      v3 = -2147024809;
    }
    else
    {
      v4 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v7);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
      goto LABEL_14;
    }
    v3 = 0;
    memcpy_0(v4, a1[2], *(unsigned int *)a1);
    WPF::ProcessHeapImpl::Free((void *)a1[2]);
    a1[2] = v4;
    v4 = 0LL;
    *((_DWORD *)a1 + 1) = v7;
  }
  *((_BYTE *)a1[2] + (unsigned int)(*(_DWORD *)a1)++) = *a2;
  v8 = *(_DWORD *)a1;
  if ( *((_DWORD *)a1 + 6) > *(_DWORD *)a1 )
    v8 = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 6) = v8;
LABEL_14:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
