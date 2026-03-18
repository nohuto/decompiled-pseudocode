/*
 * XREFs of ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00DFAF4
 * Callers:
 *     EtwTraceUIPIInputError @ 0x1C000EFC0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C008A4F8 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPISystemError @ 0x1C008C3F0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIMsgError @ 0x1C008C460 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C0094900 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00E1A50 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00E1B30 (EtwTraceUIPIHookError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceUIPIError(PCEVENT_DESCRIPTOR EventDescriptor, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  v3.Ptr = a2;
  v3.Size = a3;
  v3.Reserved = 0;
  EtwWrite(W32kControlGuid_Context, EventDescriptor, &W32kControlGuid, 1u, &v3);
}
