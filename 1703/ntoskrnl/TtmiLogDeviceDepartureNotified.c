/*
 * XREFs of TtmiLogDeviceDepartureNotified @ 0x1406DB3D8
 * Callers:
 *     TtmNotifyDeviceDeparture @ 0x1406D6DE0 (TtmNotifyDeviceDeparture.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall TtmiLogDeviceDepartureNotified(int a1, __int64 a2, char a3)
{
  _UNKNOWN **v3; // rax
  int ProcessSessionId; // eax
  char v9; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+3Ch] [rbp-45h] BYREF
  int v11; // [rsp+40h] [rbp-41h] BYREF
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  int *v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]
  int v16; // [rsp+84h] [rbp+3h]
  int *v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  __int64 *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  char *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_1407AC710, 1uLL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v10 = ProcessSessionId;
      v14 = &v10;
      v17 = &v11;
      v20 = &v12;
      v23 = &v9;
      v11 = a1;
      v12 = a2;
      v9 = a3;
      v15 = 4;
      v18 = 4;
      v21 = 8;
      v24 = 1;
      LOBYTE(v3) = TlgWrite(&stru_1407AC710, &unk_1402AEC75, 0LL, 0LL, 6u, &pData);
    }
  }
  return (char)v3;
}
