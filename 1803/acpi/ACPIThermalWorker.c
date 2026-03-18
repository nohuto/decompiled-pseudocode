/*
 * XREFs of ACPIThermalWorker @ 0x1C0089A40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIThermalLoop @ 0x1C003CE74 (ACPIThermalLoop.c)
 *     ACPIThermalStopZoneWorker @ 0x1C003DBCC (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalUpdateConstraints @ 0x1C003DDFC (ACPIThermalUpdateConstraints.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C003E1F8 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C003E4C4 (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C003E734 (WPP_RECORDER_SF_ddqssdddd.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalBuildConstraints @ 0x1C0088E6C (ACPIThermalBuildConstraints.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C0088FD0 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C0089050 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00890F8 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalGetParameter @ 0x1C0089198 (ACPIThermalGetParameter.c)
 *     ACPIThermalReadTemperature @ 0x1C0089374 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(union _LARGE_INTEGER *a1, int a2)
{
  int v2; // r15d
  LONG result; // eax
  union _LARGE_INTEGER v5; // rdi
  _QWORD *QuadPart; // r14
  int v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // rax
  volatile signed __int32 *v10; // r12
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rsi
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rsi
  _WORD *v15; // rcx
  _WORD *v16; // r8
  __int64 v17; // rdx
  __int16 v18; // ax
  __int16 v19; // ax
  void *OverrideHandle; // r13
  union _LARGE_INTEGER v21; // rax
  int v22; // eax
  union _LARGE_INTEGER v23; // r15
  __int64 v24; // r14
  union _LARGE_INTEGER v25; // rax
  int Parameter; // eax
  _QWORD *v27; // rcx
  unsigned __int64 v28; // r14
  union _LARGE_INTEGER v29; // rax
  int v30; // eax
  unsigned __int64 v31; // r14
  _QWORD *v32; // rcx
  union _LARGE_INTEGER v33; // rax
  __int64 v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-E0h]
  __int64 v36; // [rsp+28h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+28h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+28h] [rbp-E0h]
  __int64 v42; // [rsp+28h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-E0h]
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
    QuadPart = (_QWORD *)a1[89].QuadPart;
    v51 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5.QuadPart + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_31;
    qmemcpy(v79, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v79));
    *(_BYTE *)(v5.QuadPart + 273) = (int)ACPIThermalCheckPolicySupport((__int64)a1) >= 0;
    v7 = ACPIThermalCheckNativeTemperatureSupport((__int64)a1);
    *(_DWORD *)(v5.QuadPart + 100) = 1;
    v8 = 0;
    *(_BYTE *)(v5.QuadPart + 274) = v7 >= 0;
    do
    {
      v9 = AMLIGetNamedChild(QuadPart, v79[v8]);
      v10 = (volatile signed __int32 *)v9;
      if ( !v9 )
        break;
      ACPIThermalBuildConstraints(v9, (__int64)a1, 0, v8);
      AMLIDereferenceHandleEx(v10);
      ++v8;
    }
    while ( v8 < 0xA );
    v11 = AMLIGetNamedChild(QuadPart, 1280528479);
    v2 = v47;
    v12 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      ACPIThermalBuildConstraints(v11, (__int64)a1, 1, 1u);
      AMLIDereferenceHandleEx(v12);
    }
    v13 = AMLIGetNamedChild(QuadPart, 1146770527);
    v14 = (volatile signed __int32 *)v13;
    if ( v13 )
    {
      ACPIThermalBuildConstraints(v13, (__int64)a1, 1, 0);
      AMLIDereferenceHandleEx(v14);
    }
    *(_QWORD *)(v5.QuadPart + 120) = AMLIGetNamedChild(QuadPart, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((__int64)a1, 0x5254535Fu, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v50) < 0 )
      goto LABEL_31;
    if ( v50 > 2 && (v50 & 1) == 0 )
    {
      v15 = P;
      if ( *((_WORD *)P + ((unsigned __int64)v50 >> 1) - 1) )
        goto LABEL_29;
      *(_DWORD *)(v5.QuadPart + 304) = 0;
      *(_QWORD *)(v5.QuadPart + 312) = 0LL;
      if ( !v15 )
        goto LABEL_27;
      v16 = v15;
      v17 = 0x7FFFLL;
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v17;
      }
      while ( v17 );
      if ( v17 )
        v18 = 0x7FFF - v17;
      else
        v18 = 0;
      if ( v17 )
      {
        v19 = 2 * v18;
        *(_QWORD *)(v5.QuadPart + 312) = v15;
        *(_WORD *)(v5.QuadPart + 304) = v19;
        *(_WORD *)(v5.QuadPart + 306) = v19 + 2;
LABEL_27:
        v15 = 0LL;
        P = 0LL;
        goto LABEL_29;
      }
    }
    v15 = P;
LABEL_29:
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
LABEL_31:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints((__int64)a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v80, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v80));
      OverrideHandle = ACPIThermalGetOverrideHandle((__int64)a1);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x3143545Fu, &v45);
      v21 = v46;
      *(_DWORD *)(v5.QuadPart + 4) = v45;
      Time = v21;
      RtlTimeToTimeFields(&Time, &TimeFields);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        TimeFields.Minute,
        TimeFields.Hour,
        0x17u,
        v34);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x3243545Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 8) = v45;
      v53 = v46;
      RtlTimeToTimeFields(&v53, &v67);
      WPP_RECORDER_SF_dqssdddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v67.Minute, v67.Hour, 0x18u, v35);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x5653505Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 20) = v45;
      v54 = v46;
      RtlTimeToTimeFields(&v54, &v68);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 20) / 0xAu,
        v68.Minute,
        0x19u,
        v36);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x5452435Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 28) = v45;
      v55 = v46;
      RtlTimeToTimeFields(&v55, &v69);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 28) / 0xAu,
        v69.Minute,
        0x1Au,
        v37);
      if ( (int)ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x5046545Fu, &v45) >= 0
        || (int)ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x5053545Fu, &v45) < 0 )
      {
        v22 = v45;
      }
      else
      {
        v22 = 100 * v45;
        v45 *= 100LL;
      }
      *(_DWORD *)(v5.QuadPart + 12) = v22;
      v56 = v46;
      RtlTimeToTimeFields(&v56, &v70);
      WPP_RECORDER_SF_dqssdddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v70.Minute, v70.Hour, 0x1Bu, v38);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x3352435Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 24) = v45;
      v57 = v46;
      RtlTimeToTimeFields(&v57, &v71);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 24) / 0xAu,
        v71.Minute,
        0x1Cu,
        v39);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x544F485Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 76) = v45;
      v58 = v46;
      RtlTimeToTimeFields(&v58, &v72);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 76) / 0xAu,
        v72.Minute,
        0x1Du,
        v40);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x54544E5Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 104) = v45;
      v59 = v46;
      RtlTimeToTimeFields(&v59, &v73);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 104) / 0xAu,
        v73.Minute,
        0x1Eu,
        v41);
      v23 = v46;
      v24 = 0LL;
      do
      {
        if ( (int)ACPIThermalGetParameter((__int64)a1, OverrideHandle, v80[v24], &v45) < 0 )
          break;
        *(_DWORD *)(v5.QuadPart + 4 * v24 + 36) = v45;
        Time.QuadPart = (__int64)byte_1C005B1F0;
        v60 = v23;
        RtlTimeToTimeFields(&v60, &v74);
        v25 = a1[1];
        if ( (v25.QuadPart & 0x200000000000LL) != 0 && (v25.QuadPart & 0x400000000000LL) != 0 )
          Time = a1[71];
        WPP_RECORDER_SF_Dddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 4 * v24 + 36) / 0xAu,
          (unsigned int)v74.Minute,
          (unsigned int)v74.Hour,
          v42);
        v24 = (unsigned int)(v24 + 1);
      }
      while ( (unsigned int)v24 < 0xA );
      *(_BYTE *)(v5.QuadPart + 32) = v24;
      Parameter = ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x4C544D5Fu, &v45);
      v2 = v47;
      if ( Parameter < 0
        && (*(_DWORD *)(v5.QuadPart + 128) & 2) != 0
        && (memset(v78, 0, sizeof(v78)),
            v27 = (_QWORD *)a1[89].QuadPart,
            v64 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v27, (__int64)&v64, 0, 1u, (__int64)v78, &v52) >= 0) )
      {
        if ( *(_WORD *)(v52 + 2) == 1 )
          v28 = *(unsigned int *)(v52 + 16);
        else
          v28 = v45;
        AMLIFreeDataBuffs(v52);
      }
      else
      {
        v28 = v45;
      }
      if ( v28 > 0x64 )
        LODWORD(v28) = 100;
      v29 = v46;
      *(_DWORD *)(v5.QuadPart + 80) = v28;
      v61 = v29;
      RtlTimeToTimeFields(&v61, &v75);
      WPP_RECORDER_SF_dqssdddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v75.Minute, v75.Hour, 0x20u, v42);
      v30 = *(_DWORD *)(v5.QuadPart + 128);
      v31 = 0LL;
      v45 = 0LL;
      if ( (v30 & 8) != 0 )
      {
        memset(v78, 0, sizeof(v78));
        v32 = (_QWORD *)a1[89].QuadPart;
        v65 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v32, (__int64)&v65, 0, 3u, (__int64)v78, &v52) >= 0 )
        {
          if ( *(_WORD *)(v52 + 2) == 1 )
            v31 = *(unsigned int *)(v52 + 16);
          AMLIFreeDataBuffs(v52);
          if ( v31 > 0x64 )
            v31 = 100LL;
          v45 = v31;
        }
      }
      v33 = v46;
      *(_DWORD *)(v5.QuadPart + 84) = v31;
      v62 = v33;
      RtlTimeToTimeFields(&v62, &v76);
      WPP_RECORDER_SF_dqssdddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v76.Minute, v76.Hour, 0x21u, v43);
      ACPIThermalGetParameter((__int64)a1, OverrideHandle, 0x505A545Fu, &v45);
      *(_DWORD *)(v5.QuadPart + 88) = v45;
      RtlTimeToTimeFields(&v46, &v77);
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 88) / 0xAu,
        v77.Minute,
        0x22u,
        v44);
    }
    if ( v51 && *(_BYTE *)(v5.QuadPart + 272) )
    {
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( (v2 & 2) != 0 )
      ACPIThermalReadTemperature((__int64)a1, 1);
    if ( (v2 & 0x200) != 0 )
      ACPIThermalReadTemperature((__int64)a1, 0);
    return ACPIThermalLoop((__int64)a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
