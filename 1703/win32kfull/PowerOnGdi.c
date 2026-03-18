/*
 * XREFs of PowerOnGdi @ 0x1C013B470
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 *     ProcessDelayedSdc @ 0x1C013B550 (ProcessDelayedSdc.c)
 *     xxxUserResetDisplayDevice @ 0x1C013B580 (xxxUserResetDisplayDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PowerOnGdi(__int64 a1, int a2, unsigned int a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL)) )
  {
    DrvDxgkLogCodePointPacket(11LL, gbFullScreen == 1, gulDelayedSwitchAction);
    EtwTracePowerOnGdiBegin(a3);
    gbGDIOn = 1;
    SafeEnableMDEV(2LL);
    if ( gbFullScreen == 1 && gspwndFullScreen )
    {
      v7[0] = &gspwndFullScreen;
      v7[1] = GetDesktopWindow((__int64)gspwndFullScreen);
      HMAssignmentLock(v7);
      gbFullScreen = 2;
      xxxMakeWindowForegroundWithState(0LL, 1);
    }
    DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL), 1LL);
    xxxUserResetDisplayDevice();
    if ( a2 )
      ProcessDelayedSdc(a1);
  }
  TransitionCursorSuppressionState(2, 0);
  return EtwTracePowerOnGdiEnd(a3);
}
