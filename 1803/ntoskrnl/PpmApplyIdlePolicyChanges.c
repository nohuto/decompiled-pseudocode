/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x140271B00
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x140180B14 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23808);
  return 0LL;
}
