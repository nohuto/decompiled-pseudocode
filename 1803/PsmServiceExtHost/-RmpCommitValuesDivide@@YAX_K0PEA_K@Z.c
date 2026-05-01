/*
 * XREFs of ?RmpCommitValuesDivide@@YAX_K0PEA_K@Z @ 0x18004E8AC
 * Callers:
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18004E814 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCommitValuesDivide(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax

  v3 = -1LL;
  if ( a1 != -1LL )
    v3 = a1 >> 10;
  *a3 = v3;
}
