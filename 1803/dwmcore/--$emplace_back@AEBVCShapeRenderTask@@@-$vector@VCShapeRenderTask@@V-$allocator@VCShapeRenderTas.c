/*
 * XREFs of ??$emplace_back@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXAEBVCShapeRenderTask@@@Z @ 0x18020FFBC
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180210840 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x1802112F0 (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x180211340 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 */

const void **__fastcall std::vector<CShapeRenderTask>::emplace_back<CShapeRenderTask const &>(__int64 *a1, __int64 a2)
{
  const void **result; // rax
  __int64 v3; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  _OWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 i; // rcx
  __int64 v13; // xmm1_8
  const void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1[1];
  if ( a1[2] == v3 )
  {
    v6 = (v3 - *a1) / 56;
    if ( v6 == 0x492492492492492LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v6 + 1);
    v8 = std::_Allocate<std::_Default_allocate_traits<1>>(v7, 0x38uLL);
    v9 = (_OWORD *)v8;
    v10 = 56 * v6;
    *(_OWORD *)(v10 + v8) = *(_OWORD *)a2;
    *(_OWORD *)(v10 + v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v10 + v8 + 32) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v10 + v8 + 48) = *(_QWORD *)(a2 + 48);
    v11 = a1[1];
    for ( i = *a1; i != v11; i += 56LL )
    {
      *v9 = *(_OWORD *)i;
      v9 = (_OWORD *)((char *)v9 + 56);
      *(_OWORD *)((char *)v9 - 40) = *(_OWORD *)(i + 16);
      *(_OWORD *)((char *)v9 - 24) = *(_OWORD *)(i + 32);
      v13 = *(_QWORD *)(i + 48);
      *((_QWORD *)v9 - 1) = v13;
    }
    return (const void **)std::vector<CShapeRenderTask>::_Change_array(a1, v8, v6 + 1, v7);
  }
  else
  {
    *(_OWORD *)v3 = *(_OWORD *)a2;
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(a2 + 48);
    a1[1] += 56LL;
  }
  return result;
}
