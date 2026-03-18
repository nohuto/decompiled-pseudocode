/*
 * XREFs of rimPredictionPolicyUpdateStateAndApply @ 0x1C01122D0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetDoPrediction @ 0x1C013911C (ApiSetDoPrediction.c)
 */

__int64 __fastcall rimPredictionPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, int a4)
{
  _DWORD *v5; // rdi
  __int64 result; // rax
  int v7; // ecx
  int v8; // edx

  if ( a4 || (*(_DWORD *)(a1 + 276) & 0x20) != 0 || (unsigned int)(*(_DWORD *)(a1 + 24) - 1) > 3 )
  {
    *(_QWORD *)(a2 + 2424) = *(_QWORD *)(a2 + 2440);
    result = *(_QWORD *)(a2 + 2448);
    *(_QWORD *)(a2 + 2432) = result;
  }
  else
  {
    v5 = (_DWORD *)(a2 + 2424);
    result = ApiSetDoPrediction(a1, *(_QWORD *)(a2 + 2448), *(_QWORD *)(a2 + 2440), a3, a2 + 80, a2 + 2432, a2 + 2424);
    if ( *(_DWORD *)(a2 + 2348) )
    {
      v7 = *v5 - *(_DWORD *)(a2 + 2440);
      v8 = *(_DWORD *)(a2 + 2428) - *(_DWORD *)(a2 + 2444);
      *(_DWORD *)(a2 + 2496) += v7;
      *(_DWORD *)(a2 + 2504) += v7;
      *(_DWORD *)(a2 + 2500) += v8;
      *(_DWORD *)(a2 + 2508) += v8;
    }
  }
  return result;
}
