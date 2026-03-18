/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C0115660
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01100A8 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01103FC (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0111F44 (rimNullXYPolicyUpdateStateAndApply.c)
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
    --*(_DWORD *)(a1 + 916);
    return 1;
  }
  return v4;
}
