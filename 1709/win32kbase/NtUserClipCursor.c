/*
 * XREFs of NtUserClipCursor @ 0x1C00A2040
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0129BE0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10[5]; // [rsp+28h] [rbp-60h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v10[3] = a1;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v9);
  v12 = (struct tagRECT)0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v12 = *v1;
      LODWORD(v10[0]) = (v12.right + v12.left) / 2;
      HIDWORD(v10[0]) = (v12.top + v12.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v10[0] = GuessMonitorOverrideForCoordinateConversions(v10[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v12, &v12, CurrentThreadDpiAwarenessContext, v10);
      v11 = v12;
      CCursorClip::SetClip((CCursorClip *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, &v11);
    }
    else
    {
      CCursorClip::ClearClip((struct tagRECT *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
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
