/*
 * XREFs of ?_Reallocate@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAX_K@Z @ 0x1800B9188
 * Callers:
 *     ?_Reserve@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAX_K@Z @ 0x1800B9234 (-_Reserve@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  char *v2; // r15
  unsigned __int64 v3; // rbx
  _QWORD *v5; // r8
  char *v6; // rdx
  _QWORD *i; // rcx
  _QWORD *v8; // r14
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rbx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v2 = (char *)operator new(16 * a2)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v5 = *(_QWORD **)(a1 + 8);
  v6 = v2;
  for ( i = *(_QWORD **)a1; i != v5; i += 2 )
  {
    if ( v6 )
    {
      *(_DWORD *)v6 = *(_DWORD *)i;
      v11 = i[1];
      i[1] = 0LL;
      *((_QWORD *)v6 + 1) = v11;
    }
    v6 += 16;
  }
  v8 = *(_QWORD **)a1;
  v9 = *(_QWORD **)(a1 + 8);
  v10 = (__int64)v9 - *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( v8 != v9 )
    {
      do
      {
        v12 = v8[1];
        if ( v12 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(v12 + 112));
          v13 = *(_QWORD *)(v12 + 32);
          if ( v13 )
          {
            if ( v13 != *(_QWORD *)(v12 + 40) )
            {
              v14 = *(_QWORD *)(v12 + 40);
              do
              {
                std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((void ***)(v13 + 8));
                v13 += 16LL;
              }
              while ( v13 != v14 );
            }
            WPF::ProcessHeapImpl::Free(*(void **)(v12 + 32));
            *(_QWORD *)(v12 + 32) = 0LL;
            *(_QWORD *)(v12 + 40) = 0LL;
            *(_QWORD *)(v12 + 48) = 0LL;
          }
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v12);
          WPF::ProcessHeapImpl::Free((void *)v12);
        }
        v8 += 2;
      }
      while ( v8 != v9 );
      v3 = a2;
    }
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[16 * v3];
  *(_QWORD *)(a1 + 8) = &v2[v10 & 0xFFFFFFFFFFFFFFF0uLL];
}
