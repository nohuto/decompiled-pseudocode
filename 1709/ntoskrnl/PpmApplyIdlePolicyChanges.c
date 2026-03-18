/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x14023A6D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14014D1F0 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23808);
  return 0LL;
}
