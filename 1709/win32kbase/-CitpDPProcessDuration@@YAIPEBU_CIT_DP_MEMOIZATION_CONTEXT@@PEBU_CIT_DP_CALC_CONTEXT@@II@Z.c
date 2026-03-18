/*
 * XREFs of ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C0154E6C
 * Callers:
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0154654 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpDPGetDurationBucket@@YAIII@Z @ 0x1C0154DAC (-CitpDPGetDurationBucket@@YAIII@Z.c)
 *     ?CitpDPPerturbHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z @ 0x1C0154E0C (-CitpDPPerturbHistogram@@YAIPEBU_CIT_DP_CALC_CONTEXT@@I@Z.c)
 *     ?CitpDPSampleBitWithProbability@@YAEN@Z @ 0x1C0154F34 (-CitpDPSampleBitWithProbability@@YAEN@Z.c)
 */

__int64 __fastcall CitpDPProcessDuration(
        const struct _CIT_DP_MEMOIZATION_CONTEXT *a1,
        const struct _CIT_DP_CALC_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  unsigned int v12; // edx

  v7 = 3 * (a3 + 1LL);
  v8 = CitpDPSampleBitWithProbability(*((double *)a2 + 6));
  v9 = *((_DWORD *)a1 + v7);
  v10 = *((_DWORD *)a1 + 2);
  if ( (v8 != 0) == a4 + (v9 & 0x3FFFFFFF) < v10 )
    v11 = v9 >> 31;
  else
    v11 = (v9 >> 30) & 1;
  if ( (qword_1C0193740 & 2) != 0 )
  {
    if ( ((1 << CitpDPGetDurationBucket(a4, v10)) & *((_DWORD *)a1 + v7 + 2)) != 0 )
      v12 = *((_DWORD *)a1 + v7 + 1);
    else
      v12 = 0;
    v11 |= 2 * CitpDPPerturbHistogram(a2, v12);
  }
  return v11;
}
