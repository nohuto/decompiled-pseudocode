/*
 * XREFs of ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x180119DD8
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::Is2DAxisAlignedPreserving(CMILMatrix *this)
{
  char v1; // dl
  float *v2; // rcx
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4

  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, 1)
    || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[1]) & _xmm), v3 >= 0.000081380211)
    || (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[4]) & _xmm), v4 >= 0.000081380211) )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v2) & _xmm);
    if ( v5 >= 0.000081380211 )
      return 0;
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2[5]) & _xmm);
    if ( v6 >= 0.000081380211 )
      return 0;
  }
  return v1;
}
