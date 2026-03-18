/*
 * XREFs of PopTraceBootError @ 0x1402326A8
 * Callers:
 *     PopCheckAndClearBootError @ 0x140823FE4 (PopCheckAndClearBootError.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopTraceBootError()
{
  int *v0; // r9
  int v1; // [rsp+30h] [rbp-59h] BYREF
  int v2; // [rsp+34h] [rbp-55h] BYREF
  int v3; // [rsp+38h] [rbp-51h] BYREF
  int v4; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v5; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v7; // [rsp+70h] [rbp-19h]
  __int64 v8; // [rsp+78h] [rbp-11h]
  int *v9; // [rsp+80h] [rbp-9h]
  __int64 v10; // [rsp+88h] [rbp-1h]
  int *v11; // [rsp+90h] [rbp+7h]
  __int64 v12; // [rsp+98h] [rbp+Fh]
  int *v13; // [rsp+A0h] [rbp+17h]
  __int64 v14; // [rsp+A8h] [rbp+1Fh]
  __int64 *v15; // [rsp+B0h] [rbp+27h]
  __int64 v16; // [rsp+B8h] [rbp+2Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x800000000000uLL) )
    {
      v1 = *v0;
      v2 = v0[1];
      v3 = v0[2];
      v4 = v0[3];
      v5 = v0[4];
      v7 = &v1;
      v9 = &v2;
      v11 = &v3;
      v13 = &v4;
      v15 = &v5;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 8LL;
      TlgWrite(&hProvider, &unk_1402AD1DC, 0LL, 0LL, 7u, &pData);
    }
  }
}
