/*
 * XREFs of PpmReapplyIdlePolicy @ 0x1406F68F8
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404DEB98 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
