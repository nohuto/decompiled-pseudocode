/*
 * XREFs of ?RmpCommitValuesDivide@@YAX_K0PEA_K@Z @ 0x18003172C
 * Callers:
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x180031658 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCommitValuesDivide(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  if ( a1 == -1LL )
    *a3 = -1LL;
  else
    *a3 = a1 >> 10;
}
