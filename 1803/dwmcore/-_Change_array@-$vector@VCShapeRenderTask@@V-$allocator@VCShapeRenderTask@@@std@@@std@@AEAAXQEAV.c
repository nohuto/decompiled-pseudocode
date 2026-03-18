/*
 * XREFs of ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x180211340
 * Callers:
 *     ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXXZ @ 0x18020FEC8 (--$emplace_back@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@QEAA.c)
 *     ??$emplace_back@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXAEBVCShapeRenderTask@@@Z @ 0x18020FFBC (--$emplace_back@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTas.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 56LL, 0x38uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
