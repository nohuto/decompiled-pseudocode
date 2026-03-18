/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C00DAF00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00D976C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00D9810 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIClipboardError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3, __int64 a4)
{
  _QWORD v8[6]; // [rsp+38h] [rbp-60h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x4000000000004000LL) != 0
    && (qword_1C0186D88 & 0x4000000000004000LL) == qword_1C0186D88 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v8, 6, 0LL, a1, 0LL, a2);
    HIDWORD(v8[4]) = a3;
    v8[5] = a4;
    EtwpTraceUIPIError(&UIPIClipboardEvent, (ULONGLONG)v8, 0x30u);
  }
}
