/*
 * XREFs of ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01B6C7C
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01B6E5C (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 */

void __fastcall Feedback::MoveCursor(Feedback *this, const struct tagPOINT *a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = 0;
  GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)this, *((_DWORD *)this + 1), 8);
  EnterCrit(0LL, 1LL);
  v4 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v4 )
    v3 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 128LL);
  if ( MonitorFromPoint(*(_QWORD *)this, 0x20u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)this, 0x20u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v3);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
}
