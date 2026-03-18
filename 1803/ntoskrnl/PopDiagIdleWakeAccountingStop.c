/*
 * XREFs of PopDiagIdleWakeAccountingStop @ 0x140765870
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopDiagTraceIdleWakeSourceSummary @ 0x140767F08 (PopDiagTraceIdleWakeSourceSummary.c)
 */

__int64 PopDiagIdleWakeAccountingStop()
{
  char *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  if ( PopDiagGlobalIdleWakeAccounting )
  {
    PopDiagTraceIdleWakeSourceSummary(&dword_1403A8A48);
    PopDiagTraceIdleWakeSourceSummary(&dword_1403A8A70);
    PopDiagTraceIdleWakeSourceSummary(&dword_1403A8A98);
    PopDiagTraceIdleWakeSourceSummary(&dword_1403A8AC0);
    v0 = (char *)&unk_1403A8AE8;
    v1 = 64LL;
    do
    {
      result = PopDiagTraceIdleWakeSourceSummary(v0);
      v0 += 40;
      --v1;
    }
    while ( v1 );
    PopDiagGlobalIdleWakeAccounting = 0;
  }
  return result;
}
