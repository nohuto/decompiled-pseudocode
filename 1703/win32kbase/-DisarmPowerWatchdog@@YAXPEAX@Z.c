/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C0065238
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_x @ 0x1C00DE028 (Template_x.c)
 */

void __fastcall DisarmPowerWatchdog(void *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  const GUID *v5; // r9
  char v6; // [rsp+30h] [rbp-79h] BYREF
  void *v7; // [rsp+38h] [rbp-71h] BYREF
  _QWORD InputBuffer[12]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  char *v10; // [rsp+C0h] [rbp+17h]
  int v11; // [rsp+C8h] [rbp+1Fh]
  int v12; // [rsp+CCh] [rbp+23h]
  void **v13; // [rsp+D0h] [rbp+27h]
  int v14; // [rsp+D8h] [rbp+2Fh]
  int v15; // [rsp+DCh] [rbp+33h]

  if ( a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      Template_x(v3, v2, v4, a1);
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v12 = 0;
        v15 = 0;
        v10 = &v6;
        v13 = &v7;
        v6 = 0;
        v11 = 1;
        v7 = a1;
        v14 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0169E00, 0LL, v5, 4u, &pData);
      }
    }
  }
}
