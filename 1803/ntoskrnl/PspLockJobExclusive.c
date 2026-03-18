/*
 * XREFs of PspLockJobExclusive @ 0x140537010
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspJobNotificationWorker @ 0x14052DE40 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x14052F0B0 (PspGetNextJobProcess.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405325F8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x1405348AC (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x140536B14 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 *     PspNotificationPacketCallback @ 0x140576080 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1405797B0 (PspJobClose.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140779130 (PspCreateSilo.c)
 *     PspQuitNextJobProcess @ 0x14077BC9C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
