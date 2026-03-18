/*
 * XREFs of ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18013DCAC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<_D3DCOLORVALUE,2,2,2>::Push(unsigned int *a1, _OWORD *a2)
{
  __int64 v2; // rax
  signed int v3; // ebx
  void *v4; // rbp
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
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
    if ( v8 <= 2 )
      v8 = 2;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 <= 0x10 )
    {
      v3 = -2147024809;
    }
    else
    {
      v9 = 16LL * v8;
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
    v11 = 16LL * *a1;
    if ( v11 <= 0xFFFFFFFF )
      v10 = 16 * *a1;
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
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
  v12 = *a1;
  if ( a1[6] > *a1 )
    v12 = a1[6];
  a1[6] = v12;
LABEL_22:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
