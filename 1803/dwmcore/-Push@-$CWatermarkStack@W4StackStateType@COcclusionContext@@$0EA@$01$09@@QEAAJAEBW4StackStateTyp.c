/*
 * XREFs of ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C2628
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800A9288 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211CF0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211E9C (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rbp
  unsigned int v7; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  SIZE_T v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 == a1[1] )
  {
    v9 = 2LL * a1[1];
    v10 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v10 = 2 * a1[1];
    v3 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v9 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
      goto LABEL_5;
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
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x54u);
      goto LABEL_5;
    }
    v12 = -1;
    v13 = 4LL * *a1;
    if ( v13 <= 0xFFFFFFFF )
      v12 = 4 * *a1;
    v3 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v13 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x56u);
      goto LABEL_5;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v12);
    operator delete(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v10;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v2) = *a2;
  v7 = a1[6];
  if ( v7 <= ++*a1 )
    v7 = *a1;
  a1[6] = v7;
LABEL_5:
  operator delete(v4);
  return (unsigned int)v3;
}
