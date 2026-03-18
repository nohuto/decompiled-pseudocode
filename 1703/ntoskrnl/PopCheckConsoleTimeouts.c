/*
 * XREFs of PopCheckConsoleTimeouts @ 0x1406D4484
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x1405C2C70 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x140420400 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x1404204BC (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x1404205B4 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x1404205E4 (PopSetSessionUserStatus.c)
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
  if ( !BYTE5(qword_140349E84) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_140349E84 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_140349E84) = 0;
    }
    PopPrintEx(3u, (__int64)"PopAdaptive: Input timeout: %u->%u\n", qword_140349E84, PopInputTimeout);
    LODWORD(qword_140349E84) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_140349E84), BYTE4(qword_140349E84));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_140349E50) = 1;
    byte_140349EA4 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_140349E8C) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_140349E9C - dword_140349E98) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_140349E8C )
  {
    PopPrintEx(3u, (__int64)"PopAdaptive: Display timeout: %u->%u\n", qword_140349E8C, v3);
    LODWORD(qword_140349E8C) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_140349E8C), BYTE4(qword_140349E8C));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_140349E50) = 1;
  }
  return DisplayTimeout;
}
