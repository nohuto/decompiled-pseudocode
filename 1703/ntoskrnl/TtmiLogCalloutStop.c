/*
 * XREFs of TtmiLogCalloutStop @ 0x1406DB03C
 * Callers:
 *     TtmpStopCallout @ 0x1406D7D40 (TtmpStopCallout.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutStop(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  _UNKNOWN **v6; // rax
  int ProcessSessionId; // eax
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v19; // [rsp+78h] [rbp-90h]
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  int *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  int *v25; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A4h] [rbp-64h]
  __int64 *v28; // [rsp+A8h] [rbp-60h]
  int v29; // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B4h] [rbp-54h]
  _DWORD *v31; // [rsp+B8h] [rbp-50h]
  int v32; // [rsp+C0h] [rbp-48h]
  int v33; // [rsp+C4h] [rbp-44h]
  int *v34; // [rsp+C8h] [rbp-40h]
  _DWORD v35[2]; // [rsp+D0h] [rbp-38h] BYREF
  int *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF
  int v43; // [rsp+140h] [rbp+38h] BYREF

  v6 = &retaddr;
  v43 = a4;
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn(&stru_1407AC710, 0x400000000001uLL);
    if ( (_BYTE)v6 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v35[1] = 0;
      v38 = 0;
      v41 = 0;
      v12 = ProcessSessionId;
      v15 = a5;
      v17 = a6;
      v19 = &v12;
      v22 = &v13;
      v25 = &v14;
      v28 = &v16;
      v31 = v35;
      v34 = &v43;
      v36 = &v15;
      v39 = &v17;
      v13 = a1;
      v14 = a2;
      v16 = a3;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v29 = 8;
      v32 = 2;
      v35[0] = 4;
      v37 = 4;
      v40 = 8;
      LOBYTE(v6) = TlgWrite(&stru_1407AC710, &unk_1402AE972, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (char)v6;
}
