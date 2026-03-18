/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1801304AC
 * Callers:
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x1801B6E60 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18009AEAC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

bool __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  char v2; // bl

  v2 = 0;
  *((_WORD *)a2 + 32) = 32085;
  *(_OWORD *)a2 = _xmm;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  if ( *((int *)this + 60) >= 2 )
  {
    CMILMatrix::Set2DAffineMatrix(
      a2,
      *((float *)this + 47),
      *((float *)this + 48),
      *((float *)this + 49),
      *((float *)this + 50),
      *((float *)this + 51),
      *((float *)this + 52));
    return CMILMatrix::IsIdentity<0>((__int64)a2) == 0;
  }
  return v2;
}
