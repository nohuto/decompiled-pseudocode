/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C
 * Callers:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     _GetCursorInfo @ 0x1C00532C0 (_GetCursorInfo.c)
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C00A0450 (_ScheduleDispatchNotification.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     xxxGetCursorPos @ 0x1C00A0860 (xxxGetCursorPos.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(unsigned int a1)
{
  __int16 v1; // dx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = (a1 >> 8) & 0x1FF;
  if ( !v1 )
    return *(_QWORD *)(gpsi + 4944LL);
  if ( v1 == *(_WORD *)(gpsi + 4960LL) )
    return *(_QWORD *)(gpsi + 4952LL);
  PhysicalToLogicalDPIPoint(&v3, gpsi + 4944LL, a1, 0LL);
  return v3;
}
