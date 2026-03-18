/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01DE050
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00F35E0 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 *v8; // rdx
  int MonitorFlagsFromWindow; // eax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v11; // eax
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_15;
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v8 = (unsigned __int64 *)W32UserProbeAddress;
  *v8 = *v8;
  v13 = *a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0 )
    {
      W32GetCurrentThreadDpiAwarenessContext();
    }
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
    PhysicalToLogicalDPIPoint(&v13, &v13, MonitorFlagsFromWindow | 0x100u, 0LL);
    if ( !DCEPtInRect((_DWORD *)(a1 + 128), v13) )
    {
      LODWORD(a1) = 0;
      goto LABEL_13;
    }
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v11 = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    PhysicalToLogicalDPIPoint(&v13, &v13, v11 | 0x100u, 0LL);
    v6 = v13;
  }
  LODWORD(a1) = 1;
LABEL_13:
  if ( (_DWORD)a1 )
  {
    *a2 = v6;
    LODWORD(a1) = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return (int)a1;
}
