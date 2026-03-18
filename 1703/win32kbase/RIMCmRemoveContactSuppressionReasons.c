/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C0116C7C
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimApplyPointerDevicePolicies @ 0x1C01115D4 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C011191C (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C011345C (rimNullXYPolicyUpdateStateAndApply.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v4; // r8d
  unsigned int v5; // r9d

  v3 = *(_DWORD *)(a2 + 8);
  v4 = v3 & ~a3;
  v5 = 0;
  *(_DWORD *)(a2 + 8) = v4;
  if ( v3 && !v4 )
  {
    v5 = 1;
    ++*(_DWORD *)(a1 + 1580);
  }
  return v5;
}
