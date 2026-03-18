/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C008C3F0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C00E74E0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00EA7B0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00DFA50 (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00DFAF4 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3)
{
  _DWORD v6[10]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x4000000000004000LL) != 0
    && (qword_1C0188D98 & 0x4000000000004000LL) == qword_1C0188D98 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 7u, 0LL, a1, 0LL, a2);
    v6[9] = a3;
    EtwpTraceUIPIError(&UIPISystemEvent, v6, 0x28u);
  }
}
