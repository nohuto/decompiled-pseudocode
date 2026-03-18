/*
 * XREFs of ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x1800237F4
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MILMatrix3x2::Is2DAxisAlignedPreservingApprox(MILMatrix3x2 *this)
{
  float v1; // xmm5_4
  float v2; // xmm4_4
  float v3; // xmm1_4
  _BOOL8 result; // rax

  result = 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm) >= 0.000012207031
    || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm), v3 >= 0.000012207031) )
  {
    v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
    if ( v1 >= 0.000012207031 )
      return 0;
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
    if ( v2 >= 0.000012207031 )
      return 0;
  }
  return result;
}
