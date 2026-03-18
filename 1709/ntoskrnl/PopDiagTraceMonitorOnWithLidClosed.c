/*
 * XREFs of PopDiagTraceMonitorOnWithLidClosed @ 0x140704104
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTraceMonitorOnWithLidClosed()
{
  BOOLEAN result; // al
  int v1; // r9d
  char v2; // r10
  char v3; // r11
  char v4; // [rsp+30h] [rbp-29h] BYREF
  char v5; // [rsp+31h] [rbp-28h] BYREF
  char v6; // [rsp+32h] [rbp-27h] BYREF
  int v7; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  char *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  char *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  result = PopLidOpened;
  if ( !PopLidOpened && !PopConsoleExternalDisplayConnected && pCallbackContext.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( result )
    {
      v4 = v3;
      v9 = &v4;
      v11 = &v5;
      v13 = &v7;
      v15 = &v6;
      v5 = v3;
      v7 = v1;
      v6 = v2;
      v10 = 1LL;
      v12 = 1LL;
      v14 = 4LL;
      v16 = 1LL;
      return TlgWrite(&pCallbackContext, &unk_1402D1927, 0LL, 0LL, 6u, &pData);
    }
  }
  return result;
}
