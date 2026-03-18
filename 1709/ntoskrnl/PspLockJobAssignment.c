/*
 * XREFs of PspLockJobAssignment @ 0x14050DBF4
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x14050B974 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspLockJobChain @ 0x14050DF38 (PspLockJobChain.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
