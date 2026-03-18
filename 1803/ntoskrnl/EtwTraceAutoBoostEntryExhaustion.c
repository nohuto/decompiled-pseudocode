/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854
 * Callers:
 *     KeAcquireGuardedMutex @ 0x140007950 (KeAcquireGuardedMutex.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x14007B940 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlAcquireEofLock @ 0x14007C1F0 (FsRtlAcquireEofLock.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14007C6A0 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400A2630 (ExTryAcquirePushLockSharedEx.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400A56E0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     FsRtlAcquireHeaderMutex @ 0x140103650 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140103AA0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiInitializeInPageSupport @ 0x140127F00 (MiInitializeInPageSupport.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14003EF90 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1600);
  v3 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v2;
  v7 = &v5;
  v9 = 0;
  v8 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 1728), (int)&v7, 1, 0x20000200u, 1348, 5249538);
}
