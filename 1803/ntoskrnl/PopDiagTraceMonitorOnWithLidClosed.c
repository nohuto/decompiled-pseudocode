/*
 * XREFs of PopDiagTraceMonitorOnWithLidClosed @ 0x14076829C
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopDiagTraceMonitorOnWithLidClosed()
{
  int v0; // r9d
  char v1; // r10
  char v2; // r11
  char v3; // [rsp+30h] [rbp-29h] BYREF
  char v4; // [rsp+31h] [rbp-28h] BYREF
  char v5; // [rsp+32h] [rbp-27h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  char *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  char *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  if ( !PopLidOpened && !PopConsoleExternalDisplayConnected && pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v3 = v2;
      v8 = &v3;
      v10 = &v4;
      v12 = &v6;
      v14 = &v5;
      v4 = v2;
      v6 = v0;
      v5 = v1;
      v9 = 1LL;
      v11 = 1LL;
      v13 = 4LL;
      v15 = 1LL;
      TlgWrite(&pCallbackContext, &unk_14030C409, 0LL, 0LL, 6u, &pData);
    }
  }
}
