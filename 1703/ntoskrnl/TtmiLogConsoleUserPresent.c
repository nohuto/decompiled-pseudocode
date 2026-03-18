/*
 * XREFs of TtmiLogConsoleUserPresent @ 0x1406DB314
 * Callers:
 *     TtmNotifyConsoleUserPresent @ 0x1406D9168 (TtmNotifyConsoleUserPresent.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void TtmiLogConsoleUserPresent()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // r11d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  int v5; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      v3 = v2;
      v7 = &v3;
      v9 = &v4;
      v11 = &v5;
      v4 = v1;
      v5 = v0;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      TlgWrite(&stru_1407AC710, &unk_1402AE7DE, 0LL, 0LL, 5u, &pData);
    }
  }
}
