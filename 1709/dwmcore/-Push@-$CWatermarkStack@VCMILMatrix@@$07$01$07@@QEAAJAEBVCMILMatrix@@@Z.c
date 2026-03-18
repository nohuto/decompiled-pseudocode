/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18007B4E4
 * Callers:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18007B408 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x180191720 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  signed int v3; // ebx
  void *v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  SIZE_T v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 == (_DWORD)v2 )
  {
    v11 = 2 * v2;
    v12 = -1;
    if ( v11 <= 0xFFFFFFFF )
      v12 = v11;
    v3 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v11 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x4Cu);
      goto LABEL_5;
    }
    if ( v12 <= 8 )
      v12 = 8;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 0x44 )
    {
      v3 = -2147024809;
    }
    else
    {
      v13 = 68LL * v12;
      if ( !v13 )
        v13 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v13);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x54u);
      goto LABEL_5;
    }
    v14 = 68LL * *a1;
    v15 = -1;
    if ( v14 <= 0xFFFFFFFF )
      v15 = 68 * *a1;
    v3 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v14 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x56u);
      goto LABEL_5;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v15);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v12;
  }
  v7 = *((_QWORD *)a1 + 2);
  v8 = 68LL * *a1;
  *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
  *(_OWORD *)(v8 + v7 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v8 + v7 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v8 + v7 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v8 + v7 + 64) = *(_DWORD *)(a2 + 64);
  v9 = ++*a1;
  if ( a1[6] > *a1 )
    v9 = a1[6];
  a1[6] = v9;
LABEL_5:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
