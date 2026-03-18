/*
 * XREFs of _TlgCreateWsz @ 0x1400BA358
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x1401232F0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140247EB8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1402481F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x14024836C (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140248498 (PopTraceZoneCr3Tripped.c)
 *     PopLogPowerRequestAction @ 0x1404E7CF0 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x1404FDFA0 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404FE504 (EtwpWriteAppStateChangeSummary.c)
 *     PnpTraceDeviceConfig @ 0x1405A4408 (PnpTraceDeviceConfig.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405B898C (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x1406BBFF0 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1406BC2DC (IoSetEnvironmentVariableEx.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140703340 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x14070CB64 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x14070CE7C (PopSqmThermalZoneEnumeration.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&::pwsz;
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
