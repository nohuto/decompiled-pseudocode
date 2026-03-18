/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288
 * Callers:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxGetCursorPos @ 0x1C004D120 (xxxGetCursorPos.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     _ScheduleDispatchNotification @ 0x1C004D2C0 (_ScheduleDispatchNotification.c)
 *     _GetCursorInfo @ 0x1C00BD5C0 (_GetCursorInfo.c)
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall LogicalCursorPosFromDpiAwarenessContext(char a1)
{
  int v1; // ecx

  v1 = a1 & 0xF;
  if ( !v1 )
    return *(struct tagPOINT *)(gpsi + 5344LL);
  if ( v1 == 1 )
    return *(struct tagPOINT *)(gpsi + 5352LL);
  return *(struct tagPOINT *)(gpsi + 5368LL);
}
