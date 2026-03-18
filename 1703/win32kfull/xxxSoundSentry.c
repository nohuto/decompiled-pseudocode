/*
 * XREFs of xxxSoundSentry @ 0x1C0119A28
 * Callers:
 *     NtUserSoundSentry @ 0x1C0008240 (NtUserSoundSentry.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C0137A80 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C019634C (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C01963EC (UserBeep.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 *     GreTransformPoints @ 0x1C00E53AC (GreTransformPoints.c)
 *     GreEnableAppContainerRestriction @ 0x1C010D120 (GreEnableAppContainerRestriction.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _GetWindowRect @ 0x1C02392D4 (_GetWindowRect.c)
 */

__int64 xxxSoundSentry()
{
  struct tagSOUNDSENTRYW *v0; // rcx
  __int64 v1; // rcx
  __int64 v3; // rdi
  signed int v4; // r8d
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  HDC DCEx; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 DesktopWindow; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v21[3]; // [rsp+30h] [rbp-30h] BYREF
  int v22[4]; // [rsp+48h] [rbp-18h] BYREF

  v0 = gSoundSentry;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v1 = 50LL;
LABEL_3:
    UserSetLastError(v1);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v3 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v3 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          v4 = *(_DWORD *)(gpsi + 5392LL);
          if ( v4 < 1 )
            v4 = 1200;
          ghwndSoundSentry = *(HWND *)v3;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v4, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v1 = 170LL;
            goto LABEL_3;
          }
          v0 = gSoundSentry;
        }
        v5 = *((_DWORD *)v0 + 8) - 1;
        if ( !v5 )
        {
          v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v21;
          v21[1] = v3;
          ++*(_DWORD *)(v3 + 8);
          xxxFlashWindow((struct tagWND *)v3, 3u, 0);
          ThreadUnlock1(v20, v19);
          return 1LL;
        }
        v6 = v5 - 1;
        if ( !v6 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v3) )
          {
            *(_OWORD *)v22 = *(_OWORD *)(v3 + 128);
            MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v3);
            LogicalToPhysicalDPIRect(v22, v22, MonitorFlagsFromWindow, 0LL);
            grcScreenFlash = *(struct tagRECT *)v22;
            DesktopWindow = GetDesktopWindow(v3);
            DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
            GreEnableAppContainerRestriction(0);
            v16 = gdwInAtomicOperation;
            if ( gdwInAtomicOperation )
            {
              v13 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            goto LABEL_20;
          }
          DCEx = (HDC)_GetDCEx(v3, 0LL, 65537LL);
          GetWindowRect(v3, v22);
          v22[2] -= v22[0];
          v22[3] -= v22[1];
          v22[0] = 0;
          v22[1] = 0;
          GreTransformPoints(DCEx, (struct _POINTL *)v22, (struct _POINTL *)v22, 2, 0);
          GreEnableAppContainerRestriction(0);
LABEL_26:
          NtGdiPatBlt(DCEx, v22[0], v22[1], v22[2] - v22[0], v22[3] - v22[1], 5570569);
          goto LABEL_27;
        }
        if ( v6 == 1 )
        {
          v7 = GetDesktopWindow(v3);
          v22[1] = 0;
          v22[0] = 0;
          DCEx = (HDC)_GetDCEx(v7, 0LL, 3LL);
          v22[2] = GetDwmDependentMetric(78LL, 0LL, v9, v10);
          v22[3] = GetDwmDependentMetric(79LL, 0LL, v11, v12);
          GreEnableAppContainerRestriction(0);
          if ( (unsigned int)IsWindowDesktopComposed(v3) )
          {
            v16 = gdwInAtomicOperation;
            if ( gdwInAtomicOperation )
            {
              v13 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
LABEL_20:
            UserSessionSwitchLeaveCrit(v13, v16, v14, v15);
            NtGdiPatBlt(DCEx, v22[0], v22[1], v22[2] - v22[0], v22[3] - v22[1], 5570569);
            EnterCrit(0LL, 1LL);
LABEL_27:
            GreEnableAppContainerRestriction(1);
            _ReleaseDC(DCEx);
            return 1LL;
          }
          goto LABEL_26;
        }
      }
    }
  }
  return 1LL;
}
