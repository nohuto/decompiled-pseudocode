/*
 * XREFs of PopNotifyTelemetryOsState @ 0x1407060AC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(__int64 a1, int a2, int a3, char a4, char a5)
{
  unsigned int v8; // r10d
  int v9; // r11d
  int v10; // r10d
  int v11; // ecx

  if ( TraceLoggingProviderEnabled(&pCallbackContext, a2, 0x800000000000uLL) )
  {
    if ( (unsigned int)(v9 - 4) <= 2 )
    {
      v11 = 2;
      LOBYTE(v8) = v9 == 5;
      v10 = v8 + 1;
      return (unsigned int)PopTransitionTelemetryOsState(v11, v10);
    }
    if ( (unsigned int)(v9 - 2) <= 1 )
    {
      v10 = 4;
      v11 = 4 - (a5 != 0);
      if ( v9 == 3 || a3 == 5 )
      {
        if ( (a4 & 8) != 0 )
        {
          v10 = 3;
        }
        else
        {
          v10 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v10 = 8;
        }
      }
      return (unsigned int)PopTransitionTelemetryOsState(v11, v10);
    }
  }
  return v8;
}
