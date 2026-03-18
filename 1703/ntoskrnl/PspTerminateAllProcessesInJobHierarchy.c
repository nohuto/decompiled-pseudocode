/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4
 * Callers:
 *     NtTerminateJobObject @ 0x14045A7BC (NtTerminateJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x140560980 (PspJobClose.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405471A8 (PspEvaluateAndNotifyEmptyJob.c)
 *     EtwTraceJob @ 0x14070AA40 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(volatile signed __int32 *Object, unsigned int a2, char a3)
{
  char v5; // bl
  bool v6; // al
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+44h] [rbp+Ch]

  _InterlockedOr(Object + 326, 0x80u);
  v5 = 0;
  v8 = a2;
  v9 = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy((char *)Object, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = v9;
  if ( (v9 & 2) != 0 )
  {
    v5 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob((char *)Object, 0, 0);
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Object, v6, a2, 1825LL);
  return v5;
}
