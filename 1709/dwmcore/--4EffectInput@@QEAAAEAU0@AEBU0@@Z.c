/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180070080
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$CBUEffectInput@@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@PEAU4@@Z @ 0x18006EFF8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$C.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall EffectInput::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  CDrawListBitmap::operator=((CArrayBasedCoverageSet **)a1, a2);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a2 + 45);
  result = a1;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  return result;
}
