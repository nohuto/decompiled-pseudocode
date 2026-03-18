/*
 * XREFs of _TlgCreateWsz @ 0x140081B24
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x14013C76C (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140232B38 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140232E78 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140232FA4 (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteProcessStarted @ 0x140451038 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404E915C (EtwpWriteAppStateChangeSummary.c)
 *     PnpTraceDeviceConfig @ 0x1405924AC (PnpTraceDeviceConfig.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x1406902FC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1406905FC (IoSetEnvironmentVariableEx.c)
 *     PopSqmThermalCriticalEvent @ 0x1406D68FC (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1406D6C00 (PopSqmThermalZoneEnumeration.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&cchOriginalDestLength;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
