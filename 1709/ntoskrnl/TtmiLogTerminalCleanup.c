/*
 * XREFs of TtmiLogTerminalCleanup @ 0x140713604
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x14070E5D8 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void TtmiLogTerminalCleanup()
{
  int v0; // r9d
  int v1; // r10d
  __int64 v2; // r11
  int v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  __int64 *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( stru_1407F37A0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407F37A0, 1uLL) )
    {
      v3 = v1;
      v7 = &v3;
      v9 = &v4;
      v11 = &v5;
      v4 = v0;
      v5 = v2;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 8LL;
      TlgWrite(&stru_1407F37A0, &unk_1402D31BB, 0LL, 0LL, 5u, &pData);
    }
  }
}
