/*
 * XREFs of PfPowerActionNotify @ 0x1404309DC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopUmpoProcessPowerMessage @ 0x1404DF408 (PopUmpoProcessPowerMessage.c)
 *     PfpProcessScenarioPhase @ 0x1405EF25C (PfpProcessScenarioPhase.c)
 *     PopDispatchSuperfetchNotification @ 0x1406FCC50 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 *     PopUmpoSendLegacyEvent @ 0x1407082D8 (PopUmpoSendLegacyEvent.c)
 * Callees:
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x140239840 (PfpServiceMainThreadUnboost.c)
 *     PfTSetTraceWorkerPriority @ 0x1402399C8 (PfTSetTraceWorkerPriority.c)
 *     PfpScenCtxScenarioSet @ 0x140429040 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x140429124 (PfSnBeginBootPhase.c)
 *     MmPerformMemoryListCommand @ 0x140430948 (MmPerformMemoryListCommand.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140430C28 (PfpPowerActionStartScenarioTracing.c)
 *     PfpScenCtxPrefetchWait @ 0x140430E90 (PfpScenCtxPrefetchWait.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1404311D8 (PfpStartLoggingHardFaultEvents.c)
 *     PfpLogScenarioEvent @ 0x1406F268C (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1406F3AD4 (PfGenerateTrace.c)
 */

void __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  signed int v6; // ebx
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  v3 = 1;
  v8 = 0;
  v7 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v7 = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( !v4 )
    {
      if ( (unsigned int)(a3 - 2) > 3 )
        return;
      MmPerformMemoryListCommand();
      v6 = PfTSetTraceWorkerPriority(0x10u);
      PfGenerateTrace(&Thread, 1LL);
      if ( v6 <= 31 )
        PfTSetTraceWorkerPriority(v6);
      v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_14038D2C0);
      PfpServiceMainThreadUnboost(0LL);
      goto LABEL_17;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
        PfpLogScenarioEvent(1, 2, 1, dword_14038D2F4, 0);
LABEL_12:
      v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
         + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
LABEL_17:
      PfLogEvent(
        28,
        dword_14038D2BC
      + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
        &v7,
        8u);
      return;
    }
    PfpPowerActionStartScenarioTracing(&qword_14038D2C0);
    if ( dword_14038D2F0 == 5 )
      PfSnBeginBootPhase(4u);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_14038D2C0, 1, 0, 0LL);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_14038D2C0, 2, 0, 0LL);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_14038D2C0, 5, 0, 0LL);
    if ( (int)PfpStartLoggingHardFaultEvents() >= 0 )
      goto LABEL_12;
  }
  else
  {
    if ( (unsigned int)(a3 - 2) > 2 )
    {
      if ( a3 != 5 )
        return;
      v3 = (a2 & 4) != 0 ? 5 : 2;
    }
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_14038D2C0, 0, v3, 0LL);
  }
}
