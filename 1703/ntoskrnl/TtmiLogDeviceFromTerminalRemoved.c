/*
 * XREFs of TtmiLogDeviceFromTerminalRemoved @ 0x1406DB4F0
 * Callers:
 *     TtmiEvacuateDevices @ 0x1406D7144 (TtmiEvacuateDevices.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall TtmiLogDeviceFromTerminalRemoved(int a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  int ProcessSessionId; // eax
  int v11; // [rsp+38h] [rbp-59h] BYREF
  int v12; // [rsp+3Ch] [rbp-55h] BYREF
  int v13; // [rsp+40h] [rbp-51h] BYREF
  int v14; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  int *v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+84h] [rbp-Dh]
  int *v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+90h] [rbp-1h]
  int v22; // [rsp+94h] [rbp+3h]
  int *v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A4h] [rbp+13h]
  __int64 *v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+B0h] [rbp+1Fh]
  int v28; // [rsp+B4h] [rbp+23h]
  int *v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+C0h] [rbp+2Fh]
  int v31; // [rsp+C4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  v4 = &retaddr;
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn(&stru_1407AC710, 1uLL);
    if ( (_BYTE)v4 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v11 = ProcessSessionId;
      v17 = &v11;
      v20 = &v12;
      v23 = &v13;
      v26 = &v15;
      v29 = &v14;
      v12 = a1;
      v13 = a2;
      v15 = a3;
      v14 = a4;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 8;
      v30 = 4;
      LOBYTE(v4) = TlgWrite(&stru_1407AC710, &unk_1402ADE94, 0LL, 0LL, 7u, &pData);
    }
  }
  return (char)v4;
}
