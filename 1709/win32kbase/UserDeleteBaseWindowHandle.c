/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C00EBF10
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C00E6B50 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     HMDestroyUnlockedObject @ 0x1C009E950 (HMDestroyUnlockedObject.c)
 *     HMFindEntry @ 0x1C00E4D90 (HMFindEntry.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00EC5A4 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char *v7; // rax
  int v8; // edx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x16u,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1184) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&gHmLock);
    v10 = a1;
    v12 = ThreadWin32Thread;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6);
    v7 = HMFindEntry((__int64)&v10, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    if ( v7 )
    {
      v2 = 1;
      if ( (v7[25] & 1) == 0 )
        HMDestroyUnlockedObject(v7);
    }
    else
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qqq(
        gBaseLog,
        v8,
        15,
        23,
        (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids,
        CurrentProcessWin32Process,
        v12,
        a1);
    }
    qword_1C0193700 = 0LL;
    ExReleasePushLockExclusiveEx(&gHmLock, 0LL);
    KeLeaveCriticalRegion();
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_q(
      gBaseLog,
      5u,
      0xFu,
      0x18u,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids,
      ThreadWin32Thread);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x19u,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids);
  qword_1C01936F0 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
