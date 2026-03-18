/*
 * XREFs of PspScheduleEnforcementWorker @ 0x140443B24
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x140519510 (PspChangeJobMemoryUsageByProcess.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
