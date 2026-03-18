/*
 * XREFs of ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x18003701C
 * Callers:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180035BE0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035CD0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x180036F84 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r10
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r8
  _QWORD *i; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)a1[2];
  v4 = (_QWORD *)a1[1];
  if ( v2 == v4 )
  {
    v6 = ((__int64)v4 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = v6 + 1;
    v8 = ((__int64)v2 - *a1) >> 4;
    v9 = v8 >> 1;
    if ( v8 > 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = 2 * v6;
    v12 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 16LL);
    v13 = (_QWORD *)v12;
    *(_QWORD *)(v12 + 8 * v11) = *a2;
    v14 = a2[1];
    a2[1] = 0LL;
    *(_QWORD *)(v12 + 8 * v11 + 8) = v14;
    v15 = (_QWORD *)a1[1];
    for ( i = (_QWORD *)*a1; i != v15; i += 2 )
    {
      *v13 = *i;
      v13 += 2;
      v17 = i[1];
      i[1] = 0LL;
      *(v13 - 1) = v17;
    }
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array((__int64)a1, v12, v7, v10);
  }
  else
  {
    *v4 = *a2;
    v18 = a2[1];
    a2[1] = 0LL;
    v4[1] = v18;
    a1[1] += 16LL;
  }
}
