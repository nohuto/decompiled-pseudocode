/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180211B84
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211CF0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211E9C (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  void *v4; // rbp
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  SIZE_T v9; // r8
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( *a1 == a1[1] )
  {
    v7 = 2LL * a1[1];
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = 2 * a1[1];
    v3 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v7 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
      goto LABEL_22;
    }
    if ( v8 <= 0x40 )
      v8 = 64;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 <= 4 )
    {
      v3 = -2147024809;
    }
    else
    {
      v9 = 4LL * v8;
      if ( !v9 )
        v9 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x54u);
      goto LABEL_22;
    }
    v10 = -1;
    v11 = 4LL * *a1;
    if ( v11 <= 0xFFFFFFFF )
      v10 = 4 * *a1;
    v3 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v11 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x56u);
      goto LABEL_22;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v10);
    operator delete(*((void **)a1 + 2));
    v2 = *a1;
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v8;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v2) = *a2;
  v12 = a1[6];
  if ( v12 <= ++*a1 )
    v12 = *a1;
  a1[6] = v12;
LABEL_22:
  operator delete(v4);
  return (unsigned int)v3;
}
