/*
 * XREFs of ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180058040
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z @ 0x1800C6AD8 (-AddMultipleAndSet@-$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z.c)
 */

__int64 __fastcall CoordMap::GetAllHollowRects(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *(_DWORD *)(a2 + 24) = 0;
  v2 = DynArray<D2D_RECT_F,0>::AddMultipleAndSet(a2, *(_QWORD *)(a1 + 384), *(unsigned int *)(a1 + 408));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13Bu);
  else
    return 0;
  return v3;
}
