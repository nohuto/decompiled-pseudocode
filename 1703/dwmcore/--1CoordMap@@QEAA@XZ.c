/*
 * XREFs of ??1CoordMap@@QEAA@XZ @ 0x1801333C0
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CoordMap::~CoordMap(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 48);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 24);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
