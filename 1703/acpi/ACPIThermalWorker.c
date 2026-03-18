/*
 * XREFs of ACPIThermalWorker @ 0x1C0090A20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C0021024 (WPP_RECORDER_SF_ddqssdddd.c)
 *     ACPIThermalLoop @ 0x1C0021600 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C0021F0C (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C0022194 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0022328 (ACPIThermalUpdateConstraints.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0058610 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C0090010 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetParameter @ 0x1C009174C (ACPIThermalGetParameter.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00917E4 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C0091878 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C00918F8 (ACPIThermalCheckPolicySupport.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0091F2C (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalReadTemperature @ 0x1C00A4500 (ACPIThermalReadTemperature.c)
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
  volatile signed __int32 *v22; // r12
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rsi
  __int64 v25; // rdx
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  _WORD *v30; // rcx
  _WORD *v31; // rax
  __int64 v32; // rdx
  __int16 v33; // r9
  union _LARGE_INTEGER v34; // rcx
  union _LARGE_INTEGER v35; // rcx
  int v36; // [rsp+28h] [rbp-E0h]
  int v37; // [rsp+28h] [rbp-E0h]
  int v38; // [rsp+28h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-E0h]
  int v40; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-E0h]
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER v48; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+B0h] [rbp-58h] BYREF
  int v53; // [rsp+B4h] [rbp-54h]
  __int64 v54; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER v55; // [rsp+C0h] [rbp-48h] BYREF
  union _LARGE_INTEGER v56; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v57; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v58; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v59; // [rsp+E0h] [rbp-28h] BYREF
  union _LARGE_INTEGER v60; // [rsp+E8h] [rbp-20h] BYREF
  union _LARGE_INTEGER v61; // [rsp+F0h] [rbp-18h] BYREF
  union _LARGE_INTEGER v62; // [rsp+F8h] [rbp-10h] BYREF
  union _LARGE_INTEGER v63; // [rsp+100h] [rbp-8h] BYREF
  union _LARGE_INTEGER v64; // [rsp+108h] [rbp+0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+110h] [rbp+8h] BYREF
  __int128 v66; // [rsp+118h] [rbp+10h] BYREF
  __int128 v67; // [rsp+128h] [rbp+20h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+138h] [rbp+30h] BYREF
  struct _TIME_FIELDS v69; // [rsp+148h] [rbp+40h] BYREF
  struct _TIME_FIELDS v70; // [rsp+158h] [rbp+50h] BYREF
  struct _TIME_FIELDS v71; // [rsp+168h] [rbp+60h] BYREF
  struct _TIME_FIELDS v72; // [rsp+178h] [rbp+70h] BYREF
  struct _TIME_FIELDS v73; // [rsp+188h] [rbp+80h] BYREF
  struct _TIME_FIELDS v74; // [rsp+198h] [rbp+90h] BYREF
  struct _TIME_FIELDS v75; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _TIME_FIELDS v76; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _TIME_FIELDS v77; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _TIME_FIELDS v78; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _TIME_FIELDS v79; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v80[48]; // [rsp+1F8h] [rbp+F0h] BYREF
  _DWORD v81[10]; // [rsp+228h] [rbp+120h] BYREF
  _DWORD v82[10]; // [rsp+250h] [rbp+148h] BYREF

  v49 = a2;
  v2 = a2;
  result = MEMORY[0xFFFFF78000000008];
  v48.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker((__int64)a1);
  if ( (a1[24].LowPart & 0x8000000) == 0 )
  {
    v5 = a1[25];
    QuadPart = (__int64 *)a1[89].QuadPart;
    v53 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5.QuadPart + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v81, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v81));
    *(_BYTE *)(v5.QuadPart + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v19 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5.QuadPart + 100) = 1;
    v20 = 0;
    *(_BYTE *)(v5.QuadPart + 274) = v19 >= 0;
    do
    {
      v21 = AMLIGetNamedChild(QuadPart, v81[v20]);
      v22 = (volatile signed __int32 *)v21;
      if ( !v21 )
        break;
      ACPIThermalBuildConstraints(v21, (__int64)a1, 0, v20);
      AMLIDereferenceHandleEx(v22, v28);
      ++v20;
    }
    while ( v20 < 0xA );
    v23 = AMLIGetNamedChild(QuadPart, 1280528479);
    v2 = v49;
    v24 = (volatile signed __int32 *)v23;
    if ( v23 )
    {
      ACPIThermalBuildConstraints(v23, (__int64)a1, 1, 1u);
      AMLIDereferenceHandleEx(v24, v25);
    }
    v26 = AMLIGetNamedChild(QuadPart, 1146770527);
    v27 = (volatile signed __int32 *)v26;
    if ( v26 )
    {
      ACPIThermalBuildConstraints(v26, (__int64)a1, 1, 0);
      AMLIDereferenceHandleEx(v27, v29);
    }
    *(_QWORD *)(v5.QuadPart + 120) = AMLIGetNamedChild(QuadPart, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((__int64 *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v52) < 0 )
      goto LABEL_7;
    if ( v52 > 2 && (v52 & 1) == 0 )
    {
      v30 = P;
      if ( *((_WORD *)P + ((unsigned __int64)v52 >> 1) - 1) )
        goto LABEL_58;
      *(_DWORD *)(v5.QuadPart + 304) = 0;
      *(_QWORD *)(v5.QuadPart + 312) = 0LL;
      if ( !v30 )
        goto LABEL_56;
      v31 = v30;
      v32 = 0x7FFFLL;
      do
      {
        if ( !*v31 )
          break;
        ++v31;
        --v32;
      }
      while ( v32 );
      if ( v32 )
        v33 = 0x7FFF - v32;
      else
        v33 = 0;
      if ( v32 )
      {
        *(_QWORD *)(v5.QuadPart + 312) = v30;
        *(_WORD *)(v5.QuadPart + 304) = 2 * v33;
        *(_WORD *)(v5.QuadPart + 306) = 2 * v33 + 2;
LABEL_56:
        v30 = 0LL;
        P = 0LL;
        goto LABEL_58;
      }
    }
    v30 = P;
LABEL_58:
    if ( v30 )
      ExFreePoolWithTag(v30, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints((__int64)a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v82, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v82));
      OverrideHandle = ACPIThermalGetOverrideHandle(a1);
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v47);
      v8 = v48;
      *(_DWORD *)(v5.QuadPart + 4) = v47;
      Time = v8;
      RtlTimeToTimeFields(&Time, &TimeFields);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        0x17u,
        v36);
      ACPIThermalGetParameter(a1, OverrideHandle, 843273311LL, &v47);
      *(_DWORD *)(v5.QuadPart + 8) = v47;
      v55 = v48;
      RtlTimeToTimeFields(&v55, &v69);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v69.Minute,
        (unsigned int)v69.Hour,
        0x18u,
        v37);
      ACPIThermalGetParameter(a1, OverrideHandle, 1448300639LL, &v47);
      *(_DWORD *)(v5.QuadPart + 20) = v47;
      v56 = v48;
      RtlTimeToTimeFields(&v56, &v70);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 20) / 0xAu,
        (unsigned int)v70.Minute,
        0x19u,
        v38);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414677343LL, &v47);
      *(_DWORD *)(v5.QuadPart + 28) = v47;
      v57 = v48;
      RtlTimeToTimeFields(&v57, &v71);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 28) / 0xAu,
        (unsigned int)v71.Minute,
        0x1Au,
        v39);
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, 1346786399LL, &v47) >= 0
        || (int)ACPIThermalGetParameter(a1, OverrideHandle, 1347638367LL, &v47) < 0 )
      {
        v9 = v47;
      }
      else
      {
        v9 = 100 * v47;
        v47 *= 100LL;
      }
      *(_DWORD *)(v5.QuadPart + 12) = v9;
      v58 = v48;
      RtlTimeToTimeFields(&v58, &v72);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v72.Minute,
        (unsigned int)v72.Hour,
        0x1Bu,
        v40);
      ACPIThermalGetParameter(a1, OverrideHandle, 861029215LL, &v47);
      *(_DWORD *)(v5.QuadPart + 24) = v47;
      v59 = v48;
      RtlTimeToTimeFields(&v59, &v73);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 24) / 0xAu,
        (unsigned int)v73.Minute,
        0x1Cu,
        v41);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414482015LL, &v47);
      *(_DWORD *)(v5.QuadPart + 76) = v47;
      v60 = v48;
      RtlTimeToTimeFields(&v60, &v74);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 76) / 0xAu,
        (unsigned int)v74.Minute,
        0x1Du,
        v42);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414811231LL, &v47);
      *(_DWORD *)(v5.QuadPart + 104) = v47;
      v61 = v48;
      RtlTimeToTimeFields(&v61, &v75);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 104) / 0xAu,
        (unsigned int)v75.Minute,
        0x1Eu,
        v43);
      v10 = v48;
      v11 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, (unsigned int)v82[v11], &v47) < 0 )
          break;
        *(_DWORD *)(v5.QuadPart + 4 * v11 + 36) = v47;
        Time.QuadPart = (__int64)byte_1C0066CD0;
        v62 = v10;
        RtlTimeToTimeFields(&v62, &v76);
        v12 = a1[1];
        if ( (v12.QuadPart & 0x200000000000LL) != 0 && (v12.QuadPart & 0x400000000000LL) != 0 )
          Time = a1[71];
        WPP_RECORDER_SF_Dddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 4 * v11 + 36) / 0xAu,
          (unsigned int)v76.Minute,
          (unsigned int)v76.Hour,
          v44);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < 0xA );
      *(_BYTE *)(v5.QuadPart + 32) = v11;
      Parameter = ACPIThermalGetParameter(a1, OverrideHandle, 1280593247LL, &v47);
      v2 = v49;
      if ( Parameter < 0
        && (*(_DWORD *)(v5.QuadPart + 128) & 2) != 0
        && (memset(v80, 0, sizeof(v80)),
            v34 = a1[89],
            v66 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v34.LowPart, (unsigned int)&v66, 0, 1, (__int64)v80, (__int64)&v54) >= 0) )
      {
        if ( *(_WORD *)(v54 + 2) == 1 )
          v14 = *(unsigned int *)(v54 + 16);
        else
          v14 = v47;
        AMLIFreeDataBuffs(v54);
      }
      else
      {
        v14 = v47;
      }
      if ( v14 > 0x64 )
        LODWORD(v14) = 100;
      v15 = v48;
      *(_DWORD *)(v5.QuadPart + 80) = v14;
      v63 = v15;
      RtlTimeToTimeFields(&v63, &v77);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v77.Minute,
        (unsigned int)v77.Hour,
        0x20u,
        v44);
      v16 = *(_DWORD *)(v5.QuadPart + 128);
      v17 = 0LL;
      v47 = 0LL;
      if ( (v16 & 8) != 0 )
      {
        memset(v80, 0, sizeof(v80));
        v35 = a1[89];
        v67 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v35.LowPart, (unsigned int)&v67, 0, 3, (__int64)v80, (__int64)&v54) >= 0 )
        {
          if ( *(_WORD *)(v54 + 2) == 1 )
            v17 = *(unsigned int *)(v54 + 16);
          AMLIFreeDataBuffs(v54);
          if ( v17 > 0x64 )
            v17 = 100LL;
          v47 = v17;
        }
      }
      v18 = v48;
      *(_DWORD *)(v5.QuadPart + 84) = v17;
      v64 = v18;
      RtlTimeToTimeFields(&v64, &v78);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v78.Minute,
        (unsigned int)v78.Hour,
        0x21u,
        v45);
      ACPIThermalGetParameter(a1, OverrideHandle, 1348097119LL, &v47);
      *(_DWORD *)(v5.QuadPart + 88) = v47;
      RtlTimeToTimeFields(&v48, &v79);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 88) / 0xAu,
        (unsigned int)v79.Minute,
        0x22u,
        v46);
    }
    if ( v53 && *(_BYTE *)(v5.QuadPart + 272) )
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
