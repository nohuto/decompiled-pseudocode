/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C00E68A0
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C00DFD90 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     HMFindEntry @ 0x1C00DE7D0 (HMFindEntry.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00E6FE4 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  char *v6; // rax
  int v7; // edx
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      22,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&gHmLock);
    v9 = a1;
    v11 = v4;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v6 = HMFindEntry((__int64)&v9, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    if ( v6 )
    {
      v2 = 1;
      if ( (v6[25] & 1) == 0 )
        HMDestroyUnlockedObject(v6);
    }
    else
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qqq(
        gBaseLog,
        v7,
        15,
        23,
        (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids,
        CurrentProcessWin32Process,
        v11,
        a1);
    }
    qword_1C018E840 = 0LL;
    ExReleasePushLockExclusiveEx(&gHmLock, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    WPP_RECORDER_SF_q(
      gBaseLog,
      5u,
      0xFu,
      0x18u,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids,
      ThreadWin32Thread);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      25,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
LABEL_13:
  qword_1C018E830 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
