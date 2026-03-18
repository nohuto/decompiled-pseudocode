/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x140484FEC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAddProcessorToGroupSchedulingList @ 0x14024AA78 (KiAddProcessorToGroupSchedulingList.c)
 *     KiInitializeProcessorGroupSchedulingData @ 0x14024AB10 (KiInitializeProcessorGroupSchedulingData.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v6);
      while ( *(_QWORD *)(a1 + 48) );
    }
    KiAddProcessorToGroupSchedulingList(a1, (_QWORD **)&KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
