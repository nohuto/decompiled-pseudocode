/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180022070
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003C0C0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022410 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180022810 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18005D9CC (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005DA6C (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005E204 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18005E3F8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18005EBF4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
        __int64 *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2,
        unsigned int *a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // edi
  int v13; // esi
  unsigned int v14; // edx
  struct _RM_RESOURCE_USAGE_LIMITS *v15; // r14
  int *v16; // r9
  __int64 *v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v21; // ecx
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // r9d
  UCHAR v25; // dl
  unsigned int v26; // ebx
  unsigned int v27; // eax
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_RESOURCE_USAGE_LIMITS *v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-30h]
  _OWORD v40[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v41; // [rsp+100h] [rbp+0h] BYREF
  __int128 v42; // [rsp+110h] [rbp+10h]
  __int128 v43; // [rsp+120h] [rbp+20h]
  __int128 v44; // [rsp+130h] [rbp+30h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int128 v46; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v47[2]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v48[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v49[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v50; // [rsp+1A4h] [rbp+A4h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  __int64 v52; // [rsp+1C0h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+D0h]
  __int64 v54; // [rsp+1E0h] [rbp+E0h]
  __int64 v55; // [rsp+1E8h] [rbp+E8h]
  __int64 v56; // [rsp+1F8h] [rbp+F8h]
  __int64 v57; // [rsp+200h] [rbp+100h]
  __int64 v58; // [rsp+208h] [rbp+108h]
  __int64 v59; // [rsp+210h] [rbp+110h]
  __int64 v60; // [rsp+218h] [rbp+118h]
  __int64 v61; // [rsp+220h] [rbp+120h]
  __int64 v62; // [rsp+238h] [rbp+138h]
  __int64 v63; // [rsp+240h] [rbp+140h]
  __int64 v64; // [rsp+248h] [rbp+148h]
  __int64 v65; // [rsp+250h] [rbp+150h]
  __int64 v66; // [rsp+258h] [rbp+158h]
  __int64 v67; // [rsp+260h] [rbp+160h]
  __int64 v68; // [rsp+268h] [rbp+168h]
  __int64 v69; // [rsp+270h] [rbp+170h]
  __int64 v70; // [rsp+278h] [rbp+178h]
  __int64 v71; // [rsp+280h] [rbp+180h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp+190h] BYREF
  void *v73; // [rsp+2A0h] [rbp+1A0h]
  int v74; // [rsp+2A8h] [rbp+1A8h]
  int v75; // [rsp+2ACh] [rbp+1ACh]
  __int128 *v76; // [rsp+2B0h] [rbp+1B0h]
  __int64 v77; // [rsp+2B8h] [rbp+1B8h]
  char *v78; // [rsp+2C0h] [rbp+1C0h]
  __int64 v79; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v81; // [rsp+2F0h] [rbp+1F0h]
  __int64 v82; // [rsp+2F8h] [rbp+1F8h]
  int *v83; // [rsp+300h] [rbp+200h]
  __int64 v84; // [rsp+308h] [rbp+208h]
  __int128 *v85; // [rsp+310h] [rbp+210h]
  __int64 v86; // [rsp+318h] [rbp+218h]
  char *v87; // [rsp+320h] [rbp+220h]
  __int64 v88; // [rsp+328h] [rbp+228h]
  _OWORD *v89; // [rsp+330h] [rbp+230h]
  __int64 v90; // [rsp+338h] [rbp+238h]
  char *v91; // [rsp+340h] [rbp+240h]
  __int64 v92; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v93; // [rsp+350h] [rbp+250h] BYREF
  struct _RM_RESOURCE_USAGE_LIMITS **v94; // [rsp+370h] [rbp+270h]
  __int64 v95; // [rsp+378h] [rbp+278h]
  __int128 *v96; // [rsp+380h] [rbp+280h]
  __int64 v97; // [rsp+388h] [rbp+288h]
  char *v98; // [rsp+390h] [rbp+290h]
  __int64 v99; // [rsp+398h] [rbp+298h]

  v29 = a2;
  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  memset_0(v49, 0, 0xF0uLL);
  v8 = *(_QWORD *)(v6 + 32);
  v50 = -1LL;
  NtManagePartition(v8, 0LL, 0LL, v49, 240);
  v9 = RmpPageSize;
  v10 = RmpPageSize * v71;
  memset_0(&v41, 0, 0x50uLL);
  v11 = v7 + 480;
  *(_QWORD *)&v45 = v62 + v63 + v64 + v65 + v66 + v67 + v68 + v69 + v45;
  *((_QWORD *)&v41 + 1) = v9 * v52 - v10;
  *((_QWORD *)&v43 + 1) = v9 * v53 - v10;
  *((_QWORD *)&v42 + 1) = v9 * v52 - v9 * v51;
  *(_QWORD *)&v42 = v9 * v51 - v10;
  *((_QWORD *)&v44 + 1) = *((_QWORD *)&v43 + 1) - v9 * (v54 + v55 + v56 + v57 + v58 + v59 + v61 + v60);
  *(_QWORD *)&v44 = v9 * (v54 + v55 + v56 + v57 + v58 + v59 + v61 + v60);
  *(_QWORD *)&v41 = v9 * v70 - v10;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 424),
    (struct _RM_REMEDIATION_ACTIONS *)(v7 + 480),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v41,
    v41,
    v29);
  v37 = v41;
  v12 = 0;
  v39 = v43;
  v38 = v42;
  v13 = 0;
  v40[1] = v45;
  v40[0] = v44;
  *(_WORD *)(v6 + 188) = 0;
  memset_0(&v32, 0, 0x50uLL);
  v14 = 4;
  v15 = v29;
  v16 = (int *)(v11 + 36);
  *((_QWORD *)&v32 + 1) = *((_QWORD *)&v37 + 1);
  *((_QWORD *)&v34 + 1) = *((_QWORD *)&v39 + 1);
  v17 = (__int64 *)((char *)v29 + 88);
  while ( 1 )
  {
    v18 = *(v17 - 5);
    if ( (unsigned __int64)v38 >= v18 )
    {
      v21 = v14;
      if ( v12 > v14 )
        v21 = v12;
      v12 = v21;
      v22 = *(v16 - 5);
      if ( v22 )
      {
        *(_QWORD *)&v33 = *(v17 - 5);
        *((_QWORD *)&v33 + 1) = *((_QWORD *)&v37 + 1) - v18;
        goto LABEL_19;
      }
    }
    v19 = *v17;
    if ( *((_QWORD *)&v40[0] + 1) >= (unsigned __int64)*v17 )
    {
      v23 = v14;
      if ( v12 > v14 )
        v23 = v12;
      v12 = v23;
      v22 = *v16;
      if ( *v16 )
        break;
    }
    --v17;
    --v16;
    if ( !--v14 )
      goto LABEL_5;
  }
  *((_QWORD *)&v35 + 1) = *v17;
  *(_QWORD *)&v35 = *((_QWORD *)&v39 + 1) - v19;
