/*
 * XREFs of ACPIThermalWorker @ 0x1C0092A10
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0023A84 (WPP_RECORDER_SF_ddqssdddd.c)
 *     ACPIThermalLoop @ 0x1C0024074 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C0024978 (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C0024AFC (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0024C90 (ACPIThermalUpdateConstraints.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0059044 (ACPIThermalStopZoneWorker.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0085DFC (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalBuildConstraints @ 0x1C0092604 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetParameter @ 0x1C009373C (ACPIThermalGetParameter.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00937D4 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C0093868 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C00938E8 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalReadTemperature @ 0x1C00A7000 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(union _LARGE_INTEGER *a1, int a2)
{
  int v2; // r15d
  LONG result; // eax
  union _LARGE_INTEGER v5; // rdi
  __int64 *QuadPart; // r14
  __int64 OverrideHandle; // r13
  union _LARGE_INTEGER v8; // rax
  int v9; // eax
  union _LARGE_INTEGER v10; // r15
  __int64 v11; // r14
  union _LARGE_INTEGER v12; // rax
  int Parameter; // eax
  unsigned __int64 v14; // r14
  union _LARGE_INTEGER v15; // rax
  int v16; // eax
  unsigned __int64 v17; // r14
  union _LARGE_INTEGER v18; // rax
  int v19; // eax
  unsigned int v20; // esi
  __int64 *v21; // rax
  __int64 v22; // r12
  __int64 *v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rsi
  _WORD *v27; // rcx
  _WORD *v28; // r8
  __int64 v29; // rdx
  __int16 v30; // ax
  __int16 v31; // ax
  __int64 *v32; // rcx
  __int64 *v33; // rcx
  int v34; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+28h] [rbp-E0h]
  int v36; // [rsp+28h] [rbp-E0h]
  int v37; // [rsp+28h] [rbp-E0h]
  int v38; // [rsp+28h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-E0h]
  int v40; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-E0h]
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER v46; // [rsp+90h] [rbp-78h] BYREF
  int v47; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp-58h] BYREF
  int v51; // [rsp+B4h] [rbp-54h]
  __int64 v52; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER v53; // [rsp+C0h] [rbp-48h] BYREF
  union _LARGE_INTEGER v54; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v55; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v56; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v57; // [rsp+E0h] [rbp-28h] BYREF
  union _LARGE_INTEGER v58; // [rsp+E8h] [rbp-20h] BYREF
  union _LARGE_INTEGER v59; // [rsp+F0h] [rbp-18h] BYREF
  union _LARGE_INTEGER v60; // [rsp+F8h] [rbp-10h] BYREF
  union _LARGE_INTEGER v61; // [rsp+100h] [rbp-8h] BYREF
  union _LARGE_INTEGER v62; // [rsp+108h] [rbp+0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+110h] [rbp+8h] BYREF
  __int128 v64; // [rsp+118h] [rbp+10h] BYREF
  __int128 v65; // [rsp+128h] [rbp+20h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+138h] [rbp+30h] BYREF
  struct _TIME_FIELDS v67; // [rsp+148h] [rbp+40h] BYREF
  struct _TIME_FIELDS v68; // [rsp+158h] [rbp+50h] BYREF
  struct _TIME_FIELDS v69; // [rsp+168h] [rbp+60h] BYREF
  struct _TIME_FIELDS v70; // [rsp+178h] [rbp+70h] BYREF
  struct _TIME_FIELDS v71; // [rsp+188h] [rbp+80h] BYREF
  struct _TIME_FIELDS v72; // [rsp+198h] [rbp+90h] BYREF
  struct _TIME_FIELDS v73; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _TIME_FIELDS v74; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _TIME_FIELDS v75; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _TIME_FIELDS v76; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _TIME_FIELDS v77; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v78[48]; // [rsp+1F8h] [rbp+F0h] BYREF
  _DWORD v79[10]; // [rsp+228h] [rbp+120h] BYREF
  _DWORD v80[10]; // [rsp+250h] [rbp+148h] BYREF

  v47 = a2;
  v2 = a2;
  result = MEMORY[0xFFFFF78000000008];
  v46.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker((__int64)a1);
  if ( (a1[24].LowPart & 0x8000000) == 0 )
  {
    v5 = a1[25];
    QuadPart = (__int64 *)a1[89].QuadPart;
    v51 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5.QuadPart + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v79, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v79));
    *(_BYTE *)(v5.QuadPart + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v19 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5.QuadPart + 100) = 1;
    v20 = 0;
    *(_BYTE *)(v5.QuadPart + 274) = v19 >= 0;
    do
    {
      v21 = AMLIGetNamedChild(QuadPart, v79[v20]);
      v22 = (__int64)v21;
      if ( !v21 )
        break;
      ACPIThermalBuildConstraints(v21, (__int64)a1, 0, v20);
      AMLIDereferenceHandleEx(v22);
      ++v20;
    }
    while ( v20 < 0xA );
    v23 = AMLIGetNamedChild(QuadPart, 1280528479);
    v2 = v47;
    v24 = (__int64)v23;
    if ( v23 )
    {
      ACPIThermalBuildConstraints(v23, (__int64)a1, 1, 1u);
      AMLIDereferenceHandleEx(v24);
    }
    v25 = AMLIGetNamedChild(QuadPart, 1146770527);
    v26 = (__int64)v25;
    if ( v25 )
    {
      ACPIThermalBuildConstraints(v25, (__int64)a1, 1, 0);
      AMLIDereferenceHandleEx(v26);
    }
    *(_QWORD *)(v5.QuadPart + 120) = AMLIGetNamedChild(QuadPart, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((__int64 *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v50) < 0 )
      goto LABEL_7;
    if ( v50 > 2 && (v50 & 1) == 0 )
    {
      v27 = P;
      if ( *((_WORD *)P + ((unsigned __int64)v50 >> 1) - 1) )
        goto LABEL_58;
      *(_DWORD *)(v5.QuadPart + 304) = 0;
      *(_QWORD *)(v5.QuadPart + 312) = 0LL;
      if ( !v27 )
        goto LABEL_56;
      v28 = v27;
      v29 = 0x7FFFLL;
      do
      {
        if ( !*v28 )
          break;
        ++v28;
        --v29;
      }
      while ( v29 );
      if ( v29 )
        v30 = 0x7FFF - v29;
      else
        v30 = 0;
      if ( v29 )
      {
        v31 = 2 * v30;
        *(_QWORD *)(v5.QuadPart + 312) = v27;
        *(_WORD *)(v5.QuadPart + 304) = v31;
        *(_WORD *)(v5.QuadPart + 306) = v31 + 2;
LABEL_56:
        v27 = 0LL;
        P = 0LL;
        goto LABEL_58;
      }
    }
    v27 = P;
LABEL_58:
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints((__int64)a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v80, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v80));
      OverrideHandle = ACPIThermalGetOverrideHandle(a1);
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v45);
      v8 = v46;
      *(_DWORD *)(v5.QuadPart + 4) = v45;
      Time = v8;
      RtlTimeToTimeFields(&Time, &TimeFields);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        0x17u,
        v34);
      ACPIThermalGetParameter(a1, OverrideHandle, 843273311LL, &v45);
      *(_DWORD *)(v5.QuadPart + 8) = v45;
      v53 = v46;
      RtlTimeToTimeFields(&v53, &v67);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v67.Minute,
        (unsigned int)v67.Hour,
        0x18u,
        v35);
      ACPIThermalGetParameter(a1, OverrideHandle, 1448300639LL, &v45);
      *(_DWORD *)(v5.QuadPart + 20) = v45;
      v54 = v46;
      RtlTimeToTimeFields(&v54, &v68);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 20) / 0xAu,
        (unsigned int)v68.Minute,
        0x19u,
        v36);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414677343LL, &v45);
      *(_DWORD *)(v5.QuadPart + 28) = v45;
      v55 = v46;
      RtlTimeToTimeFields(&v55, &v69);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 28) / 0xAu,
        (unsigned int)v69.Minute,
        0x1Au,
        v37);
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, 1346786399LL, &v45) >= 0
        || (int)ACPIThermalGetParameter(a1, OverrideHandle, 1347638367LL, &v45) < 0 )
      {
        v9 = v45;
      }
      else
      {
        v9 = 100 * v45;
        v45 *= 100LL;
      }
      *(_DWORD *)(v5.QuadPart + 12) = v9;
      v56 = v46;
      RtlTimeToTimeFields(&v56, &v70);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v70.Minute,
        (unsigned int)v70.Hour,
        0x1Bu,
        v38);
      ACPIThermalGetParameter(a1, OverrideHandle, 861029215LL, &v45);
      *(_DWORD *)(v5.QuadPart + 24) = v45;
      v57 = v46;
      RtlTimeToTimeFields(&v57, &v71);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 24) / 0xAu,
        (unsigned int)v71.Minute,
        0x1Cu,
        v39);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414482015LL, &v45);
      *(_DWORD *)(v5.QuadPart + 76) = v45;
      v58 = v46;
      RtlTimeToTimeFields(&v58, &v72);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 76) / 0xAu,
        (unsigned int)v72.Minute,
        0x1Du,
        v40);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414811231LL, &v45);
      *(_DWORD *)(v5.QuadPart + 104) = v45;
      v59 = v46;
      RtlTimeToTimeFields(&v59, &v73);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 104) / 0xAu,
        (unsigned int)v73.Minute,
        0x1Eu,
        v41);
      v10 = v46;
      v11 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, (unsigned int)v80[v11], &v45) < 0 )
          break;
        *(_DWORD *)(v5.QuadPart + 4 * v11 + 36) = v45;
        Time.QuadPart = (__int64)byte_1C0067B08;
        v60 = v10;
        RtlTimeToTimeFields(&v60, &v74);
        v12 = a1[1];
        if ( (v12.QuadPart & 0x200000000000LL) != 0 && (v12.QuadPart & 0x400000000000LL) != 0 )
          Time = a1[71];
        WPP_RECORDER_SF_Dddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 4 * v11 + 36) / 0xAu,
          (unsigned int)v74.Minute,
          (unsigned int)v74.Hour,
          v42);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < 0xA );
      *(_BYTE *)(v5.QuadPart + 32) = v11;
      Parameter = ACPIThermalGetParameter(a1, OverrideHandle, 1280593247LL, &v45);
      v2 = v47;
      if ( Parameter < 0
        && (*(_DWORD *)(v5.QuadPart + 128) & 2) != 0
        && (memset(v78, 0, sizeof(v78)),
            v32 = (__int64 *)a1[89].QuadPart,
            v64 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v32, (__int64)&v64, 0, 1u, (__int64)v78, &v52) >= 0) )
      {
        if ( *(_WORD *)(v52 + 2) == 1 )
          v14 = *(unsigned int *)(v52 + 16);
        else
          v14 = v45;
        AMLIFreeDataBuffs(v52);
      }
      else
      {
        v14 = v45;
      }
      if ( v14 > 0x64 )
        LODWORD(v14) = 100;
      v15 = v46;
      *(_DWORD *)(v5.QuadPart + 80) = v14;
      v61 = v15;
      RtlTimeToTimeFields(&v61, &v75);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v75.Minute,
        (unsigned int)v75.Hour,
        0x20u,
        v42);
      v16 = *(_DWORD *)(v5.QuadPart + 128);
      v17 = 0LL;
      v45 = 0LL;
      if ( (v16 & 8) != 0 )
      {
        memset(v78, 0, sizeof(v78));
        v33 = (__int64 *)a1[89].QuadPart;
        v65 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v33, (__int64)&v65, 0, 3u, (__int64)v78, &v52) >= 0 )
        {
          if ( *(_WORD *)(v52 + 2) == 1 )
            v17 = *(unsigned int *)(v52 + 16);
          AMLIFreeDataBuffs(v52);
          if ( v17 > 0x64 )
            v17 = 100LL;
          v45 = v17;
        }
      }
      v18 = v46;
      *(_DWORD *)(v5.QuadPart + 84) = v17;
      v62 = v18;
      RtlTimeToTimeFields(&v62, &v76);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v76.Minute,
        (unsigned int)v76.Hour,
        0x21u,
        v43);
      ACPIThermalGetParameter(a1, OverrideHandle, 1348097119LL, &v45);
      *(_DWORD *)(v5.QuadPart + 88) = v45;
      RtlTimeToTimeFields(&v46, &v77);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 88) / 0xAu,
        (unsigned int)v77.Minute,
        0x22u,
        v44);
    }
    if ( v51 && *(_BYTE *)(v5.QuadPart + 272) )
    {
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( (v2 & 2) != 0 )
      ACPIThermalReadTemperature(a1, 1LL);
    if ( (v2 & 0x200) != 0 )
      ACPIThermalReadTemperature(a1, 0LL);
    return ACPIThermalLoop((__int64)a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
