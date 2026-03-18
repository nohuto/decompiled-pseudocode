/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB3FC
 * Callers:
 *     EtwTraceUIPISystemError @ 0x1C0013C10 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIInputError @ 0x1C0059990 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0067454 (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIMsgError @ 0x1C006A2A0 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C00AD0C0 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C00AD1A0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHookError @ 0x1C00AD2B0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     ?EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z @ 0x1C00AB438 (-EtwpSetUIPIProcessInfo@@YAXPEAUtagUIPI_PROCESS_INFO@@PEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@@Z.c)
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
