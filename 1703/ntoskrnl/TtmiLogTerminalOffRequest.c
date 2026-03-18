/*
 * XREFs of TtmiLogTerminalOffRequest @ 0x1406DD680
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1406D8444 (TtmiSetPendingOnOffRequest.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall TtmiLogTerminalOffRequest(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  int ProcessSessionId; // eax
  int v8; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+3Ch] [rbp-45h] BYREF
  int v10; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  int *v12; // [rsp+68h] [rbp-19h]
  int v13; // [rsp+70h] [rbp-11h]
  int v14; // [rsp+74h] [rbp-Dh]
  int *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  int *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  _DWORD *v21; // [rsp+98h] [rbp+17h]
  int v22; // [rsp+A0h] [rbp+1Fh]
  int v23; // [rsp+A4h] [rbp+23h]
  int *v24; // [rsp+A8h] [rbp+27h]
  _DWORD v25[6]; // [rsp+B0h] [rbp+2Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v27; // [rsp+F8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v27 = a3;
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_1407AC710, 1uLL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v25[1] = 0;
      v8 = ProcessSessionId;
      v12 = &v8;
      v15 = &v9;
      v18 = &v10;
      v21 = v25;
      v24 = &v27;
      v9 = a1;
      v10 = a2;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 2;
      v25[0] = 4;
      LOBYTE(v3) = TlgWrite(&stru_1407AC710, &unk_1402AED27, 0LL, 0LL, 7u, &pData);
    }
  }
  return (char)v3;
}
