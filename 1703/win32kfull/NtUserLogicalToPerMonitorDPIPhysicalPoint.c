/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0138C50
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00F35E0 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rdx
  int MonitorFlagsFromWindow; // eax
  int v11; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v11 = 0;
      goto LABEL_15;
    }
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v8 = (unsigned __int64 *)W32UserProbeAddress;
  *v8 = *v8;
  v14 = *a2;
  if ( !a1 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    MonitorFlagsFromWindow = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) != 0
    || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == (*(_DWORD *)(a1 + 368) & 0xF) )
  {
    v9 = v14;
  }
  else
  {
    TransformPointBetweenCoordinateSpaces(&v15, &v14, a1, 0LL);
    v9 = v15;
  }
  if ( DCEPtInRect((_DWORD *)(a1 + 128), v9) )
  {
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
LABEL_12:
    LogicalToPhysicalDPIPoint(&v14, &v14, MonitorFlagsFromWindow | 0x100u, 0LL);
    v11 = 1;
    goto LABEL_13;
  }
  v11 = 0;
LABEL_13:
  if ( v11 == 1 )
    *a2 = v14;
LABEL_15:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v11;
}
