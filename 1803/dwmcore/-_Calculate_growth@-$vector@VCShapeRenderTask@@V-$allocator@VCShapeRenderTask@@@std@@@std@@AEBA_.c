/*
 * XREFs of ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x1802112F0
 * Callers:
 *     ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXXZ @ 0x18020FEC8 (--$emplace_back@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@QEAA.c)
 *     ??$emplace_back@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXAEBVCShapeRenderTask@@@Z @ 0x18020FFBC (--$emplace_back@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTas.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CShapeRenderTask>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v3 = (a1[2] - *a1) / 56LL;
  v4 = v3 >> 1;
  if ( v3 > 0x492492492492492LL - (v3 >> 1) )
    return a2;
  result = v4 + v3;
  if ( v4 + v3 < a2 )
    return a2;
  return result;
}
