/*
 * XREFs of std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x1800376E8
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180037684 (-_Change_array@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutpu.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 j; // rdi
  __int64 v13; // r8
  _DWORD *v14; // rdx
  __int64 k; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 i; // rdi
  CRenderingTechniqueFragment *v20; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  v5 = (v2 - *a1) >> 4;
  v6 = (a1[2] - *a1) >> 4;
  if ( a2 <= v6 )
  {
    if ( a2 != v5 )
    {
      if ( a2 > v5 )
      {
        v17 = a2 - v5;
        if ( a2 != v5 )
        {
          do
          {
            *(_DWORD *)v2 = -1;
            *(_QWORD *)(v2 + 8) = 0LL;
            v2 += 16LL;
            --v17;
          }
          while ( v17 );
        }
        a1[1] = v2;
      }
      else
      {
        v18 = *a1 + 16 * a2;
        for ( i = v18; i != v2; i += 16LL )
        {
          v20 = *(CRenderingTechniqueFragment **)(i + 8);
          if ( v20 )
            CRenderingTechniqueFragment::`scalar deleting destructor'(v20);
        }
        a1[1] = v18;
      }
    }
  }
  else
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = v6 >> 1;
    if ( v6 > 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v8 = a2;
    }
    else
    {
      v8 = v7 + v6;
      if ( v7 + v6 < a2 )
        v8 = a2;
    }
    v9 = std::_Allocate<std::_Default_allocate_traits<1>>(v8, 16LL);
    v10 = v9;
    v11 = a2 - v5;
    for ( j = v9 + 16 * v5; v11; --v11 )
    {
      *(_DWORD *)j = -1;
      *(_QWORD *)(j + 8) = 0LL;
      j += 16LL;
    }
    v13 = a1[1];
    v14 = (_DWORD *)v9;
    for ( k = *a1; k != v13; k += 16LL )
    {
      *v14 = *(_DWORD *)k;
      v14 += 4;
      v16 = *(_QWORD *)(k + 8);
      *(_QWORD *)(k + 8) = 0LL;
      *((_QWORD *)v14 - 1) = v16;
    }
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Change_array((__int64)a1, v10, a2, v8);
  }
}
