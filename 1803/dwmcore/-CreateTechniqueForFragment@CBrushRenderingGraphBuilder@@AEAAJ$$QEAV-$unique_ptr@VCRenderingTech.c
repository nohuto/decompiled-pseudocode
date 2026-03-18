/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180035B00
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180036508 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800710A8 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18007117C (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  CRenderingTechnique *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  CRenderingTechnique *v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)HeapAlloc(WPF::g_processHeap, 0, 0x120uLL);
  if ( v5 )
    v6 = (CRenderingTechnique *)CRenderingTechnique::CRenderingTechnique(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *a1 + 144LL;
    v15 = v6;
    v8 = *(_DWORD *)(v7 + 24);
    v9 = v8 + 1;
    v10 = v8 + 1 < v8 ? 0x80070216 : 0;
    if ( v8 + 1 < v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
    }
    else if ( v9 > *(_DWORD *)(v7 + 20) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(v7, 8LL, 1LL, &v15);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v7 + 8LL * v8) = v15;
      *(_DWORD *)(v7 + 24) = v9;
    }
    if ( v10 >= 0 )
    {
      *a3 = *(_DWORD *)(v7 + 24) - 1;
      return 0;
    }
    v13 = 449;
  }
  else
  {
    v10 = -2147024882;
    v13 = 446;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
  if ( v6 )
    CRenderingTechnique::`scalar deleting destructor'(v6, v14);
  return (unsigned int)v10;
}
