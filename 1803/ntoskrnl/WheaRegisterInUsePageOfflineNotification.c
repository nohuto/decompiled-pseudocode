/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x1407CAB20
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x140717AA0 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rdi
  _QWORD *v13; // rax

  if ( !WheapInUsePageOfflineNotifyInit )
    return -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x61656857u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag[2] = Callback;
  PoolWithTag[3] = Context;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapInUsePageOfflineNotifyLock, 0LL, 0);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v12 = v7;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = (_QWORD *)qword_1403E9308;
  if ( *(PVOID **)qword_1403E9308 != &WheapInUsePageOfflineNotifyList )
    __fastfail(3u);
  v6[1] = qword_1403E9308;
  *v6 = &WheapInUsePageOfflineNotifyList;
  *v13 = v6;
  qword_1403E9308 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, v8, v9, v10);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0;
}
