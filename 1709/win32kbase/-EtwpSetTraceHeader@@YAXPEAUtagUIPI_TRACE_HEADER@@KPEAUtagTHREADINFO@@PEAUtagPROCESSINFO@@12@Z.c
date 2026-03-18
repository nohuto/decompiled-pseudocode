/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00DFA50
 * Callers:
 *     EtwTraceUIPIInputError @ 0x1C000EFC0 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C008A4F8 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPISystemError @ 0x1C008C3F0 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIMsgError @ 0x1C008C460 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C0094900 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00E1A50 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIHookError @ 0x1C00E1B30 (EtwTraceUIPIHookError.c)
 * Callees:
 *     ?EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z @ 0x1C00DFA8C (-EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z.c)
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
