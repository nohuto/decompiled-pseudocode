/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C00779D0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     McTemplateK0x @ 0x1C00E4A74 (McTemplateK0x.c)
 */

void __fastcall DisarmPowerWatchdog(void *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  const GUID *v5; // r9
  char v6; // [rsp+30h] [rbp-69h] BYREF
  void *v7; // [rsp+38h] [rbp-61h] BYREF
  _QWORD InputBuffer[12]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+7h] BYREF
  char *v10; // [rsp+C0h] [rbp+27h]
  int v11; // [rsp+C8h] [rbp+2Fh]
  int v12; // [rsp+CCh] [rbp+33h]
  void **v13; // [rsp+D0h] [rbp+37h]
  int v14; // [rsp+D8h] [rbp+3Fh]
  int v15; // [rsp+DCh] [rbp+43h]

  if ( a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0x(v3, v2, v4, a1);
    if ( dword_1C01880D0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000000uLL) )
      {
        v12 = 0;
        v15 = 0;
        v10 = &v6;
        v13 = &v7;
        v6 = 0;
        v11 = 1;
        v7 = a1;
        v14 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A1D0, 0LL, v5, 4u, &pData);
      }
    }
  }
}
