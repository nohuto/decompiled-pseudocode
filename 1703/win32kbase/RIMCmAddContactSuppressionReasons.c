/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C0116AE4
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C011191C (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C011345C (rimNullXYPolicyUpdateStateAndApply.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // r9d

  v3 = *(_DWORD *)(a2 + 8);
  v4 = 0;
  *(_DWORD *)(a2 + 8) = a3 | v3;
  if ( !v3 && a3 )
  {
    --*(_DWORD *)(a1 + 1580);
    return 1;
  }
  return v4;
}
