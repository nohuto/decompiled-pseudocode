/*
 * XREFs of MmGetNextPartition @ 0x14003A82C
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x14003A7F0 (MmSetTrimWhileAgingState.c)
 *     MiFinishResume @ 0x140138A60 (MiFinishResume.c)
 *     MmFlushAllPagesEx @ 0x14013F244 (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x140215A74 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140215BB0 (MmTrimFilePagesFromWorkingSets.c)
 *     MmEnablePeriodicAccessClearing @ 0x140404DEC (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x14045B610 (MmSetMinimumAgeRate.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140077298 (MiPartitionObjectToPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall MmGetNextPartition(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  if ( BugCheckParameter2 )
    v3 = *(__int64 **)(MiPartitionObjectToPartition(BugCheckParameter2) + 32);
  else
    v3 = (__int64 *)qword_14036C8C8;
  while ( v3 != &qword_14036C8C8 )
  {
    v2 = v3[21];
    if ( v2 )
    {
      if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v3[21], 1953261124LL) )
        break;
    }
    v3 = (__int64 *)*v3;
    v2 = 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( BugCheckParameter2 )
    ObDereferenceObjectDeferDelete((PVOID)BugCheckParameter2);
  return v2;
}
