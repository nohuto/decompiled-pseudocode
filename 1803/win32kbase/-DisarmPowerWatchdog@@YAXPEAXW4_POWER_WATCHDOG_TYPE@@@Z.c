/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A23D8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     McTemplateK0x @ 0x1C0145760 (McTemplateK0x.c)
 */

void __fastcall DisarmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const GUID *v6; // r9
  char v7; // [rsp+30h] [rbp-79h] BYREF
  int v8; // [rsp+34h] [rbp-75h] BYREF
  __int64 v9; // [rsp+38h] [rbp-71h] BYREF
  _QWORD InputBuffer[12]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  char *v12; // [rsp+C0h] [rbp+17h]
  int v13; // [rsp+C8h] [rbp+1Fh]
  int v14; // [rsp+CCh] [rbp+23h]
  __int64 *v15; // [rsp+D0h] [rbp+27h]
  int v16; // [rsp+D8h] [rbp+2Fh]
  int v17; // [rsp+DCh] [rbp+33h]
  int *v18; // [rsp+E0h] [rbp+37h]
  int v19; // [rsp+E8h] [rbp+3Fh]
  int v20; // [rsp+ECh] [rbp+43h]

  if ( a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0x(v4, &StopPowerWatchdog, v5, a1);
    if ( dword_1C019A200 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x400000000000uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = &v7;
        v15 = &v9;
        v18 = &v8;
        v7 = 0;
        v13 = 1;
        v9 = a1;
        v16 = 8;
        v8 = a2;
        v19 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0177C60, 0LL, v6, 5u, &pData);
      }
    }
  }
}
