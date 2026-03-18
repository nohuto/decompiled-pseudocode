/*
 * XREFs of PopClearTransitionCheckpoints @ 0x1406F4FFC
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void PopClearTransitionCheckpoints()
{
  PVOID v0; // rcx
  __int64 v1; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
  while ( 1 )
  {
    v0 = PopTransitionCheckpoints;
    if ( PopTransitionCheckpoints == &PopTransitionCheckpoints )
      break;
    if ( *((PVOID **)PopTransitionCheckpoints + 1) != &PopTransitionCheckpoints
      || (v1 = *(_QWORD *)PopTransitionCheckpoints,
          *(PVOID *)(*(_QWORD *)PopTransitionCheckpoints + 8LL) != PopTransitionCheckpoints) )
    {
      __fastfail(3u);
    }
    PopTransitionCheckpoints = *(PVOID *)PopTransitionCheckpoints;
    *(_QWORD *)(v1 + 8) = &PopTransitionCheckpoints;
    ExFreePoolWithTag(v0, 0x50434B50u);
  }
  PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
}
