/*
 * XREFs of zzzActiveCursorTracking @ 0x1C01BD448
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     GetActiveTrackPwnd @ 0x1C01BC974 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall zzzActiveCursorTracking(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  unsigned int MonitorFlagsFromWindow; // eax
  unsigned int v5; // eax
  int v6; // edi
  unsigned __int64 v7; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+30h] BYREF

  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (result = CInputGlobals::GetLastInputType(gpInputGlobals), (_DWORD)result == 3) )
  {
    v7 = (unsigned __int64)LogicalQmsgCursorPos(a1, 0LL);
    result = PtInRect((_DWORD *)(a1 + 128), v7);
    if ( !(_DWORD)result && (!gspwndCursor || (result = GetActiveTrackPwnd((struct tagWND *)gspwndCursor, 0LL)) != 0) )
    {
      v3 = *(_DWORD *)(a1 + 132);
      LODWORD(v7) = *(_DWORD *)(a1 + 128) + (*(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128)) / 2;
      HIDWORD(v7) = v3 + (*(_DWORD *)(a1 + 140) - v3) / 2;
      v8 = v7;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
        LogicalToPhysicalDPIPoint(&v8, &v7, MonitorFlagsFromWindow, 0LL);
      }
      CCursorClip::BoundPoint(gpCursorClip, v8, 0LL, &v8);
      v7 = v8;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v5 = GetMonitorFlagsFromWindow(a1);
        PhysicalToLogicalDPIPoint(&v7, &v8, v5, 0LL);
      }
      result = PtInRect((_DWORD *)(a1 + 128), v7);
      if ( (_DWORD)result )
      {
        v6 = *(_BYTE *)(a1 + 71) & 0x10;
        if ( (*(_BYTE *)(a1 + 71) & 0x10) == 0 )
          SetVisible((_QWORD *)a1, v6 + 5);
        result = zzzInternalSetCursorPos(v8, HIDWORD(v8), 2);
        if ( !v6 )
          return SetVisible((_QWORD *)a1, 0);
      }
    }
  }
  return result;
}
