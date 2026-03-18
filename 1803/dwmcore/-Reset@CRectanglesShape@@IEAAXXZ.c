/*
 * XREFs of ?Reset@CRectanglesShape@@IEAAXXZ @ 0x18013F2A8
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18013F2D4 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CRectanglesShape::Reset(CRectanglesShape *this)
{
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 0x10u);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 8);
}
