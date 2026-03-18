/*
 * XREFs of ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x1801C34BC
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualDepthGeometry::IsCoplanar(CVisualDepthGeometry *this, const struct CVisualDepthGeometry *a2)
{
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  bool result; // al

  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 43) - *((float *)a2 + 43))) & _xmm) <= 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 44) - *((float *)a2 + 44))) & _xmm);
    if ( v2 <= 0.0000011920929 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 45) - *((float *)a2 + 45))) & _xmm);
      if ( v3 <= 0.0000011920929 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 46) - *((float *)a2 + 46))) & _xmm);
        if ( v4 <= 0.0000011920929 )
          return 1;
      }
    }
  }
  return result;
}
