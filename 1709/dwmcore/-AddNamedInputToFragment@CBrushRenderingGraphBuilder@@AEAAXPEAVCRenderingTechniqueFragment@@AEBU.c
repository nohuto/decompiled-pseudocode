/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18006C0E4
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x1800B6CD8 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ecx
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebx
  _OWORD *v11; // rax
  CMILCOMBase *v12; // rcx
  void (*v13)(void); // rax
  unsigned __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+34h] [rbp-14h]
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)this;
  v5 = 0;
  v7 = *(unsigned int *)(v3 + 40);
  if ( (_DWORD)v7 )
  {
    do
    {
      v14 = *(_QWORD *)(v3 + 16) + ((unsigned __int64)v5 << 6);
      if ( *(_QWORD *)v14 == *(_QWORD *)a3
        && *(_QWORD *)(v14 + 8) == *((_QWORD *)a3 + 1)
        && *(_DWORD *)(v14 + 16) == *((_DWORD *)a3 + 4) )
      {
        break;
      }
      ++v5;
    }
    while ( v5 < (unsigned int)v7 );
  }
  if ( v5 >= (unsigned int)v7 )
  {
    v8 = v20;
    v9 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
      v8 = v7 + 1;
    v10 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( v9 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
    }
    else if ( v8 > *(_DWORD *)(v3 + 36) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 16, 0x40u, 1, a3);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      v11 = (_OWORD *)(*(_QWORD *)(v3 + 16) + (v7 << 6));
      *v11 = *(_OWORD *)a3;
      v11[1] = *((_OWORD *)a3 + 1);
      v11[2] = *((_OWORD *)a3 + 2);
      v11[3] = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v3 + 40) = v8;
    }
    if ( v10 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
    v12 = *(CMILCOMBase **)a3;
    if ( *(_QWORD *)a3 )
    {
      v13 = *(void (**)(void))(*(_QWORD *)v12 + 8LL);
      if ( (char *)v13 == (char *)CMILCOMBase::InternalAddRef )
        CMILCOMBase::InternalAddRef(v12);
      else
        v13();
    }
    v5 = *(_DWORD *)(v3 + 40) - 1;
  }
  v18 = 0LL;
  v16 = v5;
  v17 = 0;
  std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
    (char *)a2 + 32,
    &v16);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
}
