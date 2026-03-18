/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006BF4C
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C034 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18006DC1C (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18006DF64 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  CRenderingTechnique *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // ebx
  int v13; // eax
  unsigned int v14; // edx
  CRenderingTechnique *v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)HeapAlloc(WPF::g_processHeap, 0, 0xF0uLL);
  if ( v5 )
    v6 = (CRenderingTechnique *)CRenderingTechnique::CRenderingTechnique(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *a1 + 304LL;
    v15 = v6;
    v8 = (unsigned int)v6;
    v9 = *(unsigned int *)(v7 + 24);
    v10 = v9 + 1;
    if ( (int)v9 + 1 >= (unsigned int)v9 )
      v8 = v9 + 1;
    v11 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
    if ( v10 < (unsigned int)v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
    }
    else if ( v8 > *(_DWORD *)(v7 + 20) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v7, 8u, 1, &v15);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v7 + 8 * v9) = v15;
      *(_DWORD *)(v7 + 24) = v8;
    }
    if ( v11 >= 0 )
    {
      *a3 = *(_DWORD *)(v7 + 24) - 1;
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x186u);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x183u);
  }
  if ( v6 )
    CRenderingTechnique::`scalar deleting destructor'(v6, v14);
  return (unsigned int)v11;
}
