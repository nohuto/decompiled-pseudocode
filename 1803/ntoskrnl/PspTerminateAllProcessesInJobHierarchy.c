/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x1405798A0
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 *     NtTerminateJobObject @ 0x140579730 (NtTerminateJobObject.c)
 *     PspJobClose @ 0x1405797B0 (PspJobClose.c)
 *     PsTerminateServerSilo @ 0x140778C00 (PsTerminateServerSilo.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405325F8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1407A7840 (EtwTraceJob.c)
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
  PspEnumJobsAndProcessesInJobHierarchy(Object, 0, (int)PspTerminateProcessesJobCallback, 0, (__int64)&v8, 2);
  v6 = v9;
  if ( (v9 & 2) != 0 )
  {
    v5 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob((__int64)Object, 0, 0);
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Object, v6, a2, 1825LL);
  return v5;
}
