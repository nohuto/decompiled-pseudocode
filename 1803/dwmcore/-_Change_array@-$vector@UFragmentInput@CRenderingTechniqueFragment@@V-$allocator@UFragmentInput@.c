/*
 * XREFs of ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x180036F84
 * Callers:
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x18003701C (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180036F44 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CRenderingTechniqueFragment **v4; // rbx
  CRenderingTechniqueFragment **v9; // r15

  v4 = *(CRenderingTechniqueFragment ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(CRenderingTechniqueFragment ***)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v4 + 1);
        v4 += 2;
      }
      while ( v4 != v9 );
      v4 = *(CRenderingTechniqueFragment ***)a1;
    }
    std::_Deallocate(v4, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 4, 0x10uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  *(_QWORD *)a1 = a2;
}
