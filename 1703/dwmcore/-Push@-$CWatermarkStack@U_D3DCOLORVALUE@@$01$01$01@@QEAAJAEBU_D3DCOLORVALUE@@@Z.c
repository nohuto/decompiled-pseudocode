/*
 * XREFs of ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18014D160
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<_D3DCOLORVALUE,2,2,2>::Push(unsigned int *a1, _OWORD *a2)
{
  unsigned int v2; // eax
  int v3; // edi
  void *v4; // rbp
  unsigned __int64 v7; // rsi
  SIZE_T v8; // r8
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v12; // [rsp+20h] [rbp-28h]

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != v2 )
    goto LABEL_14;
  v7 = 2LL * v2;
  if ( v7 > 0xFFFFFFFF )
  {
    v12 = 76;
    goto LABEL_21;
  }
  if ( (unsigned int)v7 <= 2 )
    LODWORD(v7) = 2;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 0x10 )
  {
    v3 = -2147024809;
  }
  else
  {
    v8 = 16LL * (unsigned int)v7;
    if ( !v8 )
      v8 = 1LL;
    v4 = HeapAlloc(WPF::g_processHeap, 0, v8);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
    goto LABEL_17;
  }
  v9 = 16LL * *a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = 86;
LABEL_21:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v12);
    goto LABEL_17;
  }
  v3 = 0;
  memcpy_0(v4, *((const void **)a1 + 2), (unsigned int)v9);
  WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
  *((_QWORD *)a1 + 2) = v4;
  v4 = 0LL;
  a1[1] = v7;
LABEL_14:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
  v10 = *a1;
  if ( a1[6] > *a1 )
    v10 = a1[6];
  a1[6] = v10;
LABEL_17:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
