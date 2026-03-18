/*
 * XREFs of ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB4A0
 * Callers:
 *     EtwTraceUIPISystemError @ 0x1C0013C10 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIInputError @ 0x1C0059990 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0067454 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIMsgError @ 0x1C006A2A0 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00AD0C0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C00AD1A0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHookError @ 0x1C00AD2B0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceUIPIError(PCEVENT_DESCRIPTOR EventDescriptor, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  v3.Ptr = a2;
  v3.Size = a3;
  v3.Reserved = 0;
  EtwWrite(W32kControlGuid_Context, EventDescriptor, &W32kControlGuid, 1u, &v3);
}
