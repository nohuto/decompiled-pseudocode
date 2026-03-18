/*
 * XREFs of PopNotifyTelemetryOsState @ 0x140576768
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x140082CB4 (TraceLoggingProviderEnabled.c)
 *     PopTransitionTelemetryOsState @ 0x1405B9204 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(__int64 a1, UCHAR a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r10d
  int v6; // r11d
  __int64 v8; // rcx

  if ( TraceLoggingProviderEnabled(&hProvider, a2, 0x800000000000uLL) )
  {
    if ( (unsigned int)(v6 - 4) <= 2 )
    {
      v8 = 2LL;
    }
    else
    {
      if ( (unsigned int)(v6 - 2) > 1 )
        return v5;
      v8 = 4 - (unsigned int)(a5 != 0);
    }
    return (unsigned int)PopTransitionTelemetryOsState(v8);
  }
  return v5;
}
