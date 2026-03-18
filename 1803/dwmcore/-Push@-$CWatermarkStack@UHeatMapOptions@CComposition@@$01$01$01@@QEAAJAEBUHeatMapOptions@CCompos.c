/*
 * XREFs of ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x180161D08
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  SIZE_T v9; // r8
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edx

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  if ( (_DWORD)v2 == a1[1] )
  {
    v7 = 2LL * a1[1];
    v8 = 0xFFFFFFFFLL;
    if ( v7 <= 0xFFFFFFFF )
      v8 = (unsigned int)v7;
    v3 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v7 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
      goto LABEL_22;
    }
    if ( (unsigned int)v8 <= 2 )
      v8 = 2LL;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x18 )
    {
      v3 = -2147024809;
    }
    else
    {
      v9 = 24 * v8;
      if ( !(24 * v8) )
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
    v11 = 24LL * *a1;
    if ( v11 <= 0xFFFFFFFF )
      v10 = 24 * *a1;
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
  v12 = *((_QWORD *)a1 + 2);
  v13 = 3 * v2;
  *(_OWORD *)(v12 + 8 * v13) = *(_OWORD *)a2;
  *(_QWORD *)(v12 + 8 * v13 + 16) = *(_QWORD *)(a2 + 16);
  v14 = a1[6];
  if ( v14 <= ++*a1 )
    v14 = *a1;
  a1[6] = v14;
LABEL_22:
  operator delete(v4);
  return (unsigned int)v3;
}
