/*
 * XREFs of ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXXZ @ 0x18020FEC8
 * Callers:
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180210390 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x1802112F0 (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x180211340 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 */

void __fastcall std::vector<CShapeRenderTask>::emplace_back<>(__int64 *a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  _OWORD *v6; // rdx
  __int64 v7; // r8
  __int64 i; // rcx
  __int64 v9; // xmm1_8
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)a1[1];
  if ( (_DWORD *)a1[2] == v2 )
  {
    v3 = ((__int64)v2 - *a1) / 56;
    if ( v3 == 0x492492492492492LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v4 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v3 + 1);
    v5 = std::_Allocate<std::_Default_allocate_traits<1>>(v4, 0x38uLL);
    v6 = (_OWORD *)v5;
    *(_DWORD *)(56 * v3 + v5) = 0;
    v7 = a1[1];
    for ( i = *a1; i != v7; i += 56LL )
    {
      *v6 = *(_OWORD *)i;
      v6 = (_OWORD *)((char *)v6 + 56);
      *(_OWORD *)((char *)v6 - 40) = *(_OWORD *)(i + 16);
      *(_OWORD *)((char *)v6 - 24) = *(_OWORD *)(i + 32);
      v9 = *(_QWORD *)(i + 48);
      *((_QWORD *)v6 - 1) = v9;
    }
    std::vector<CShapeRenderTask>::_Change_array(a1, v5, v3 + 1, v4);
  }
  else
  {
    *v2 = 0;
    a1[1] += 56LL;
  }
}
