/*
 * XREFs of ?_Reserve@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@IEAAX_K@Z @ 0x1800B6C64
 * Callers:
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x1800B6CD8 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 * Callees:
 *     ?_Reallocate@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@IEAAX_K@Z @ 0x1800B6B7C (-_Reallocate@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@CR.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( !((a1[2] - v2) >> 4) )
  {
    v3 = (v2 - *a1) >> 4;
    if ( v3 == 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v4 = v3 + 1;
    v5 = (__int64)(a1[2] - *a1) >> 4;
    v6 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) >= v5 )
      v6 = v5 + (v5 >> 1);
    if ( v6 >= v4 )
      v4 = v6;
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Reallocate((__int64)a1, v4);
  }
}
