/*
 * XREFs of ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180210390
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAXXZ @ 0x18020FEC8 (--$emplace_back@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall CShapeDrawingContext::CreateRenderTask(CShapeDrawingContext *this, struct CShapeRenderTask **a2)
{
  std::vector<CShapeRenderTask>::emplace_back<>((__int64 *)this + 64);
  *a2 = (struct CShapeRenderTask *)(*((_QWORD *)this + 65) - 56LL);
  return 0LL;
}
