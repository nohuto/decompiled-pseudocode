/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180091200
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFD38 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFEE4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  __int64 v2; // rax
  DWORD v3; // ebx
  void *v4; // rsi
  unsigned int v7; // ecx
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  SIZE_T v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != (_DWORD)v2 )
    goto LABEL_2;
  v9 = 2 * v2;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = v9;
  v3 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x4Cu);
    return v3;
  }
  if ( v10 <= 0x40 )
    v10 = 64;
  v3 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 <= 4 )
  {
    v3 = -2147024809;
  }
  else
  {
    v11 = 4LL * v10;
    if ( !v11 )
      v11 = 1LL;
    v4 = HeapAlloc(WPF::g_processHeap, 0, v11);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x54u);
  }
  else
  {
    v12 = -1;
    v13 = 4LL * *a1;
    if ( v13 <= 0xFFFFFFFF )
      v12 = 4 * *a1;
    v3 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v13 <= 0xFFFFFFFF )
    {
      memcpy_0(v4, *((const void **)a1 + 2), v12);
      WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
      *((_QWORD *)a1 + 2) = v4;
      v4 = 0LL;
      a1[1] = v10;
LABEL_2:
      *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * (*a1)++) = *a2;
      v7 = *a1;
      if ( a1[6] > *a1 )
        v7 = a1[6];
      a1[6] = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x56u);
  }
LABEL_5:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  return v3;
}
