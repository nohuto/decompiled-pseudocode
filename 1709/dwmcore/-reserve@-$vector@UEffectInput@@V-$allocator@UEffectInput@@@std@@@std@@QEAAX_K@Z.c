/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180070434
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<EffectInput>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  char *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2] - *a1;
  result = (char *)((unsigned __int64)((unsigned __int128)(v2 * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64) >> 63);
  if ( v2 / 104 < a2 )
  {
    if ( a2 > 0x276276276276276LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    return std::vector<EffectInput>::_Reallocate((__int64)a1, a2);
  }
  return result;
}
