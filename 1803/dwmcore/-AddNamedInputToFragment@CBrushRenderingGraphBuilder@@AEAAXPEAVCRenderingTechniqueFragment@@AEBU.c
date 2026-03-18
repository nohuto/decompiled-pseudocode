/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180035BE0
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035CD0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180036F44 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x18003701C (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v7; // r9
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+34h] [rbp-14h]
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)this;
  v5 = 0LL;
  v7 = *(unsigned int *)(v3 + 40);
  if ( (_DWORD)v7 )
  {
    v12 = *(_QWORD *)(v3 + 16);
    do
    {
      if ( *(_QWORD *)(v12 + 24 * v5) == *(_QWORD *)a3
        && *(_QWORD *)(v12 + 24 * v5 + 8) == *((_QWORD *)a3 + 1)
        && *(_DWORD *)(v12 + 24 * v5 + 16) == *((_DWORD *)a3 + 4) )
      {
        break;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < (unsigned int)v7 );
  }
  if ( (unsigned int)v5 >= (unsigned int)v7 )
  {
    v8 = v7 + 1;
    v9 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( (int)v7 + 1 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
    }
    else if ( v8 > *(_DWORD *)(v3 + 36) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 16, 24LL, 1LL, a3);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
    }
    else
    {
      v10 = *(_QWORD *)(v3 + 16);
      v11 = 3 * v7;
      *(_OWORD *)(v10 + 8 * v11) = *(_OWORD *)a3;
      *(_QWORD *)(v10 + 8 * v11 + 16) = *((_QWORD *)a3 + 2);
      *(_DWORD *)(v3 + 40) = v8;
    }
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    if ( *(_QWORD *)a3 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 8LL))(*(_QWORD *)a3);
    LODWORD(v5) = *(_DWORD *)(v3 + 40) - 1;
  }
  v16 = 0LL;
  v14 = v5;
  v15 = 0;
  std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
    (char *)a2 + 32,
    &v14);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v16);
}
