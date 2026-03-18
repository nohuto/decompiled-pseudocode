/*
 * XREFs of PspLockJobShared @ 0x140537038
 * Callers:
 *     PspQueryJobHierarchyProcessIdList @ 0x140532EEC (PspQueryJobHierarchyProcessIdList.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x140536680 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140536B14 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x140620658 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14077BAFC (PspQueryJobHierarchyInterferenceCount.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
