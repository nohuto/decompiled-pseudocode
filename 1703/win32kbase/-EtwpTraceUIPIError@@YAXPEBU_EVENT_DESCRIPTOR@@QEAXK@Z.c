/*
 * XREFs of ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00D9810
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0071970 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIMsgError @ 0x1C0087AC0 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPISystemError @ 0x1C0088050 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIInputError @ 0x1C008B6E0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C008DEA0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00DAF00 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00DAFE0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceUIPIError(PCEVENT_DESCRIPTOR EventDescriptor, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  v3.Ptr = a2;
  v3.Size = a3;
  v3.Reserved = 0;
  EtwWrite(Microsoft_Windows_Win32kHandle, EventDescriptor, &W32kControlGuid, 1u, &v3);
}
