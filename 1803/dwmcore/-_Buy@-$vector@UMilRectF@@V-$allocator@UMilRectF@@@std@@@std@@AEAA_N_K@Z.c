/*
 * XREFs of ?_Buy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAA_N_K@Z @ 0x1801633B0
 * Callers:
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18015E2B4 (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A7194 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<MilRectF>::_Buy(unsigned __int64 *a1, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v5 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 0x10uLL);
    v6 = v5 + 16 * a2;
    *a1 = v5;
    a1[1] = v5;
    result = 1;
    a1[2] = v6;
  }
  return result;
}
