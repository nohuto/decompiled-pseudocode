/*
 * XREFs of ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18
 * Callers:
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x18017D464 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D664 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801814F0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801CAFC4 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x1800B9E50 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CRectanglesShape::operator new(struct CRectanglesShape *a1)
{
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *result; // rax
  int v3; // r8d
  void *retaddr; // [rsp+28h] [rbp+0h]

  ObjectCache = CThreadContext::GetObjectCache(a1);
  result = 0LL;
  v3 = *((_DWORD *)ObjectCache + 1);
  if ( v3 )
  {
    result = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *result;
    *((_DWORD *)ObjectCache + 1) = v3 - 1;
  }
  if ( !result )
  {
    result = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
    if ( !result )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  return result;
}
