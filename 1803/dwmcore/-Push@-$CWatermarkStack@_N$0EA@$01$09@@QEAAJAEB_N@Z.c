/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801401D4
 * Callers:
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180162368 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211CF0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211E9C (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned int v9; // edx

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)a1 == *((_DWORD *)a1 + 1) )
  {
    v7 = 2LL * *((unsigned int *)a1 + 1);
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = 2 * *((_DWORD *)a1 + 1);
    v3 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v7 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
      goto LABEL_16;
    }
    if ( v8 <= 0x40 )
      v8 = 64;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 <= 1 )
    {
      v3 = -2147024809;
    }
    else
    {
      v4 = HeapAlloc(WPF::g_processHeap, 0, v8);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x54u);
      goto LABEL_16;
    }
    v3 = 0;
    memcpy_0(v4, a1[2], *(unsigned int *)a1);
    operator delete((void *)a1[2]);
    v2 = *(_DWORD *)a1;
    a1[2] = v4;
    v4 = 0LL;
    *((_DWORD *)a1 + 1) = v8;
  }
  *((_BYTE *)a1[2] + v2) = *a2;
  v9 = *((_DWORD *)a1 + 6);
  if ( v9 <= ++*(_DWORD *)a1 )
    v9 = *(_DWORD *)a1;
  *((_DWORD *)a1 + 6) = v9;
LABEL_16:
  operator delete(v4);
  return (unsigned int)v3;
}
