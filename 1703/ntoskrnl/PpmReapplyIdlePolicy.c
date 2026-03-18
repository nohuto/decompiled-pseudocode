/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14059B744
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404C13FC (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406CEFD0 (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     <none>
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
