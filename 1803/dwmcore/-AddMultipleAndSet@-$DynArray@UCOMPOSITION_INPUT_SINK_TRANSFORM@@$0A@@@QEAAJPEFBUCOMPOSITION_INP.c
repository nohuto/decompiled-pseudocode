/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x1800199D8
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 <= *((_DWORD *)a1 + 5) )
  {
    v8 = 9 * v2;
    v9 = *a1;
    *(_OWORD *)(v9 + 8 * v8) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 8 * v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v9 + 8 * v8 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v9 + 8 * v8 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v9 + 8 * v8 + 64) = *(_QWORD *)(a2 + 64);
    *((_DWORD *)a1 + 6) = v4;
  }
  else
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 72LL, 1LL, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
  }
  return v5;
}
