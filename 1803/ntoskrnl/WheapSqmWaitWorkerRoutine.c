/*
 * XREFs of WheapSqmWaitWorkerRoutine @ 0x1407CC4F0
 * Callers:
 *     WheapEtwEnableCallback @ 0x140653460 (WheapEtwEnableCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x1402C0244 (WheapSqmCollectWheaOscTelemetry.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1407CB4D4 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapIsSqmLoggerRunning @ 0x1407CC0F4 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1407CC3A4 (WheapSqmCollectPshedPluginTelemetry.c)
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
