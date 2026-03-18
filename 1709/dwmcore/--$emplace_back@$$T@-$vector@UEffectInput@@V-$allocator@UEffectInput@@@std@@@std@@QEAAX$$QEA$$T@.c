/*
 * XREFs of ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x1800703EC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?_Reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z @ 0x180188580 (-_Reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::emplace_back<std::nullptr_t>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    std::vector<EffectInput>::_Reserve();
  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_BYTE *)(result + 16) = 0;
    *(_QWORD *)(result + 48) = 0LL;
    *(_QWORD *)(result + 56) = 0LL;
    *(_QWORD *)(result + 64) = 0LL;
  }
  *(_QWORD *)(a1 + 8) += 104LL;
  return result;
}
