/*
 * XREFs of TtmiLogTerminalDisplayTimeouts @ 0x1406DD39C
 * Callers:
 *     TtmiTerminalSetDisplayTimeouts @ 0x1406D8588 (TtmiTerminalSetDisplayTimeouts.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall TtmiLogTerminalDisplayTimeouts(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  __int64 v15; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v17; // [rsp+70h] [rbp-39h]
  __int64 v18; // [rsp+78h] [rbp-31h]
  int *v19; // [rsp+80h] [rbp-29h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  int *v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  int *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  __int64 *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  __int64 *v27; // [rsp+C0h] [rbp+17h]
  __int64 v28; // [rsp+C8h] [rbp+1Fh]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      v14 = a5;
      v15 = a6;
      v17 = &v10;
      v19 = &v11;
      v21 = &v12;
      v23 = &v13;
      v25 = &v14;
      v27 = &v15;
      v10 = a1;
      v11 = v9;
      v12 = v8;
      v13 = v7;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 8LL;
      v28 = 8LL;
      TlgWrite(&stru_1407AC710, &unk_1402AEECE, 0LL, 0LL, 8u, &pData);
    }
  }
}
