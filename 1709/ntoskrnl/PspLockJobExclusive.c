/*
 * XREFs of PspLockJobExclusive @ 0x1405102E0
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspNotificationPacketCallback @ 0x14050CDB0 (PspNotificationPacketCallback.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14050DA38 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x14050DFD0 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x14050FDA0 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x140512B10 (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x14057F6D0 (PspJobNotificationWorker.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140714F44 (PspCreateSilo.c)
 *     PspQuitNextJobProcess @ 0x140717C7C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
