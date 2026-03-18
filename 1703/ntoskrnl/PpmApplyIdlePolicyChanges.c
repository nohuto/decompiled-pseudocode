/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1401534D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14015F818 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23936);
  return 0LL;
}
