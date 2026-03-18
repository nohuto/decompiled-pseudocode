/*
 * XREFs of PfPowerActionNotify @ 0x140409780
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopUmpoProcessPowerMessage @ 0x1404C1A44 (PopUmpoProcessPowerMessage.c)
 *     PopDispatchSuperfetchNotification @ 0x140576408 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 *     PopUmpoSendLegacyEvent @ 0x1405775F4 (PopUmpoSendLegacyEvent.c)
 *     PfpProcessScenarioPhase @ 0x14058509C (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14005F30C (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x140138120 (PfTSetTraceWorkerPriority.c)
 *     PfpServiceMainThreadUnboost @ 0x1401383E0 (PfpServiceMainThreadUnboost.c)
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 *     PfpScenCtxPrefetchWait @ 0x140409BCC (PfpScenCtxPrefetchWait.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140409CB8 (PfpStartLoggingHardFaultEvents.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140409D7C (PfpPowerActionStartScenarioTracing.c)
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 *     PfpScenCtxScenarioSet @ 0x14040EA40 (PfpScenCtxScenarioSet.c)
 *     PfpLogScenarioEvent @ 0x1405760BC (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1405761CC (PfGenerateTrace.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, __int64 a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  signed int v6; // ebx
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  v8 = 0;
  v7 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v7 = (2 * a1) | 1;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_14036DE94, 0);
LABEL_7:
        v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
           + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_14036DE5C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v7,
                 8u);
      }
      PfpPowerActionStartScenarioTracing(&qword_14036DE60, a2, (unsigned int)a2);
      if ( dword_14036DE90 == 5 )
        PfSnBeginBootPhase(4u);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_14036DE60);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_14036DE60);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_14036DE60);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        MmPerformMemoryListCommand(1LL, a2, (unsigned int)a2);
        v6 = PfTSetTraceWorkerPriority(0x10u);
        PfGenerateTrace(&Thread, 1LL);
        if ( v6 <= 31 )
          PfTSetTraceWorkerPriority(v6);
        v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_14036DE60);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_14036DE5C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v7,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_14036DE60);
  }
  return result;
}
