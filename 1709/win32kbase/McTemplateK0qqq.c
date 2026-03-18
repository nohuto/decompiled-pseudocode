/*
 * XREFs of McTemplateK0qqq @ 0x1C00E3664
 * Callers:
 *     EtwTraceFocusedProcessChange @ 0x1C0090710 (EtwTraceFocusedProcessChange.c)
 *     EtwTraceGreMovePointerEnd @ 0x1C00966C0 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceGreMovePointerBegin @ 0x1C00966E0 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1C00DFC00 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00DFC40 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00DFCA0 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1C00DFCE0 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C00DFD20 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceCursorSize @ 0x1C00DFFA0 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1C00E0130 (EtwTraceEndPointerFrameBuildPartial.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00E0170 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C00E01D0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C00E0210 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C00E0250 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C00ED73C (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

ULONG __stdcall McTemplateK0qqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const unsigned int *p_Arg2; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  unsigned int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = Arg0;
  v8 = &v14;
  v9 = 4LL;
  p_Arg1 = &Arg1;
  p_Arg2 = &Arg2;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWriteKM((__int64)Context, Descriptor, &W32kControlGuid, 4u, &v7);
}
