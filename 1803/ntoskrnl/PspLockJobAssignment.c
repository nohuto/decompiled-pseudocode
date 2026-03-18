/*
 * XREFs of PspLockJobAssignment @ 0x1404F1104
 * Callers:
 *     PspLockJobChain @ 0x1404F101C (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14052F7E8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
