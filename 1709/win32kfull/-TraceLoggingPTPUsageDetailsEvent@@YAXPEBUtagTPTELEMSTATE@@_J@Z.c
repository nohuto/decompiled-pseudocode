/*
 * XREFs of ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01A2CEC
 * Callers:
 *     HandlePTPTelemetry @ 0x1C0142630 (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPUsageDetailsEvent(const struct tagTPTELEMSTATE *a1)
{
  const GUID *v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v4 = 1000LL * *(_QWORD *)(v2 + 56);
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v8 = v4 / v3;
      v19 = &v8;
      v5 = 1000LL * *(_QWORD *)(v2 + 64);
      v26 = 4LL;
      v28 = 4LL;
      v9 = v5 / v3;
      v21 = &v9;
      v6 = 1000LL * *(_QWORD *)(v2 + 72);
      v30 = 4LL;
      v32 = 4LL;
      v10 = v6 / v3;
      v23 = &v10;
      v11 = *(_DWORD *)(v2 + 20);
      v25 = &v11;
      v7 = 1000LL * *(_QWORD *)(v2 + 80);
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v12 = v7 / v3;
      v27 = &v12;
      v13 = *(_DWORD *)(v2 + 44);
      v29 = &v13;
      v14 = *(_DWORD *)(v2 + 88);
      v31 = &v14;
      v15 = *(_DWORD *)(v2 + 92);
      v33 = &v15;
      v16 = *(_DWORD *)(v2 + 96);
      v35 = &v16;
      v17 = *(_DWORD *)(v2 + 100);
      v37 = &v17;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7F8B, v1, (LPCGUID)v2, 0xCu, &pData);
    }
  }
}
