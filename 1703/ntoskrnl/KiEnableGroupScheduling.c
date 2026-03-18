/*
 * XREFs of KiEnableGroupScheduling @ 0x140165384
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14001C9F8 (KeInsertSchedulingGroup.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeUpdateGroupSchedulingConstants @ 0x140165450 (KeUpdateGroupSchedulingConstants.c)
 */

__int64 KiEnableGroupScheduling()
{
  __int64 v0; // r9
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( !KiGroupSchedulingEnabled )
  {
    qword_140356708 = (__int64)&KiSchedulingGroupList;
    KiSchedulingGroupList = (__int64)&KiSchedulingGroupList;
    KeUpdateGroupSchedulingConstants();
    KiGenerationEndTick = MEMORY[0xFFFFF78000000320] + (unsigned int)KiGenerationTicks;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v0 = KiGenerationEndTick;
      v1 = KiProcessorBlock;
      v2 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v3 = *v1++;
        *(_QWORD *)(v3 + 24416) = v3 + 24408;
        *(_QWORD *)(v3 + 24408) = v3 + 24408;
        v4 = 424 * *(_DWORD *)(v3 + 36);
        *(_QWORD *)(v3 + 23520) = v0;
        *(_DWORD *)(v3 + 216) = v4 + 128;
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
