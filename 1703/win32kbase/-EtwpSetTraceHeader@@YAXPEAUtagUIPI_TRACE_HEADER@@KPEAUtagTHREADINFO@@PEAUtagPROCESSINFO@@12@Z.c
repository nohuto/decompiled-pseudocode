/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00D976C
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0071970 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIMsgError @ 0x1C0087AC0 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPISystemError @ 0x1C0088050 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIInputError @ 0x1C008B6E0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C008DEA0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00DAF00 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00DAFE0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     ?EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D97A8 (-EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall EtwpSetTraceHeader(
        struct tagUIPI_TRACE_HEADER *a1,
        int a2,
        struct tagTHREADINFO *a3,
        struct tagPROCESSINFO *a4,
        struct tagTHREADINFO *a5,
        struct tagPROCESSINFO *a6)
{
  *(_DWORD *)a1 = a2;
  EtwpSetUIPIProcessInfo((struct tagUIPI_TRACE_HEADER *)((char *)a1 + 4), a3, a4);
  EtwpSetUIPIProcessInfo((struct tagUIPI_TRACE_HEADER *)((char *)a1 + 20), a5, a6);
}
