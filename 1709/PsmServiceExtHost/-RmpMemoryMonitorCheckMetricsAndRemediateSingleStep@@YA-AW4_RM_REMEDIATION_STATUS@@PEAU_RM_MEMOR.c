/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180009070
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800096F0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18003E848 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003E8E0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003F06C (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18003F24C (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003F9F0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(__int64 *a1, __int64 *a2, unsigned int *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // edi
  __int64 *v9; // rax
  unsigned int v10; // r10d
  int *v11; // rsi
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  int v16; // r11d
  const GUID *v17; // r8
  const GUID *v18; // r9
  UCHAR v19; // dl
  unsigned int v20; // ebx
  unsigned int v21; // eax
  const GUID *v22; // r8
  const GUID *v23; // r9
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v26; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-40h]
  _OWORD v36[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v38[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v39[2]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v40[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v41; // [rsp+150h] [rbp+50h]
  __int128 v42; // [rsp+160h] [rbp+60h]
  __int128 v43; // [rsp+170h] [rbp+70h]
  __int128 v44; // [rsp+180h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+190h] [rbp+90h] BYREF
  void *v46; // [rsp+1A0h] [rbp+A0h]
  int v47; // [rsp+1A8h] [rbp+A8h]
  int v48; // [rsp+1ACh] [rbp+ACh]
  __int128 *v49; // [rsp+1B0h] [rbp+B0h]
  __int64 v50; // [rsp+1B8h] [rbp+B8h]
  char *v51; // [rsp+1C0h] [rbp+C0h]
  __int64 v52; // [rsp+1C8h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v54; // [rsp+1F0h] [rbp+F0h]
  __int64 v55; // [rsp+1F8h] [rbp+F8h]
  int *v56; // [rsp+200h] [rbp+100h]
  __int64 v57; // [rsp+208h] [rbp+108h]
  __int128 *v58; // [rsp+210h] [rbp+110h]
  __int64 v59; // [rsp+218h] [rbp+118h]
  char *v60; // [rsp+220h] [rbp+120h]
  __int64 v61; // [rsp+228h] [rbp+128h]
  _OWORD *v62; // [rsp+230h] [rbp+130h]
  __int64 v63; // [rsp+238h] [rbp+138h]
  char *v64; // [rsp+240h] [rbp+140h]
  __int64 v65; // [rsp+248h] [rbp+148h]
  EVENT_DATA_DESCRIPTOR v66; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v67; // [rsp+270h] [rbp+170h]
  __int64 v68; // [rsp+278h] [rbp+178h]
  __int128 *v69; // [rsp+280h] [rbp+180h]
  __int64 v70; // [rsp+288h] [rbp+188h]
  char *v71; // [rsp+290h] [rbp+190h]
  __int64 v72; // [rsp+298h] [rbp+198h]

  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v6, (struct _RM_SYSTEM_MEMORY_METRICS *)v40);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v7 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v40,
    v40[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v33 = *(_OWORD *)v40;
  v35 = v42;
  v34 = v41;
  v36[1] = v44;
  v36[0] = v43;
  *(_WORD *)(v6 + 188) = 0;
  v8 = 0;
  memset_0(&v28, 0, 0x50uLL);
  v9 = a2 + 11;
  v10 = 0;
  v11 = (int *)(v7 + 472);
  *((_QWORD *)&v28 + 1) = *((_QWORD *)&v33 + 1);
  v12 = 4;
  *((_QWORD *)&v30 + 1) = *((_QWORD *)&v35 + 1);
  while ( 1 )
  {
    v13 = *(v9 - 5);
    if ( (unsigned __int64)v34 >= v13 )
    {
      v16 = *v11;
      if ( v10 <= v12 )
        v10 = v12;
      if ( v16 )
      {
        *(_QWORD *)&v29 = *(v9 - 5);
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&v33 + 1) - v13;
        goto LABEL_19;
      }
    }
    v14 = *v9;
    if ( *((_QWORD *)&v36[0] + 1) >= (unsigned __int64)*v9 )
    {
      v16 = v11[5];
      if ( v10 <= v12 )
        v10 = v12;
      if ( v16 )
        break;
    }
    --v9;
    --v11;
    if ( !--v12 )
      goto LABEL_5;
  }
  *((_QWORD *)&v31 + 1) = *v9;
  *(_QWORD *)&v31 = *((_QWORD *)&v35 + 1) - v14;
LABEL_19:
  v8 = v16;
  v37 = v28;
  v38[1] = v30;
  v38[0] = v29;
  v39[1] = v32;
  v39[0] = v31;
LABEL_5:
  *a3 = v10;
  if ( !v8 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( hProvider > 5u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
    {
      v50 = 8LL;
      v49 = &v34;
      v51 = (char *)v36 + 8;
      v52 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180059A96 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800670C8;
      v46 = &unk_180059AA1;
      UserData.Reserved = 2;
      v47 = 69;
      v48 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v8 != 4 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v24 = v8;
    v54 = &v24;
    v56 = &v25;
    v58 = &v34;
    v60 = (char *)v36 + 8;
    v62 = v38;
    v64 = (char *)v39 + 8;
    v55 = 4LL;
    v25 = (int)v18;
    v57 = 4LL;
    v59 = 8LL;
    v61 = 8LL;
    v63 = 8LL;
    v65 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059BD7, v17, v18, 8u, &pData);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v8 )
  {
    case 2:
      v21 = RmpMemoryMonitorEmptyWorkingSets(a1, &v33, &v37, 0LL);
      goto LABEL_37;
    case 3:
      v20 = RmpMemoryMonitorEmptyWorkingSets(a1, &v33, &v37, 1LL);
      if ( v20 != 2 )
        goto LABEL_38;
      *((_QWORD *)&v39[0] + 1) = a2[14];
      v21 = RmpMemoryMonitorEmptySystemStore(a1, &v33, &v37);
LABEL_37:
      v20 = v21;
      goto LABEL_38;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      v20 = 3;
      goto LABEL_38;
    case 5:
      v21 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v33, &v37);
      goto LABEL_37;
  }
  if ( v8 != 7 )
  {
    v20 = 2;
LABEL_38:
    *((_DWORD *)a1 + 23) &= ~2u;
    goto LABEL_39;
  }
  v20 = RmpMemoryMonitorRevokeAnyHost(a1, &v33, &v37, a2);
  if ( v20 != 2 )
    goto LABEL_38;
LABEL_39:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v19, 0LL) )
  {
    if ( v8 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v33);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
        {
          v26 = v20;
          v67 = &v26;
          v69 = &v34;
          v71 = (char *)v36 + 8;
          v68 = 4LL;
          v70 = 8LL;
          v72 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A21D, v22, v23, 5u, &v66);
        }
      }
    }
  }
  return v20;
}
