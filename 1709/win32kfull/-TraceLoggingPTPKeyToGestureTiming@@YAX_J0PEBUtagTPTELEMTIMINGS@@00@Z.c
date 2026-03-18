/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C01A2904
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C01A3A50 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPKeyToGestureTiming(
        __int64 a1,
        __int64 a2,
        const struct tagTPTELEMTIMINGS *a3,
        __int64 a4,
        LPCGUID pActivityId)
{
  const GUID *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  int *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  int *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  int *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  int *v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  int *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  int *v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  int *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  int *v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v14 = 1000 * a1 / (__int64)pActivityId;
      v25 = &v14;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v15 = 1000 * v8 / (__int64)pActivityId;
      v28 = &v15;
      v9 = 1000LL * *(_QWORD *)v7;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v16 = v9 / (__int64)pActivityId;
      v31 = &v16;
      v10 = 1000LL * *(_QWORD *)(v7 + 8);
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v17 = v10 / (__int64)pActivityId;
      v34 = &v17;
      v11 = 1000LL * *(_QWORD *)(v7 + 16);
      v35 = 4;
      v38 = 4;
      v41 = 4;
      v18 = v11 / (__int64)pActivityId;
      v37 = &v18;
      v12 = 1000LL * *(_QWORD *)(v7 + 24);
      v44 = 4;
      v47 = 4;
      v50 = 4;
      v19 = v12 / (__int64)pActivityId;
      v40 = &v19;
      v13 = 1000LL * *(_QWORD *)(v7 + 32);
      v53 = 4;
      v20 = v13 / (__int64)pActivityId;
      v43 = &v20;
      v21 = *(_DWORD *)(v7 + 40);
      v46 = &v21;
      v22 = *(_DWORD *)(v7 + 44);
      v49 = &v22;
      v54 = 0;
      v23 = 1000 * (__int64)v6 / (__int64)pActivityId;
      v52 = &v23;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7EC6, pActivityId, v6, 0xCu, &pData);
    }
  }
}
