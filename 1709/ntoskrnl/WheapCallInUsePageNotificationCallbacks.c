/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x140763278
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140763138 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, char a3)
{
  PRTL_BALANCED_NODE v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int8 v10; // cf
  PRTL_BALANCED_NODE v11; // rbx
  __int64 i; // rbx

  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      &WheapInUsePageOfflineNotifyLock,
      (__int64)v7,
      (__int16 *)&WheapInUsePageOfflineNotifyLock);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  for ( i = WheapInUsePageOfflineNotifyList; (__int64 *)i != &WheapInUsePageOfflineNotifyList; i = *(_QWORD *)i )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(i + 16))(a1, v8, v9, *(_QWORD *)(i + 24));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0LL;
}
