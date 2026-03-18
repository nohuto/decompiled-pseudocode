/*
 * XREFs of NtUserGetClipCursor @ 0x1C00E7BA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00595A0 (PhysicalToLogicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C005D7F0 (ApiSetCheckCursorClipAccess.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C007DFA0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00A2170 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD *v10; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  _BYTE v13[16]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v17; // [rsp+58h] [rbp-20h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v13, a2, a3, a4);
  v5 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *v10 = *v10;
    CCursorClip::GetClip((struct tagRECT *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, &v17);
    LODWORD(v15) = (v17.left + v17.right) / 2;
    HIDWORD(v15) = (v17.top + v17.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v16 = GuessMonitorOverrideForCoordinateConversions(v15, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v17, CurrentThreadDpiAwarenessContext, &v16);
    v5 = 1;
    v14 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
