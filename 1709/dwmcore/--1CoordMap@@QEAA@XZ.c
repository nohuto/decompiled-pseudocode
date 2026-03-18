/*
 * XREFs of ??1CoordMap@@QEAA@XZ @ 0x18011C804
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CoordMap::~CoordMap(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 48);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 24);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
