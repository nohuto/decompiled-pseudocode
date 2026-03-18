/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C001EDD0
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0035B50 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F06C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001F0A0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C001F160 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  unsigned int NotificationTokens; // edi
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0;
  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v11, (SfmTokenArray *)((char *)gpSfmState + 32));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(gpSfmState, a1, &v9, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
    v3 = v9;
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
    PsLeavePriorityRegion();
  }
  return NotificationTokens;
}
