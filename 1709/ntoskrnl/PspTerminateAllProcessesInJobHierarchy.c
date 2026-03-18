/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140591C84
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x140512B10 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x140591C10 (NtTerminateJobObject.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x14050DA38 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1407458D4 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v5; // bl
  bool v6; // al
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+44h] [rbp+Ch]

  _InterlockedOr((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x80u);
  v5 = 0;
  v8 = a2;
  v9 = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy((char *)Event, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = v9;
  if ( (v9 & 2) != 0 )
  {
    v5 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event, 0, 0);
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v5;
}
