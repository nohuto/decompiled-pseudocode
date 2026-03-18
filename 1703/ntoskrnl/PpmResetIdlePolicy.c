/*
 * XREFs of PpmResetIdlePolicy @ 0x14015F818
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x1401534D0 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x14015F2A0 (PpmInstallNewIdleStates.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x1401470E8 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x14015F854 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x14015F928 (PpmApplyIdlePolicy.c)
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
