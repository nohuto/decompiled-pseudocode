/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1400B1788
 * Callers:
 *     PoNotifyVSyncChange @ 0x14000A3F0 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140249000 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406F7B70 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PpmIdleUsingStateSelection @ 0x1400B1814 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x1400B1898 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400B1934 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x1400B19A8 (PpmGetExitSamplingCountdown.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1400B19CC (PopFxGetLatencyLimitWithoutResiliency.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  __int64 v4; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140366314 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_14040033C;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( (unsigned int)PpmGetExitSamplingCountdown() )
    {
      v2 = 1;
      if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
      {
        PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
        _InterlockedOr(v5, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    PopDiagTraceSystemLatencyUpdate(0LL, LatencyLimitWithoutResiliency);
    PopFxSystemLatencyHint = LatencyLimitWithoutResiliency;
    v3 = PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUsingStateSelection();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
      {
        LOBYTE(v4) = 1;
        result = KeFlushProcessWriteBuffers(v4);
      }
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
