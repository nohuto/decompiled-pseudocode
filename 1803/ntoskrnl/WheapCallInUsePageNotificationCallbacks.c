/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x1407CAEF8
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1407CAD9C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, char a3)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rbx
  PVOID *i; // rbx

  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v12 = v7;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  for ( i = (PVOID *)WheapInUsePageOfflineNotifyList; i != &WheapInUsePageOfflineNotifyList; i = (PVOID *)*i )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    ((void (__fastcall *)(__int64, __int64, __int64, PVOID))i[2])(a1, v8, v9, i[3]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0LL;
}
