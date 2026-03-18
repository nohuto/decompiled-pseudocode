/*
 * XREFs of PspLockJobAssignment @ 0x140546030
 * Callers:
 *     PspLockJobChain @ 0x140545F4C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14054C5A0 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     <none>
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
