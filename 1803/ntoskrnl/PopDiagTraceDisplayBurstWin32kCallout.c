/*
 * XREFs of PopDiagTraceDisplayBurstWin32kCallout @ 0x1407674F8
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopDiagTraceDisplayBurstWin32kCallout()
{
  char v0; // r9
  char v1; // [rsp+30h] [rbp-19h] BYREF
  char v2; // [rsp+31h] [rbp-18h] BYREF
  char v3; // [rsp+32h] [rbp-17h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v5; // [rsp+60h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  char *v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  char *v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
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
      TlgWrite(&pCallbackContext, &unk_14030C97E, 0LL, 0LL, 5u, &pData);
    }
  }
}
