/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x140438808
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x140438760 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 - 16;
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0LL);
}
