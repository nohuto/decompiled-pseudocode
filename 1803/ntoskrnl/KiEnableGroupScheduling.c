/*
 * XREFs of KiEnableGroupScheduling @ 0x140184D0C
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1400A7684 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x140184DDC (KeUpdateGroupSchedulingConstants.c)
 */

__int64 KiEnableGroupScheduling()
{
  __int64 v0; // rcx
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    LOBYTE(v0) = 1;
    qword_1403B4478 = (__int64)&KiSchedulingGroupList;
    KiSchedulingGroupList = (__int64)&KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants(v0);
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v1 = KiProcessorBlock;
      v2 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v3 = *v1++;
        *(_QWORD *)(v3 + 24336) = v3 + 24328;
        *(_QWORD *)(v3 + 24328) = v3 + 24328;
        *(_DWORD *)(v3 + 216) = 424 * *(_DWORD *)(v3 + 36) + 128;
        *(_QWORD *)(v3 + 23520) = KiGenerationEndTick;
        --v2;
      }
      while ( v2 );
    }
    KiGroupSchedulingEnabled = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
