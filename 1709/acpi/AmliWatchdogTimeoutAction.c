/*
 * XREFs of AmliWatchdogTimeoutAction @ 0x1C005B2C0
 * Callers:
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C001141C (AmliDisableWatchdog.c)
 *     AmliWatchdog @ 0x1C005B1C0 (AmliWatchdog.c)
 * Callees:
 *     AcpiQueueRecordBlackboxInformation @ 0x1C002BD2C (AcpiQueueRecordBlackboxInformation.c)
 *     AmliDisableWatchdogNoLock @ 0x1C002BFC8 (AmliDisableWatchdogNoLock.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0041048 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AmliWatchdogInitiateBugcheck @ 0x1C005B210 (AmliWatchdogInitiateBugcheck.c)
 *     AmliWatchdogInitiateLiveDump @ 0x1C005B258 (AmliWatchdogInitiateLiveDump.c)
 */

void __fastcall AmliWatchdogTimeoutAction(__int64 a1)
{
  int v2; // edx
  int v3; // edx

  AcpiDiagTraceAmliWatchdogTimeout();
  v2 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
    goto LABEL_6;
  v3 = v2 - 1;
  if ( !v3 )
  {
    AmliWatchdogInitiateLiveDump((_QWORD *)a1);
LABEL_6:
    AcpiQueueRecordBlackboxInformation();
    AmliDisableWatchdogNoLock(a1);
    return;
  }
  if ( v3 == 1 )
    AmliWatchdogInitiateBugcheck((ULONG_PTR *)a1);
}
