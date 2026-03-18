/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18013D884
 * Callers:
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180215B00 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A38BC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

bool __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  char v2; // di

  v2 = 0;
  *((_WORD *)a2 + 32) = 32085;
  *(_OWORD *)a2 = _xmm;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  if ( *((int *)this + 68) >= 2 )
  {
    CMILMatrix::Set2DAffineMatrix(
      a2,
      *((float *)this + 55),
      *((float *)this + 56),
      *((float *)this + 57),
      *((float *)this + 58),
      *((float *)this + 59),
      *((float *)this + 60));
    return CMILMatrix::IsIdentity<0>((__int64)a2) == 0;
  }
  return v2;
}
