/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18004ED34
 * Callers:
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004EC58 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801880B0 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edx
  unsigned int v11; // esi
  SIZE_T v12; // r8
  unsigned __int64 v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != (_DWORD)v2 )
    goto LABEL_2;
  v11 = 2 * v2;
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
  {
    v14 = 76;
    goto LABEL_21;
  }
  if ( v11 <= 8 )
    v11 = 8;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 <= 0x44 )
  {
    v3 = -2147024809;
  }
  else
  {
    v12 = 68LL * v11;
    if ( !v12 )
      v12 = 1LL;
    v4 = HeapAlloc(WPF::g_processHeap, 0, v12);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
    goto LABEL_5;
  }
  v13 = 68LL * *a1;
  if ( v13 > 0xFFFFFFFF )
  {
    v14 = 86;
LABEL_21:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v14);
    goto LABEL_5;
  }
  v3 = 0;
  memcpy_0(v4, *((const void **)a1 + 2), (unsigned int)v13);
  WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v4;
  v4 = 0LL;
  a1[1] = v11;
LABEL_2:
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
