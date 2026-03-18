/*
 * XREFs of PopCheckConsoleTimeouts @ 0x14076D7C4
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x1406256E0 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x14052669C (PopDiagTraceInputTimeout.c)
 *     PopSetSessionUserStatus @ 0x140526758 (PopSetSessionUserStatus.c)
 *     PopDiagTraceDisplayTimeout @ 0x140526A4C (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x140527118 (PopGetDisplayTimeout.c)
 */

char PopCheckConsoleTimeouts()
{
  unsigned int v0; // esi
  unsigned int DisplayTimeout; // eax
  int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8

  PopPrintEx(3u, (__int64)"PopAdaptive: >>>>> Policy parameters change\n");
  v0 = PopConsoleContext;
  DisplayTimeout = PopGetDisplayTimeout(PopConsoleContext);
  v2 = PopInputTimeout;
  v3 = DisplayTimeout;
  if ( !BYTE5(qword_1403A7B64) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_1403A7B64 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_1403A7B64) = 0;
    }
    PopPrintEx(3u, (__int64)"PopAdaptive: Input timeout: %u->%u\n", qword_1403A7B64, PopInputTimeout);
    LODWORD(qword_1403A7B64) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_1403A7B64), BYTE4(qword_1403A7B64));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_1403A7B10) = 1;
    byte_1403A7B84 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_1403A7B6C) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_1403A7B7C - dword_1403A7B78) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_1403A7B6C )
  {
    PopPrintEx(3u, (__int64)"PopAdaptive: Display timeout: %u->%u\n", qword_1403A7B6C, v3);
    LODWORD(qword_1403A7B6C) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_1403A7B6C), BYTE4(qword_1403A7B6C));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_1403A7B10) = 1;
  }
  return DisplayTimeout;
}
