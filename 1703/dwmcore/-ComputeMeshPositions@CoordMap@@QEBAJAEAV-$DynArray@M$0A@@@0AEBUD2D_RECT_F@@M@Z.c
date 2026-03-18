/*
 * XREFs of ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x180058078
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x180057DF4 (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoordMap::ComputeMeshPositions(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float a5)
{
  int AllPositions; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax

  AllPositions = CoordMap::GetAllPositions(a1, a1, a2, a4, *(float *)(a4 + 8), a5);
  v11 = AllPositions;
  if ( AllPositions < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AllPositions, 0x2F0u);
  }
  else
  {
    v12 = CoordMap::GetAllPositions(v9, a1 + 192, a3, v10, *(float *)(a4 + 12), a5);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2F1u);
    else
      return 0;
  }
  return v11;
}
