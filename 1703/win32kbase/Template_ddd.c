/*
 * XREFs of Template_ddd @ 0x1C00DCC0C
 * Callers:
 *     EtwTraceFocusedProcessChange @ 0x1C008A610 (EtwTraceFocusedProcessChange.c)
 *     EtwTraceGreMovePointerEnd @ 0x1C008E730 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceGreMovePointerBegin @ 0x1C008E750 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1C00D98A0 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00D98E0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00D9940 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1C00D9980 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00D99C0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceCursorSize @ 0x1C00D9C30 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1C00D9E00 (EtwTraceEndPointerFrameBuildPartial.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00D9E40 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C00D9EA0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C00D9EE0 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C00D9F20 (EtwTraceEndPointerFrameMessageGeneration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_ddd(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (ULONGLONG)&v12;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v9 = 4LL;
  v10 = &a6;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 3u, &UserData);
}
