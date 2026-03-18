/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C007DAD0
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0029990 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DE60 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  unsigned int NotificationTokens; // edi
  __int64 v8; // rcx
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF
  char v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0;
  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState");
  if ( UserIsCurrentProcessDwm() )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (SfmTokenArray *)((char *)gpSfmState + 32));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(gpSfmState, a1, &v10, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
    v3 = v10;
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState");
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v8);
  }
  return NotificationTokens;
}
