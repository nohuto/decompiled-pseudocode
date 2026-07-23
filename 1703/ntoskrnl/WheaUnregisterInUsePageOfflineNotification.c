/*
 * XREFs of WheaUnregisterInUsePageOfflineNotification @ 0x140723590
 * Callers:
 *     HvlUnregisterWheaErrorNotification @ 0x140687600 (HvlUnregisterWheaErrorNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall WheaUnregisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback)
{
  char v1; // bl
  PRTL_BALANCED_NODE v4; // rax
  signed __int8 v5; // cf
  PRTL_BALANCED_NODE v6; // rdi
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY *i; // rcx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY v8; // rdx
  PFN_IN_USE_PAGE_OFFLINE_NOTIFY **v9; // rax

  v1 = 0;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return -1073741823;
  v4 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v4, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  for ( i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)WheapInUsePageOfflineNotifyList;
        i != (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)&WheapInUsePageOfflineNotifyList;
        i = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)*i )
  {
    if ( Callback == i[2] )
    {
      v8 = *i;
      v9 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)i[1];
      if ( *((PFN_IN_USE_PAGE_OFFLINE_NOTIFY **)*i + 1) != i || *v9 != i )
        __fastfail(3u);
      *v9 = (PFN_IN_USE_PAGE_OFFLINE_NOTIFY *)v8;
      *((_QWORD *)v8 + 1) = v9;
      ExFreePoolWithTag(i, 0x61656857u);
      v1 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return v1 == 0 ? 0xC0000008 : 0;
}
