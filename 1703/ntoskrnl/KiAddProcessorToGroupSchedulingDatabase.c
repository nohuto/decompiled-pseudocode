/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x140419348
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     KiAddProcessorToGroupSchedulingList @ 0x1402061A4 (KiAddProcessorToGroupSchedulingList.c)
 *     KiInitializeProcessorGroupSchedulingData @ 0x14020623C (KiInitializeProcessorGroupSchedulingData.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF

  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( *(_QWORD *)(a1 + 48) );
    }
    KiAddProcessorToGroupSchedulingList(a1, (_QWORD **)&KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
