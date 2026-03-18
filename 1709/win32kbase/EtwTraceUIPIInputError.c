/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C000EFC0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C00101F0 (NtUserGetAsyncKeyState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00DFA50 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00DFAF4 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  _QWORD v8[6]; // [rsp+38h] [rbp-50h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x4000000000004000LL) != 0
    && (qword_1C0188D98 & 0x4000000000004000LL) == qword_1C0188D98 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v8, 5u, a1, 0LL, a2, 0LL);
    HIDWORD(v8[4]) = a5;
    v8[5] = a4;
    EtwpTraceUIPIError(&UIPIInputEvent, v8, 0x30u);
  }
}
