/*
 * XREFs of TtmiLogTerminalHandleOpened @ 0x140713A4C
 * Callers:
 *     TtmpOpenTerminalHandle @ 0x14070EC70 (TtmpOpenTerminalHandle.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall TtmiLogTerminalHandleOpened(int a1)
{
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  int v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  __int64 *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 1uLL) )
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
      TlgWrite(&stru_1407F37A0, &unk_1402D3910, 0LL, 0LL, 6u, &pData);
    }
  }
}
