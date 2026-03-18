/*
 * XREFs of PfPowerActionNotify @ 0x140471F34
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopUmpoProcessPowerMessage @ 0x140518B54 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x1405EB558 (PopUmpoSendLegacyEvent.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x1405EC5D4 (PopDispatchSuperfetchNotification.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14008B980 (PfLogEvent.c)
 *     PfpServiceMainThreadUnboost @ 0x14014E7D0 (PfpServiceMainThreadUnboost.c)
 *     PfTSetTraceWorkerPriority @ 0x14014F258 (PfTSetTraceWorkerPriority.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140471198 (PfpPowerActionStartScenarioTracing.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140471260 (PfpStartLoggingHardFaultEvents.c)
 *     PfpScenCtxPrefetchWait @ 0x140471324 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxScenarioSet @ 0x140478314 (PfpScenCtxScenarioSet.c)
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 *     PfSnBeginBootPhase @ 0x14047892C (PfSnBeginBootPhase.c)
 *     PfpLogScenarioEvent @ 0x1405EC760 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1405EC870 (PfGenerateTrace.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, __int64 a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  signed int v7; // ebx
  int v8; // ebx
  unsigned int v9; // r8d
  int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v11 = 0;
  v10 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v10 = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_1403CD714, 0);
LABEL_7:
        v11 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_1403CD6DC
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v10,
                 8u);
      }
      PfpPowerActionStartScenarioTracing((__int64)&qword_1403CD6E0, a2);
      if ( dword_1403CD710 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403CD6E0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403CD6E0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403CD6E0);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        MmPerformMemoryListCommand(1LL);
        v7 = PfTSetTraceWorkerPriority(0x10u);
        PfGenerateTrace(&Thread, 1LL);
        if ( v7 <= 31 )
          PfTSetTraceWorkerPriority(v7);
        v8 = 5;
        if ( a3 == 5 )
        {
          v9 = HIDWORD(qword_1403CD514);
          if ( dword_1403CD710 == 5 )
            v9 = dword_1403CD51C;
          else
            v8 = 2;
        }
        else
        {
          v9 = qword_1403CD514;
          v8 = 1;
        }
        v11 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_1403CD6E0, v8, v9);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_1403CD6DC
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v10,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403CD6E0);
  }
  return result;
}
