/*
 * XREFs of PpmResetIdlePolicy @ 0x140180B14
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1401805B0 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140271B00 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x14016BE24 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x140180B50 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x140180C28 (PpmApplyIdlePolicy.c)
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
