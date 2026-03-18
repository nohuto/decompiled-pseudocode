/*
 * XREFs of PopDiagTraceDisplayBurstWin32kCallout @ 0x1406CD264
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopDiagTraceDisplayBurstWin32kCallout()
{
  char v0; // r9
  char v1; // [rsp+30h] [rbp-29h] BYREF
  char v2; // [rsp+31h] [rbp-28h] BYREF
  char v3; // [rsp+32h] [rbp-27h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v5; // [rsp+60h] [rbp+7h]
  __int64 v6; // [rsp+68h] [rbp+Fh]
  char *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  char *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v1 = PopLidOpened;
      v2 = PopConsoleExternalDisplayConnected;
      v5 = &v1;
      v7 = &v2;
      v9 = &v3;
      v3 = v0;
      v6 = 1LL;
      v8 = 1LL;
      v10 = 1LL;
      TlgWrite(&hProvider, &unk_1402AD16C, 0LL, 0LL, 5u, &pData);
    }
  }
}
