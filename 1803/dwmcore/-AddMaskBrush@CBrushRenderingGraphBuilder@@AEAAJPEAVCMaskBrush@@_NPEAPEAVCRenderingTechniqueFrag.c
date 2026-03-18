/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035CD0
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180035BE0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036F54 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x18003701C (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CSpriteVisualContent *v6; // rdx
  int v9; // esi
  unsigned int v10; // edx
  CRenderingTechniqueFragment *v11; // rcx
  struct CRenderingTechniqueFragment *v12; // rax
  struct CRenderingTechniqueFragment *v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // edx
  struct CRenderingTechniqueFragment *v17; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v18; // [rsp+38h] [rbp-28h]
  CRenderingTechniqueFragment **v19; // [rsp+40h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment *v20; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+50h] [rbp-10h]
  CRenderingTechniqueFragment *v22; // [rsp+98h] [rbp+38h] BYREF

  LOBYTE(v21) = 1;
  v22 = 0LL;
  v20 = 0LL;
  v6 = (struct CSpriteVisualContent *)*((_QWORD *)a2 + 10);
  v19 = &v22;
  v17 = 0LL;
  v9 = CBrushRenderingGraphBuilder::AddBrush(this, v6, a3, &v20);
  if ( (_BYTE)v21 )
  {
    v10 = (unsigned int)v20;
    v11 = *v19;
    *v19 = v20;
    if ( v11 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v11, v10);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x13Du);
  }
  else
  {
    if ( !*((_QWORD *)a2 + 9) )
    {
      std::unique_ptr<CRenderingTechniqueFragment>::operator=(&v17, &v22);
      v13 = v17;
LABEL_12:
      v9 = 0;
      *a4 = v13;
      goto LABEL_13;
    }
    v12 = (struct CRenderingTechniqueFragment *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 6) = 0LL;
      *((_QWORD *)v12 + 7) = 0LL;
      *((_QWORD *)v12 + 8) = 0LL;
      *((_QWORD *)v12 + 9) = 0LL;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 14) = 0LL;
      *((_BYTE *)v12 + 120) = a3;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      v18 = v22;
      v22 = 0LL;
      std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
        (char *)v13 + 32,
        &v17);
      if ( v18 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v18, v14);
      v19 = (CRenderingTechniqueFragment **)*((_QWORD *)a2 + 9);
      v20 = 0LL;
      v21 = 0;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v13,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v19);
      goto LABEL_12;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x142u);
  }
LABEL_13:
  if ( v22 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v22, v15);
  return (unsigned int)v9;
}
