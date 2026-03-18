/*
 * XREFs of NtUserLockCursor @ 0x1C005D750
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0059390 (LogicalToPhysicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C005D7F0 (ApiSetCheckCursorClipAccess.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C005DA50 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C007DFA0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0129ADC (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentThreadDpiAwarenessContext; // rbx
  CCursorClip *v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+60h] [rbp-28h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v10);
  v13 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL, 0LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v13 = *a1;
      LODWORD(v11) = (v13.right + v13.left) / 2;
      HIDWORD(v11) = (v13.bottom + v13.top) / 2;
      CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
      v11 = GuessMonitorOverrideForCoordinateConversions(v11, CurrentThreadDpiAwarenessContext, 0LL);
      LogicalToPhysicalDPIRect(&v13, &v13, CurrentThreadDpiAwarenessContext, &v11);
      v12 = v13;
      CCursorClip::LockCursor(v9, &v12);
    }
    else
    {
      CCursorClip::ClearClip((CCursorClip *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
