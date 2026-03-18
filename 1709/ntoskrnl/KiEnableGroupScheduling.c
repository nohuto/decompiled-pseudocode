/*
 * XREFs of KiEnableGroupScheduling @ 0x140157434
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400D17B8 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x140157500 (KeUpdateGroupSchedulingConstants.c)
 */

__int64 KiEnableGroupScheduling()
{
  __int64 *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    qword_140371218 = (__int64)&KiSchedulingGroupList;
    KiSchedulingGroupList = (__int64)&KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants();
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v0 = KiProcessorBlock;
      v1 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v2 = *v0++;
        *(_QWORD *)(v2 + 24336) = v2 + 24328;
        *(_QWORD *)(v2 + 24328) = v2 + 24328;
        *(_DWORD *)(v2 + 216) = 424 * *(_DWORD *)(v2 + 36) + 128;
        *(_QWORD *)(v2 + 23520) = KiGenerationEndTick;
        --v1;
      }
      while ( v1 );
    }
    KiGroupSchedulingEnabled = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
