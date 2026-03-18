/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x180020EE4
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(
        __int64 *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = *((unsigned int *)a1 + 6);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 <= *((_DWORD *)a1 + 5) )
  {
    v10 = 9 * v3;
    v11 = *a1;
    *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)a2;
    *(_OWORD *)(v11 + 8 * v10 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v11 + 8 * v10 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v11 + 8 * v10 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v11 + 8 * v10 + 64) = *(_QWORD *)(a2 + 64);
    *((_DWORD *)a1 + 6) = v6;
  }
  else
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 72LL, 1LL, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  return v7;
}
