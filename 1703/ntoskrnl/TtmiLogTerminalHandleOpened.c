/*
 * XREFs of TtmiLogTerminalHandleOpened @ 0x1406DD598
 * Callers:
 *     TtmpOpenTerminalHandle @ 0x1406D88E0 (TtmpOpenTerminalHandle.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall TtmiLogTerminalHandleOpened(int a1)
{
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-49h] BYREF
  int v6; // [rsp+34h] [rbp-45h] BYREF
  int v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  int *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      v5 = a1;
      v10 = &v5;
      v12 = &v6;
      v14 = &v8;
      v16 = &v7;
      v6 = v4;
      v8 = v3;
      v7 = v2;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 8LL;
      v17 = 4LL;
      TlgWrite(&stru_1407AC710, &unk_1402AE786, 0LL, 0LL, 6u, &pData);
    }
  }
}
