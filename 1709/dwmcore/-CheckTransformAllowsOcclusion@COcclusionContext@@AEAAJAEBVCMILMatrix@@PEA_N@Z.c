/*
 * XREFs of ?CheckTransformAllowsOcclusion@COcclusionContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18005D494
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18005D740 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

__int64 __fastcall COcclusionContext::CheckTransformAllowsOcclusion(
        COcclusionContext *this,
        const struct CMILMatrix *a2,
        bool *a3)
{
  char v3; // dl
  float *v4; // r9
  _BYTE *v5; // r10
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  if ( !CMILMatrix::Is2DAffine<1>((__int64)a2, 1)
    || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[1]) & _xmm), v6 >= 0.000081380211)
    || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[4]) & _xmm), v7 >= 0.000081380211) )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v4) & _xmm);
    if ( v9 >= 0.000081380211 || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[5]) & _xmm), v10 >= 0.000081380211) )
      v3 = 0;
  }
  *v5 = v3;
  return 0LL;
}
