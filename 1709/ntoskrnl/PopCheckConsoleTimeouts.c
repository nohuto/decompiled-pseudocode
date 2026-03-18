/*
 * XREFs of PopCheckConsoleTimeouts @ 0x140709B34
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x1405B8560 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopDiagTraceInputTimeout @ 0x1405A0374 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x1405A0434 (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x1405A0528 (PopGetDisplayTimeout.c)
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
  if ( !BYTE5(qword_1403644C4) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_1403644C4 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_1403644C4) = 0;
    }
    PopPrintEx(3u, (__int64)"PopAdaptive: Input timeout: %u->%u\n", qword_1403644C4, PopInputTimeout);
    LODWORD(qword_1403644C4) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_1403644C4), BYTE4(qword_1403644C4));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_1403644B0) = 1;
    byte_1403644E4 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_1403644CC) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_1403644DC - dword_1403644D8) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_1403644CC )
  {
    PopPrintEx(3u, (__int64)"PopAdaptive: Display timeout: %u->%u\n", qword_1403644CC, v3);
    LODWORD(qword_1403644CC) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_1403644CC), BYTE4(qword_1403644CC));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_1403644B0) = 1;
  }
  return DisplayTimeout;
}
