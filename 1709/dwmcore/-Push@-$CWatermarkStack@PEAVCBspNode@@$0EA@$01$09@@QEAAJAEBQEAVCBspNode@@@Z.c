/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x1801CFA68
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801CF6C8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFEE4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // rax
  signed int v3; // ebx
  void *v4; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // ebp
  SIZE_T v9; // r8
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 == (_DWORD)v2 )
  {
    v7 = 2 * v2;
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = v7;
    v3 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v7 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x4Cu);
      goto LABEL_22;
    }
    if ( v8 <= 0x40 )
      v8 = 64;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 <= 8 )
    {
      v3 = -2147024809;
    }
    else
    {
      v9 = 8LL * v8;
      if ( !v9 )
        v9 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x54u);
      goto LABEL_22;
    }
    v10 = -1;
    v11 = 8LL * *a1;
    if ( v11 <= 0xFFFFFFFF )
      v10 = 8 * *a1;
    v3 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v11 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x56u);
      goto LABEL_22;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v10);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v8;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*a1)++) = *a2;
  v12 = *a1;
  if ( a1[6] > *a1 )
    v12 = a1[6];
  a1[6] = v12;
LABEL_22:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
