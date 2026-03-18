/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x1407CACA0
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x140717AE0 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // bl
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *v9; // rcx
  PVOID *v10; // rdx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v11; // rax
  PVOID *v12; // rdx

  v1 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  v4 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v8 = v4;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v4, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
  v10 = &WheapInUsePageOfflineNotifyList;
  if ( WheapInUsePageOfflineNotifyList != &WheapInUsePageOfflineNotifyList )
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( Callback == v9[2] )
        break;
      v9 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*v9;
      if ( (char *)v11 == (char *)&WheapInUsePageOfflineNotifyList )
        goto LABEL_10;
    }
    if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)v11 + 1) != v9 || (v12 = (PVOID *)v9[1], *v12 != v9) )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    ExFreePoolWithTag(v9, 0x61656857u);
    v1 = 1;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, (__int64)v10, v5, v6);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return v1 == 0 ? 0xC0000008 : 0;
}
