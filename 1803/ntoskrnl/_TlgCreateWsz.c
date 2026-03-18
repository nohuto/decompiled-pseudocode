/*
 * XREFs of _TlgCreateWsz @ 0x14006F020
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x14014DB20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140166428 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14027E12C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x14027E464 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14027E590 (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteProcessStarted @ 0x140510620 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405108B4 (EtwpWriteAppStateChangeSummary.c)
 *     PopLogPowerRequestAction @ 0x140524A88 (PopLogPowerRequestAction.c)
 *     PnpTraceDeviceConfig @ 0x1405E7454 (PnpTraceDeviceConfig.c)
 *     PopThermalHandlePreviousShutdown @ 0x140627B68 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x140720FA4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140721290 (IoSetEnvironmentVariableEx.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1407675CC (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x14076FFA8 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1407702C8 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x140775408 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x140775818 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = (LPCWSTR)&::pwsz;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
