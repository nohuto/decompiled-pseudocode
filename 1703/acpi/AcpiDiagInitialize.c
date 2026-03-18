/*
 * XREFs of AcpiDiagInitialize @ 0x1C00ABBD8
 * Callers:
 *     DriverEntry @ 0x1C00ACE60 (DriverEntry.c)
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x1C0002550 (AcpiDiagRequeueThermalPollingTimer.c)
 *     OSOpenHandle @ 0x1C00838F8 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C0089BD0 (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C0089F5C (OSReadRegValue.c)
 *     TraceLoggingRegisterEx @ 0x1C0094610 (TraceLoggingRegisterEx.c)
 */

__int64 AcpiDiagInitialize()
{
  TLG_PENABLECALLBACK v0; // rdx
  TraceLoggingHProvider v1; // rcx
  PVOID v2; // r8
  unsigned int v3; // ebx
  int v4; // edi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  KeInitializeTimer2(&AcpiDiagThermalPollingTimer, AcpiDiagThermalPollingTimerRoutine, 0LL, 8LL);
  EtwRegister(&ACPI_ETW_PROVIDER, (PETWENABLECALLBACK)AcpiDiagTraceControlCallback, 0LL, &AcpiDiagHandle);
  EtwRegister(
    &THERMAL_POLLING_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagThermalPollingTraceControlCallback,
    0LL,
    &AcpiDiagThermalPollingHandle);
  TraceLoggingRegisterEx(v1, v0, v2);
  v3 = 0;
  v4 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, (__int64)&Handle);
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    v6 = 4;
    v4 = OSReadRegValue("TemperatureTelemetryInterval", Handle, &v7, &v6);
    if ( v4 >= 0 && v6 == 4 )
    {
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 10000000 * v7;
      if ( 10000000 * v7 > 0 )
        AcpiDiagRequeueThermalPollingTimer();
    }
    OSCloseHandle(Handle);
  }
  if ( v4 >= 0 )
    return (unsigned int)v4;
  return v3;
}
