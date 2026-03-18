/*
 * XREFs of ?_Reallocate@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@IEAAX_K@Z @ 0x1800206F4
 * Callers:
 *     ?_Reserve@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@IEAAX_K@Z @ 0x1800207A0 (-_Reserve@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@CRend.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180022D08 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  _QWORD *i; // rcx
  _QWORD *v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v2 = operator new(16 * a2)) == 0LL )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  v5 = *(_QWORD **)(a1 + 8);
  v6 = v2;
  for ( i = *(_QWORD **)a1; i != v5; i += 2 )
  {
    if ( v6 )
    {
      *v6 = *i;
      v11 = i[1];
      i[1] = 0LL;
      v6[1] = v11;
    }
    v6 += 2;
  }
  v8 = *(_QWORD **)a1;
  v9 = *(_QWORD **)(a1 + 8);
  v10 = (__int64)v9 - *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    while ( v8 != v9 )
    {
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v8 + 1);
      v8 += 2;
    }
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[2 * a2];
  *(_QWORD *)(a1 + 8) = (char *)v2 + (v10 & 0xFFFFFFFFFFFFFFF0uLL);
}
