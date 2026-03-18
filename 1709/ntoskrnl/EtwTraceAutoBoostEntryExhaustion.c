/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C
 * Callers:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     MiInitializeInPageSupport @ 0x14002AA00 (MiInitializeInPageSupport.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     FsRtlAcquireHeaderMutex @ 0x140083FE0 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140084450 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     KeAcquireGuardedMutex @ 0x1400BA8B0 (KeAcquireGuardedMutex.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400BB0F0 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1401003B0 (ExTryAcquirePushLockSharedEx.c)
 *     FsRtlAcquireEofLock @ 0x1401006C0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x140100BE0 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1600);
  v3 = *(_QWORD *)(a1 + 544);
  v4 = a2;
  v5 = v2;
  v6 = &v4;
  v8 = 0;
  v7 = 16;
  EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 1728), (__int64)&v6, 1u, 0x20000200u, 0x544u, 0x501A02u);
}
