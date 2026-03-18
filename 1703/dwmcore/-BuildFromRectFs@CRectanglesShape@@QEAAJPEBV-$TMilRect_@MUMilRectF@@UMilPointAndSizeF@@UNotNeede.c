/*
 * XREFs of ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180093F10
 * Callers:
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18004F904 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x180094214 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 */

__int64 __fastcall CRectanglesShape::BuildFromRectFs(CRectanglesShape *a1, __int64 a2, unsigned int a3)
{
  CRectanglesShape::Reset(a1);
  return DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
           (char *)a1 + 8,
           a2,
           a3);
}
