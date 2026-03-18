/*
 * XREFs of PpmResetIdlePolicy @ 0x14014D1F0
 * Callers:
 *     PpmInstallNewIdleStates @ 0x14014CC90 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x14023A6D0 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmResetProcessorIdleAccounting @ 0x14014D22C (PpmResetProcessorIdleAccounting.c)
 *     PpmScaleIdleStateValues @ 0x14014DA20 (PpmScaleIdleStateValues.c)
 *     PpmApplyIdlePolicy @ 0x14014DAD0 (PpmApplyIdlePolicy.c)
 */

__int64 __fastcall PpmResetIdlePolicy(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues(a1);
    KeQueryPerformanceCounter(0LL);
    return PpmResetProcessorIdleAccounting(*(void **)(a1 + 8));
  }
  return result;
}
