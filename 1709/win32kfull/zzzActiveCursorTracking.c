/*
 * XREFs of zzzActiveCursorTracking @ 0x1C01C1368
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     GetActiveTrackPwnd @ 0x1C01C0854 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall zzzActiveCursorTracking(struct tagWND *a1)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edi
  unsigned __int64 v5; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+30h] BYREF

  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (result = CInputGlobals::GetLastInputType(gpInputGlobals), (_DWORD)result == 3) )
  {
    v5 = LogicalQmsgCursorPos((__int64)a1, 0LL);
    result = PtInRect((_DWORD *)a1 + 32, v5);
    if ( !(_DWORD)result && (!gspwndCursor || (result = GetActiveTrackPwnd((struct tagWND *)gspwndCursor, 0LL)) != 0) )
    {
      v3 = *((_DWORD *)a1 + 33);
      LODWORD(v5) = *((_DWORD *)a1 + 32) + (*((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32)) / 2;
      HIDWORD(v5) = v3 + (*((_DWORD *)a1 + 35) - v3) / 2;
      v6 = v5;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
        LogicalToPhysicalDPIPoint(&v6, &v5, *((unsigned int *)a1 + 92), 0LL);
      CCursorClip::BoundPoint(gpCursorClip, v6, 0LL, &v6);
      v5 = v6;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
        PhysicalToLogicalDPIPoint(&v5, &v6, *((unsigned int *)a1 + 92), 0LL);
      result = PtInRect((_DWORD *)a1 + 32, v5);
      if ( (_DWORD)result )
      {
        v4 = *((_BYTE *)a1 + 71) & 0x10;
        if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
          SetVisible(a1, v4 + 5);
        result = zzzInternalSetCursorPos(v6, HIDWORD(v6), 2, 0);
        if ( !v4 )
          return SetVisible(a1, 0);
      }
    }
  }
  return result;
}
