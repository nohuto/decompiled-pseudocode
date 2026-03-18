/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1C008DEA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00D976C (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00D9810 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIEventHookError(__int64 a1, struct tagTHREADINFO *a2, struct tagTHREADINFO *a3)
{
  _QWORD v6[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v6, 0, 0x48uLL);
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x4000000000004000LL) != 0
    && (qword_1C0186D88 & 0x4000000000004000LL) == qword_1C0186D88 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 3u, a2, 0LL, a3, 0LL);
    HIDWORD(v6[4]) = *(_DWORD *)(a1 + 16);
    v6[5] = *(_QWORD *)(a1 + 24);
    v6[6] = *(_QWORD *)(a1 + 32);
    v6[7] = *(_QWORD *)(a1 + 40);
    LODWORD(v6[8]) = *(_DWORD *)(a1 + 48);
    EtwpTraceUIPIError(&UIPIEventHookEvent, v6, 0x48u);
  }
}
