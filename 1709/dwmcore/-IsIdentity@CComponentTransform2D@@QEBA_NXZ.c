/*
 * XREFs of ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x180159E08
 * Callers:
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180070580 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

bool __fastcall CComponentTransform2D::IsIdentity(CComponentTransform2D *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((float *)this + 18) == 0.0
    && *((float *)this + 19) == 0.0
    && *((float *)this + 24) == 1.0
    && *((float *)this + 25) == 1.0
    && *((float *)this + 26) == 0.0
    && *((float *)this + 22) == 0.0
    && *((float *)this + 23) == 0.0 )
  {
    return D2D1::Matrix3x2F::IsIdentity((CComponentTransform2D *)((char *)this + 108));
  }
  return v1;
}
