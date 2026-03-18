/*
 * XREFs of WheapSqmWaitWorkerRoutine @ 0x140724D40
 * Callers:
 *     WheapEtwEnableCallback @ 0x1405D4020 (WheapEtwEnableCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x140723D2C (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapIsSqmLoggerRunning @ 0x140724948 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x140724BF8 (WheapSqmCollectPshedPluginTelemetry.c)
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
