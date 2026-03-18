/*
 * XREFs of WheapSqmWaitWorkerRoutine @ 0x140764810
 * Callers:
 *     WheapEtwEnableCallback @ 0x1405F0150 (WheapEtwEnableCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x14028AB58 (WheapSqmCollectWheaOscTelemetry.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1407637F0 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapIsSqmLoggerRunning @ 0x140764410 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1407646C0 (WheapSqmCollectPshedPluginTelemetry.c)
 */

__int64 WheapSqmWaitWorkerRoutine()
{
  __int64 result; // rax
  __int64 v1; // rdx

  if ( WheapIsSqmLoggerRunning() )
  {
    WheapSqmCollectWheaPolicyTelemetry();
    WheapSqmCollectPshedPluginTelemetry();
    return WheapSqmCollectWheaOscTelemetry();
  }
  else
  {
    result = (unsigned int)(WheapSqmWaitRetryCount + 1);
    WheapSqmWaitRetryCount = result;
    if ( (unsigned int)result <= 7 )
    {
      v1 = -WheapSqmWaitTimeout;
      WheapSqmWaitTimeout *= 2LL;
      return KiSetTimerEx((__int64)&WheapSqmWaitTimer, v1, 0, 0, (__int64)&WheapSqmWaitTimerDpc);
    }
  }
  return result;
}
