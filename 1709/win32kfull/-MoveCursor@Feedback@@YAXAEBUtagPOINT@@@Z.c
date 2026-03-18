/*
 * XREFs of ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01BBFD8
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BC1B8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     UpdateCursorImageForMonitorDpi @ 0x1C0053368 (UpdateCursorImageForMonitorDpi.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 */

void __fastcall Feedback::MoveCursor(Feedback *this, const struct tagPOINT *a2)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0;
  GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)this, *((_DWORD *)this + 1), 8);
  EnterCrit(0LL, 1LL);
  v4 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v4 )
    v3 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 64LL);
  if ( MonitorFromPoint(*(_QWORD *)this, 0, 0x12u) )
    ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)this, 0, 0x12u);
  else
    ghCursorMonitor = 0LL;
  UpdateCursorImageForMonitorDpi(v3);
  UserSessionSwitchLeaveCrit(v6, v5);
}
