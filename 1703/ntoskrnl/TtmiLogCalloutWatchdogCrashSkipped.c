/*
 * XREFs of TtmiLogCalloutWatchdogCrashSkipped @ 0x14041DC7C
 * Callers:
 *     TtmpCalloutWatchdogCallback @ 0x14041DB70 (TtmpCalloutWatchdogCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutWatchdogCrashSkipped(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _UNKNOWN **v6; // rax
  int ProcessSessionId; // eax
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+94h] [rbp-74h]
  int *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  __int64 *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v6 = &retaddr;
  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    LOBYTE(v6) = TlgKeywordOn(&stru_1407AC710, 0x400000000001uLL);
    if ( (_BYTE)v6 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v13 = ProcessSessionId;
      v18 = a5;
      v19 = a6;
      v21 = &v13;
      v24 = &v14;
      v27 = &v15;
      v30 = &v16;
      v33 = &v17;
      v36 = &v18;
      v39 = &v19;
      v14 = a1;
      LODWORD(v15) = a2;
      v16 = a3;
      v17 = a4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 8;
      v34 = 8;
      v37 = 8;
      v40 = 8;
      LOBYTE(v6) = TlgWrite(&stru_1407AC710, &unk_1402AE481, 0LL, 0LL, 9u, &pData);
    }
  }
  return (char)v6;
}
