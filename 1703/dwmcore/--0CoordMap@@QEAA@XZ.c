/*
 * XREFs of ??0CoordMap@@QEAA@XZ @ 0x18013335C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

CoordMap *__fastcall CoordMap::CoordMap(CoordMap *this)
{
  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 10;
  *(_QWORD *)((char *)this + 20) = 10LL;
  *((_QWORD *)this + 24) = (char *)this + 224;
  *((_QWORD *)this + 25) = (char *)this + 224;
  *((_DWORD *)this + 52) = 10;
  *(_QWORD *)((char *)this + 212) = 10LL;
  *((_QWORD *)this + 48) = (char *)this + 416;
  *((_QWORD *)this + 49) = (char *)this + 416;
  *((_DWORD *)this + 100) = 3;
  *(_QWORD *)((char *)this + 404) = 3LL;
  return this;
}
