/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x14006F988
 * Callers:
 *     PoNotifyVSyncChange @ 0x14006F5D0 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140233BD0 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406C7270 (PopWnfFullscreenVideoCallback.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x14006FA14 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x14006FA48 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x14006FAA4 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14006FB40 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x14006FC08 (PpmGetExitSamplingCountdown.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  __int64 v4; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_14034BC94 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_1403E3314;
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
