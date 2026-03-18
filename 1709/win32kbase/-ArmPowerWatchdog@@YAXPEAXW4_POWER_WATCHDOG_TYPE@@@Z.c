/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0077AC0
 * Callers:
 *     QueuePowerRequest @ 0x1C00771C0 (QueuePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     McTemplateK0xq @ 0x1C00E2F1C (McTemplateK0xq.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ecx
  _DWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  const GUID *v9; // r9
  char v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  _QWORD InputBuffer[12]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  char *v15; // [rsp+C0h] [rbp+17h]
  int v16; // [rsp+C8h] [rbp+1Fh]
  int v17; // [rsp+CCh] [rbp+23h]
  __int64 *v18; // [rsp+D0h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+2Fh]
  int v20; // [rsp+DCh] [rbp+33h]
  int *v21; // [rsp+E0h] [rbp+37h]
  int v22; // [rsp+E8h] [rbp+3Fh]
  int v23; // [rsp+ECh] [rbp+43h]

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    v4 = 0;
    LODWORD(InputBuffer[0]) = 21;
    v5 = &gPowerWatchdogTimeouts;
    InputBuffer[1] = a1;
    while ( *v5 != (_DWORD)v2 )
    {
      ++v4;
      v5 += 6;
      if ( v4 >= 5 )
      {
        v6 = 30000;
        goto LABEL_7;
      }
    }
    v6 = v5[4];
LABEL_7:
    InputBuffer[2] = __PAIR64__(gSessionId, v6);
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( gPowerWatchdogTest )
      InputBuffer[4] = v2 | 0xFFFFFFFF80000000uLL;
    if ( (_DWORD)v2 == 16 )
    {
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = &gpPowerThread;
      InputBuffer[6] = gpresUser;
      InputBuffer[7] = &gpPowerRequestCurrent;
      BYTE3(InputBuffer[8]) = 1;
    }
    else
    {
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
      InputBuffer[5] = KeGetCurrentThread();
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xq(v7, &StartPowerWatchdog, v8, a1, v2);
    if ( dword_1C01880D0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000000uLL) )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v15 = &v10;
        v18 = &v12;
        v21 = &v11;
        v10 = 1;
        v16 = 1;
        v12 = a1;
        v19 = 8;
        v11 = v2;
        v22 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A201, 0LL, v9, 5u, &pData);
      }
    }
  }
}
