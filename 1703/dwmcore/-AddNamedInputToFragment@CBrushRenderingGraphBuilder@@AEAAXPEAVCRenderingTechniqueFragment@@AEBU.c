/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180003B48
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x180020814 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180022D08 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // ebx
  _OWORD *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+34h] [rbp-14h]
  __int64 v17; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)this;
  v5 = 0;
  v7 = *(_DWORD *)(v3 + 40);
  if ( v7 )
  {
    do
    {
      v13 = *(_QWORD *)(v3 + 16) + ((unsigned __int64)v5 << 6);
      if ( *(_QWORD *)v13 == *(_QWORD *)a3
        && *(_QWORD *)(v13 + 8) == *((_QWORD *)a3 + 1)
        && *(_DWORD *)(v13 + 16) == *((_DWORD *)a3 + 4) )
      {
        break;
      }
      ++v5;
    }
    while ( v5 < v7 );
  }
  if ( v5 >= v7 )
  {
    v8 = *(_DWORD *)(v3 + 40);
    v9 = v19;
    v10 = v8 + 1;
    if ( v8 + 1 >= v8 )
      v9 = v8 + 1;
    v11 = v10 < v8 ? 0x80070216 : 0;
    if ( v10 < v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB5u);
    }
    else if ( v9 > *(_DWORD *)(v3 + 36) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 16, 64LL, 1LL, a3);
      v11 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v12 = (_OWORD *)(*(_QWORD *)(v3 + 16) + ((unsigned __int64)v8 << 6));
      *v12 = *(_OWORD *)a3;
      v12[1] = *((_OWORD *)a3 + 1);
      v12[2] = *((_OWORD *)a3 + 2);
      v12[3] = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v3 + 40) = v9;
    }
    if ( v11 < 0 )
    {
      ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
      JUMPOUT(0x1800D953ELL);
    }
    if ( *(_QWORD *)a3 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 8LL))(*(_QWORD *)a3);
    v5 = *(_DWORD *)(v3 + 40) - 1;
  }
  v17 = 0LL;
  v15 = v5;
  v16 = 0;
  std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
    (char *)a2 + 32,
    &v15);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v17);
}
