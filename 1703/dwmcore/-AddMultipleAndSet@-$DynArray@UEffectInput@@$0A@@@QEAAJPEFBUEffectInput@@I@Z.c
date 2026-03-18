/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UEffectInput@@$0A@@@QEAAJPEFBUEffectInput@@I@Z @ 0x1800213B0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<EffectInput,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 88LL, 1LL, a2);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    v8 = *(_QWORD *)a1 + 88 * v3;
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(a2 + 64);
    *(_QWORD *)(v8 + 80) = *(_QWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
