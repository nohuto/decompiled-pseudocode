/*
 * XREFs of PopDiagTracePowerButtonBugcheck @ 0x140768B74
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14027FBD0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerButtonBugcheck(int a1)
{
  int v1; // r9d
  int v2; // r9d
  char v3; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v4[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  char *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  __int64 *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  __int64 *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  char *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  int *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  int *v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]

  if ( a1 == 7000 )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v6 = dword_1403A7E08;
        v7 = dword_1403A7E04;
        v3 = byte_1403A7E48;
        v13 = qword_1403A7E10;
        v8 = dword_1403A7E18;
        v9 = dword_1403A7E1C;
        v14[0] = qword_1403A7E20;
        v18 = &v6;
        v10 = dword_1403A7E4C;
        v5 = v1;
        v20 = &v7;
        v4[0] = dword_1403A7E58;
        v22 = &v3;
        v24 = &v13;
        v26 = &v8;
        v11 = dword_1403A7E50;
        v12 = dword_1403A7E54;
        v28 = &v9;
        v32 = &v10;
        v36 = &v11;
        v16 = &v5;
        v17 = 4LL;
        v19 = 4LL;
        v21 = 4LL;
        v23 = 1LL;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v30 = v14;
        v31 = 8LL;
        v33 = 4LL;
        v34 = v4;
        v35 = 1LL;
        v37 = 4LL;
        v38 = &v12;
        v39 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14030BC72, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  else if ( a1 == 15000 && pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    v11 = dword_1403A7E08;
    v10 = dword_1403A7E04;
    v4[0] = byte_1403A7E48;
    v14[0] = qword_1403A7E10;
    v9 = dword_1403A7E18;
    v8 = dword_1403A7E1C;
    v13 = qword_1403A7E20;
    v18 = &v11;
    v7 = dword_1403A7E4C;
    v12 = v2;
    v20 = &v10;
    v3 = dword_1403A7E58;
    v22 = v4;
    v24 = v14;
    v26 = &v9;
    v6 = dword_1403A7E50;
    v5 = dword_1403A7E54;
    v28 = &v8;
    v32 = &v7;
    v36 = &v6;
    v16 = &v12;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 1LL;
    v25 = 8LL;
    v27 = 4LL;
    v29 = 4LL;
    v30 = &v13;
    v31 = 8LL;
    v33 = 4LL;
    v34 = &v3;
    v35 = 1LL;
    v37 = 4LL;
    v38 = &v5;
    v39 = 4LL;
    TlgWrite(&pCallbackContext, &unk_14030BD8F, 0LL, 0LL, 0xEu, &pData);
  }
}
