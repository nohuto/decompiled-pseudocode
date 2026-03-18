/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800BFCFC
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000A980 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211E9C (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180212600 (-BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CVisual *,64,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // r14
  unsigned int v7; // ecx
  void *v8; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  SIZE_T v12; // r8
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v10 = 2LL * a1[1];
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = 2 * a1[1];
  v3 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v11 <= 0x40 )
    v11 = 64;
  v3 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 <= 8 )
  {
    v3 = -2147024809;
    goto LABEL_24;
  }
  v12 = 8LL * v11;
  if ( !v12 )
    v12 = 1LL;
  v4 = HeapAlloc(WPF::g_processHeap, 0, v12);
  v8 = v4;
  if ( !v4 )
  {
    v3 = -2147024882;
LABEL_24:
    v8 = 0LL;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v13 = -1;
    v14 = 8LL * *a1;
    if ( v14 <= 0xFFFFFFFF )
      v13 = 8 * *a1;
    v3 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v14 <= 0xFFFFFFFF )
    {
      memcpy_0(v4, *((const void **)a1 + 2), v13);
      operator delete(*((void **)a1 + 2));
      v2 = *a1;
      *((_QWORD *)a1 + 2) = v4;
      a1[1] = v11;
LABEL_2:
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v2) = *a2;
      ++*a1;
      v7 = a1[6];
      if ( v7 <= *a1 )
        v7 = *a1;
      v8 = 0LL;
      a1[6] = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x56u);
  }
LABEL_5:
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  return (unsigned int)v3;
}
