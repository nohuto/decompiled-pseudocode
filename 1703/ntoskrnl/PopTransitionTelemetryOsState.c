/*
 * XREFs of PopTransitionTelemetryOsState @ 0x1405B9204
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 *     PopNotifyTelemetryOsState @ 0x140576768 (PopNotifyTelemetryOsState.c)
 *     PopConnectedStandbySettingCallback @ 0x140586350 (PopConnectedStandbySettingCallback.c)
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x140082CB4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // ebx
  __int64 UnbiasedInterruptTime; // rax
  int v6; // r11d
  int v7; // esi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  __int16 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+4Ch] [rbp-BCh]
  int v20; // [rsp+50h] [rbp-B8h]
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-98h]
  unsigned __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int16 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int16 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  __int64 *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  int *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  unsigned int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]

  v4 = 0;
  if ( TraceLoggingProviderEnabled(&hProvider, a2, 0x800000000000uLL) && byte_14034A62C )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
    v4 = dword_14034A628;
    if ( a1 != 5 || dword_14034A5F0 == 1 || (unsigned int)(dword_14034A5F0 - 4) <= 1 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v7 = dword_14034A624;
      v8 = (UnbiasedInterruptTime - qword_14034A608) / 0x2710uLL;
      v9 = v8 - qword_14034A618;
      v10 = (MEMORY[0xFFFFF78000000008] - qword_14034A600) / 0x2710uLL;
      qword_14034A618 = v8;
      v11 = v10 - qword_14034A610;
      qword_14034A610 = v10;
      v12 = v11;
      if ( v9 <= v11 )
        v12 = v9;
      v26 = v12;
      v20 = v6 + dword_14034A620;
      dword_14034A620 += v6;
      v18 = dword_14034A5F0;
      v19 = dword_14034A5F4;
      if ( a1 != 5 )
      {
        v7 = v6 + dword_14034A624;
        dword_14034A5F0 = a1;
        dword_14034A624 += v6;
        dword_14034A5F4 = a2;
      }
      if ( a1 == v6 || a1 == 4 )
      {
        v4 = v6 + dword_14034A628;
        dword_14034A628 += v6;
      }
      else
      {
        v4 = dword_14034A628;
      }
      PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
      v25 = qword_14034A5F8;
      if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x800000000000uLL) )
      {
        v14 = a1;
        v15 = a2;
        v27 = v11;
        v21 = MEMORY[0xFFFFF780000002C4];
        v28 = v26;
        LOWORD(v16) = v18;
        LOWORD(v17) = v19;
        v22 = v20;
        v32 = &v14;
        v34 = &v15;
        v36 = &v27;
        v38 = &v21;
        v40 = &v25;
        v42 = (__int64 *)&v28;
        v44 = &v29;
        v46 = &v30;
        v48 = &v16;
        v50 = &v17;
        v52 = &v22;
        v54 = &v23;
        v56 = &v24;
        v29 = v10;
        v30 = v8;
        v23 = v7;
        v24 = v4;
        v33 = 2LL;
        v35 = 2LL;
        v37 = 8LL;
        v39 = 4LL;
        v41 = 8LL;
        v43 = 8LL;
        v45 = 8LL;
        v47 = 8LL;
        v49 = 2LL;
        v51 = 2LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        TlgWrite(&hProvider, &unk_1402AD3F3, 0LL, 0LL, 0xFu, &pData);
      }
    }
    else
    {
      PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
    }
  }
  return v4;
}
