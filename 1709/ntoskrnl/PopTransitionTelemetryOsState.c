/*
 * XREFs of PopTransitionTelemetryOsState @ 0x1405ACF48
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 *     PopConnectedStandbySettingCallback @ 0x1405F2260 (PopConnectedStandbySettingCallback.c)
 *     PopNotifyTelemetryOsState @ 0x1407060AC (PopNotifyTelemetryOsState.c)
 *     PopDiagInitialize @ 0x140827B48 (PopDiagInitialize.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14011E7C8 (TelemetryCoverageStringHashInternal.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x1405AD3BC (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // esi
  UCHAR v5; // dl
  int v6; // r11d
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  ULONG Size; // r14d
  char **v14; // rcx
  __int16 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  ULONG v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  int Ptr_low; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  int v46; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v48[2]; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int16 *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int16 *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  int *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  __int64 *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  int *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  int *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  ULONG *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  ULONG *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  __int64 *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  int *v82; // [rsp+228h] [rbp+120h]
  __int64 v83; // [rsp+230h] [rbp+128h]
  int *p_Ptr_low; // [rsp+238h] [rbp+130h]
  __int64 v85; // [rsp+240h] [rbp+138h]
  int *v86; // [rsp+248h] [rbp+140h]
  __int64 v87; // [rsp+250h] [rbp+148h]

  memset(v48, 0, sizeof(v48));
  v4 = 0;
  if ( !TraceLoggingProviderEnabled(&pCallbackContext, v5, 0x800000000000uLL) || !byte_140364EAC )
    return v4;
  if ( a1 == 2 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)dword_1403562AC >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      if ( !dword_1403562A8 )
        dword_1403562A8 = TelemetryCoverageStringHashInternal(off_1403562A0, &v40);
      v14 = &off_1403562A0;
    }
    else
    {
      if ( (unsigned int)dword_14035627C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      if ( !dword_140356278 )
        dword_140356278 = TelemetryCoverageStringHashInternal(off_140356270, &v33);
      v14 = &off_140356270;
    }
    goto LABEL_78;
  }
  if ( a1 == 3 )
  {
    switch ( a2 )
    {
      case 3:
        if ( (unsigned int)dword_140356294 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_6;
        if ( !dword_140356290 )
          dword_140356290 = TelemetryCoverageStringHashInternal(off_140356288, &v39);
        v14 = &off_140356288;
        break;
      case 4:
        if ( (unsigned int)dword_14035624C >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_6;
        if ( !dword_140356248 )
          dword_140356248 = TelemetryCoverageStringHashInternal(off_140356240, &v38);
        v14 = &off_140356240;
        break;
      case 5:
        if ( (unsigned int)dword_140356264 >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_6;
        if ( !dword_140356260 )
          dword_140356260 = TelemetryCoverageStringHashInternal(off_140356258, &v37);
        v14 = &off_140356258;
        break;
      case 6:
        if ( (unsigned int)dword_14035621C >= MEMORY[0xFFFFF7800000037C] )
          goto LABEL_6;
        if ( !dword_140356218 )
          dword_140356218 = TelemetryCoverageStringHashInternal(off_140356210, &v36);
        v14 = &off_140356210;
        break;
      default:
        if ( a2 == 8 && (unsigned int)dword_140356234 < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140356230 )
            dword_140356230 = TelemetryCoverageStringHashInternal(off_140356228, &v35);
          v14 = &off_140356228;
          break;
        }
        goto LABEL_6;
    }
LABEL_78:
    EtwTelemetryCoverageReport(v14);
    goto LABEL_6;
  }
  if ( a1 != 4 )
    goto LABEL_6;
  switch ( a2 )
  {
    case 3:
      if ( (unsigned int)dword_1403561EC >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      if ( !dword_1403561E8 )
        dword_1403561E8 = TelemetryCoverageStringHashInternal(off_1403561E0, &v19);
      v14 = &off_1403561E0;
      goto LABEL_78;
    case 4:
      if ( (unsigned int)dword_140356204 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      if ( !dword_140356200 )
        dword_140356200 = TelemetryCoverageStringHashInternal(off_1403561F8, &v20);
      v14 = &off_1403561F8;
      goto LABEL_78;
    case 5:
      if ( (unsigned int)dword_1403561BC >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      if ( !dword_1403561B8 )
        dword_1403561B8 = TelemetryCoverageStringHashInternal(off_1403561B0, &v21);
      v14 = &off_1403561B0;
      goto LABEL_78;
    case 6:
      if ( (unsigned int)dword_1403561D4 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_6;
      if ( !dword_1403561D0 )
        dword_1403561D0 = TelemetryCoverageStringHashInternal(off_1403561C8, &v22);
      v14 = &off_1403561C8;
      goto LABEL_78;
  }
  if ( a2 == 8 && (unsigned int)dword_1403561A4 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_1403561A0 )
      dword_1403561A0 = TelemetryCoverageStringHashInternal(off_140356198, &v23);
    v14 = &off_140356198;
    goto LABEL_78;
  }
LABEL_6:
  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v4 = dword_140364EA8;
  if ( a1 != 5 || dword_140364E70 == 1 || (unsigned int)(dword_140364E70 - 4) <= 1 )
  {
    v7 = (KiQueryUnbiasedInterruptTime() - qword_140364E88) / 0x2710uLL;
    v8 = v7 - qword_140364E98;
    v9 = (MEMORY[0xFFFFF78000000008] - qword_140364E80) / 0x2710uLL;
    qword_140364E98 = v7;
    v10 = v9 - qword_140364E90;
    qword_140364E90 = v9;
    v11 = v10;
    if ( v8 <= v10 )
      v11 = v8;
    v33 = v11;
    v22 = v6 + dword_140364EA0;
    dword_140364EA0 += v6;
    v20 = dword_140364E70;
    v21 = dword_140364E74;
    if ( a1 != 5 )
    {
      dword_140364EA4 += v6;
      dword_140364E70 = a1;
      dword_140364E74 = a2;
    }
    if ( a1 == v6 || a1 == 4 )
      dword_140364EA8 += v6;
    v4 = dword_140364EA8;
    v23 = dword_140364EA4;
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
    PopCurrentPowerState(v48);
    v19 = 0;
    Size = v48[0].Size;
    if ( v48[0].Size )
      v19 = 100 * v48[0].Reserved / v48[0].Size;
    PopMeasureEnergyChange(&v46, &OsStateChangeEnergyCounter);
    v34 = qword_140364E78;
    if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
    {
      v15 = a1;
      v16 = a2;
      v41 = v10;
      v24 = MEMORY[0xFFFFF780000002C4];
      v42 = v33;
      LOWORD(v17) = v20;
      LOWORD(v18) = v21;
      v25 = v22;
      v26 = v23;
      v29 = v19;
      v45 = v47;
      v30 = v46;
      Ptr_low = LOBYTE(v48[0].Ptr);
      v32 = BYTE3(v48[0].Ptr);
      v50 = &v15;
      v52 = &v16;
      v54 = &v41;
      v56 = &v24;
      v58 = &v34;
      v60 = (__int64 *)&v42;
      v62 = &v43;
      v64 = &v44;
      v66 = &v17;
      v68 = &v18;
      v70 = &v25;
      v72 = &v26;
      v74 = &v27;
      v76 = &v28;
      v78 = &v29;
      v80 = &v45;
      v82 = &v30;
      v43 = v9;
      v44 = v7;
      v27 = v4;
      v28 = Size;
      v51 = 2LL;
      v53 = 2LL;
      v55 = 8LL;
      v57 = 4LL;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 8LL;
      v65 = 8LL;
      v67 = 2LL;
      v69 = 2LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 4LL;
      p_Ptr_low = &Ptr_low;
      v86 = &v32;
      v85 = 4LL;
      v87 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1402D2130, 0LL, 0LL, 0x15u, &pData);
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  }
  return v4;
}