LABEL_19:
  v13 = v22;
  if ( v22 )
  {
    v46 = v32;
    v47[1] = v34;
    v47[0] = v33;
    v48[1] = v36;
    v48[0] = v35;
  }
LABEL_5:
  *a3 = v12;
  if ( !v13 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( hProvider > 5u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
    {
      v77 = 8LL;
      v76 = &v38;
      v78 = (char *)v40 + 8;
      v79 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007FD60 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800920B8;
      v73 = &unk_18007FD6B;
      UserData.Reserved = 2;
      v74 = 69;
      v75 = 1;
      EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v13 != 4 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v28 = v13;
    v81 = &v28;
    v83 = &v30;
    v85 = &v38;
    v87 = (char *)v40 + 8;
    v89 = v47;
    v91 = (char *)v48 + 8;
    v82 = 4LL;
    v30 = v24;
    v84 = 4LL;
    v86 = 8LL;
    v88 = 8LL;
    v90 = 8LL;
    v92 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007FEA1, 0LL, 0LL, 8u, &pData);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v13 )
  {
    case 2:
      v27 = RmpMemoryMonitorEmptyWorkingSets(a1, &v37, &v46, 0LL);
      goto LABEL_38;
    case 3:
      v26 = RmpMemoryMonitorEmptyWorkingSets(a1, &v37, &v46, 1LL);
      if ( v26 != 2 )
        goto LABEL_39;
      *((_QWORD *)&v48[0] + 1) = *((_QWORD *)v15 + 14);
      v27 = RmpMemoryMonitorEmptySystemStore(a1, &v37, &v46);
LABEL_38:
      v26 = v27;
      goto LABEL_39;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      v26 = 3;
      goto LABEL_39;
    case 5:
      v27 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v37, &v46);
      goto LABEL_38;
  }
  if ( v13 != 7 )
  {
    v26 = 2;
LABEL_39:
    *((_DWORD *)a1 + 23) &= ~2u;
    goto LABEL_40;
  }
  v26 = RmpMemoryMonitorRevokeAnyHost(a1, &v37, &v46, v15);
  if ( v26 != 2 )
    goto LABEL_39;
LABEL_40:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v25, 0LL) )
  {
    if ( v13 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v37);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
        {
          LODWORD(v29) = v26;
          v94 = &v29;
          v96 = &v38;
          v98 = (char *)v40 + 8;
          v95 = 4LL;
          v97 = 8LL;
          v99 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008045C, 0LL, 0LL, 5u, &v93);
        }
      }
    }
  }
  return v26;
}
