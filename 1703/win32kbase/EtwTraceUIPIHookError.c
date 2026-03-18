/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C00DAFE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00D976C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00D9810 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIHookError(
        __int64 a1,
        char a2,
        struct tagTHREADINFO *a3,
        struct tagTHREADINFO *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD v11[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x4000000000004000LL) != 0
    && (qword_1C0186D88 & 0x4000000000004000LL) == qword_1C0186D88 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v11, 2, a3, 0LL, a4, 0LL);
    HIDWORD(v11[4]) = a5;
    HIDWORD(v11[5]) = a6;
    v11[6] = a7;
    v11[7] = a8;
    LOBYTE(v11[5]) = a2;
    EtwpTraceUIPIError(&UIPIHookEvent, (ULONGLONG)v11, 0x40u);
  }
}
