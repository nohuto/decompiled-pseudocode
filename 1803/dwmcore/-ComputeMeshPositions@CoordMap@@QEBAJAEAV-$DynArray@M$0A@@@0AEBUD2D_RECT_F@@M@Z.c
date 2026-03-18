/*
 * XREFs of ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x180004BC8
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800050E0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x18000427C (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoordMap::ComputeMeshPositions(__int64 a1, __int64 a2, __int64 a3, float *a4, float a5)
{
  int AllPositions; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax

  AllPositions = CoordMap::GetAllPositions(a1, a1, a2, *a4, a4[2], a5);
  v10 = AllPositions;
  if ( AllPositions < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllPositions, 0x2F0u);
  }
  else
  {
    v11 = CoordMap::GetAllPositions(v9, a1 + 192, a3, a4[1], a4[3], a5);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2F1u);
    else
      return 0;
  }
  return v10;
}
