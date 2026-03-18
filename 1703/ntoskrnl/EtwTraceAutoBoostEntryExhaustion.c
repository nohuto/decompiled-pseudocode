/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14025328C
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140006FD0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400F01E0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140111DC0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     KeAcquireGuardedMutex @ 0x140111ED0 (KeAcquireGuardedMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x140112010 (FsRtlAcquireHeaderMutex.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlReleaseEofLock @ 0x14011C930 (FsRtlReleaseEofLock.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14011CE80 (ExTryAcquirePushLockExclusiveEx.c)
 *     FsRtlAcquireEofLock @ 0x14011D010 (FsRtlAcquireEofLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1600);
  v4 = a2;
  v5 = v2;
  v6 = &v4;
  v8 = 0;
  v7 = 16;
  return EtwTraceKernelEvent((int)&v6, 1, 0x20000200u, 1348, 5249538);
}
