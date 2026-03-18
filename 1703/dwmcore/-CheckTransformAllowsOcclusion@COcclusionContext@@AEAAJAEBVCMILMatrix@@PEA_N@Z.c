/*
 * XREFs of ?CheckTransformAllowsOcclusion@COcclusionContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18009B42C
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18009B530 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

__int64 __fastcall COcclusionContext::CheckTransformAllowsOcclusion(
        COcclusionContext *this,
        const struct CMILMatrix *a2,
        bool *a3)
{
  bool v3; // cl
  __int64 result; // rax
  bool *v5; // r10

  v3 = CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)a2) != 0;
  result = 0LL;
  *v5 = v3;
  return result;
}
