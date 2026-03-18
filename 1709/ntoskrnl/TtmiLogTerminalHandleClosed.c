/*
 * XREFs of TtmiLogTerminalHandleClosed @ 0x140713964
 * Callers:
 *     TtmpCloseTerminalHandle @ 0x14070EB00 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall TtmiLogTerminalHandleClosed(int a1)
{
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  __int64 *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  __int64 *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 1uLL) )
    {
      v5 = a1;
      v10 = &v5;
      v12 = &v6;
      v14 = &v7;
      v16 = &v8;
      v6 = v4;
      v7 = v3;
      v8 = v2;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 8LL;
      v17 = 8LL;
      TlgWrite(&stru_1407F37A0, &unk_1402D3A57, 0LL, 0LL, 6u, &pData);
    }
  }
}
