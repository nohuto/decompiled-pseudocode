/*
 * XREFs of ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18015E2B4
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18015F438 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?_Buy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z @ 0x1801633B0 (-_Buy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 *__fastcall std::vector<MilRectF>::vector<MilRectF>(__int64 *a1, __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (unsigned __int8)std::vector<MilRectF>::_Buy(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4) )
  {
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove((void *)*a1, *(const void **)a2, v4);
    a1[1] = v4 + v5;
  }
  return a1;
}
