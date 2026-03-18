/*
 * XREFs of TtmiLogCalloutStart @ 0x1406DAF00
 * Callers:
 *     TtmpStartCallout @ 0x1406D7C4C (TtmpStartCallout.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutStart(int a1, __int64 a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  int ProcessSessionId; // eax
  int v10; // [rsp+38h] [rbp-69h] BYREF
  int v11; // [rsp+3Ch] [rbp-65h] BYREF
  int v12; // [rsp+40h] [rbp-61h] BYREF
  __int64 v13; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  int *v15; // [rsp+78h] [rbp-29h]
  int v16; // [rsp+80h] [rbp-21h]
  int v17; // [rsp+84h] [rbp-1Dh]
  int *v18; // [rsp+88h] [rbp-19h]
  int v19; // [rsp+90h] [rbp-11h]
  int v20; // [rsp+94h] [rbp-Dh]
  __int64 *v21; // [rsp+98h] [rbp-9h]
  int v22; // [rsp+A0h] [rbp-1h]
  int v23; // [rsp+A4h] [rbp+3h]
  _DWORD *v24; // [rsp+A8h] [rbp+7h]
  int v25; // [rsp+B0h] [rbp+Fh]
  int v26; // [rsp+B4h] [rbp+13h]
  int *v27; // [rsp+B8h] [rbp+17h]
  _DWORD v28[2]; // [rsp+C0h] [rbp+1Fh] BYREF
  int *v29; // [rsp+C8h] [rbp+27h]
  int v30; // [rsp+D0h] [rbp+2Fh]
  int v31; // [rsp+D4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF
  int v33; // [rsp+118h] [rbp+77h] BYREF

  v4 = &retaddr;
  v33 = a3;
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn(&stru_1407AC710, 1uLL);
    if ( (_BYTE)v4 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v28[1] = 0;
      v31 = 0;
      v10 = ProcessSessionId;
      v15 = &v10;
      v18 = &v11;
      v21 = &v13;
      v24 = v28;
      v27 = &v33;
      v29 = &v12;
      v11 = a1;
      v13 = a2;
      v12 = a4;
      v16 = 4;
      v19 = 4;
      v22 = 8;
      v25 = 2;
      v28[0] = 4;
      v30 = 4;
      LOBYTE(v4) = TlgWrite(&stru_1407AC710, &unk_1402AEAB7, 0LL, 0LL, 8u, &pData);
    }
  }
  return (char)v4;
}
