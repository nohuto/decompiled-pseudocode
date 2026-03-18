/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x1800BC454
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  signed int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rcx

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 <= *(_DWORD *)(a1 + 20) )
  {
    v9 = *(_QWORD *)a1;
    v10 = 9 * v4;
    *(_OWORD *)(v9 + 8 * v10) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 8 * v10 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v9 + 8 * v10 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v9 + 8 * v10 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v9 + 8 * v10 + 64) = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(a1 + 24) = a3;
  }
  else
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x48u, 1, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC0u);
  }
  return v6;
}
