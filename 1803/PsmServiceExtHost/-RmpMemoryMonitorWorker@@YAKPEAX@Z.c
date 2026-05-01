/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003C0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18001DA00 (-LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180022070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022410 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180024F18 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18002EB00 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180031888 (-RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LE.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003C57C (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18005943C (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z @ 0x1800596D4 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18005D5B8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18005D988 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x18005D9A4 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18005E3F8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  __int64 v2; // rdi
  DWORD TickCount; // eax
  int v4; // r12d
  int v5; // edx
  int v6; // r13d
  int i; // eax
  int v8; // ebx
  int v9; // ebx
  DWORD v10; // edi
  struct _RM_PARTITION *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  DWORD v18; // esi
  _QWORD *Value; // rdi
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  bool v23; // zf
  DWORD v24; // edi
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int v31; // ebx
  unsigned __int8 v32; // al
  struct _RM_PARTITION *v33; // rbx
  DWORD v34; // ebx
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v41[56]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-78h]
  __int128 v43; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-50h]
  __int128 v45; // [rsp+C8h] [rbp-40h]
  __int128 v46; // [rsp+D8h] [rbp-30h]
  __int128 v47; // [rsp+E8h] [rbp-20h]
  _BYTE v48[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v49; // [rsp+FCh] [rbp-Ch]
  __int64 v50; // [rsp+110h] [rbp+8h]
  __int64 v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  __int64 v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  __int64 v62; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  __int64 v64; // [rsp+1A8h] [rbp+A0h]
  __int64 v65; // [rsp+1B0h] [rbp+A8h]
  __int64 v66; // [rsp+1B8h] [rbp+B0h]
  __int64 v67; // [rsp+1C0h] [rbp+B8h]
  __int64 v68; // [rsp+1C8h] [rbp+C0h]
  __int64 v69; // [rsp+1D0h] [rbp+C8h]
  __int64 v70; // [rsp+1D8h] [rbp+D0h]
  _OWORD v71[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  _OWORD v72[2]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v73[104]; // [rsp+238h] [rbp+130h] BYREF
  unsigned __int64 v74; // [rsp+2A0h] [rbp+198h]
  _BYTE v75[144]; // [rsp+2B8h] [rbp+1B0h] BYREF
  EVENT_DATA_DESCRIPTOR v76; // [rsp+348h] [rbp+240h] BYREF
  int *v77; // [rsp+368h] [rbp+260h]
  __int64 v78; // [rsp+370h] [rbp+268h]
  char *v79; // [rsp+378h] [rbp+270h]
  __int64 v80; // [rsp+380h] [rbp+278h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+388h] [rbp+280h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v75);
  v37 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 424LL;
  v2 = v37;
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RmpAcquireGlobalLock();
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, 4LL);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_POLICY *)v2,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v73,
    0LL);
  v4 = 0;
  LODWORD(v36) = 0;
  while ( 1 )
  {
    v5 = 7;
    if ( v4 >= 4 )
      v5 = 39;
    RmpMemoryMonitorWaitForEvents(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      v5,
      0xFFFFFFFF,
      (enum _RM_MEMORY_MONITOR_EVENT *)&v38);
    v6 = v38;
    if ( v38 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
                (__int64 *)Parameter,
                (struct _RM_RESOURCE_USAGE_LIMITS *)v73,
                (unsigned int *)&v36);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
                (__int64 *)Parameter,
                (struct _RM_RESOURCE_USAGE_LIMITS *)v73,
                (unsigned int *)&v36) )
    {
      if ( i == 3 )
        break;
      v8 = 0;
      if ( i == 2 )
        goto LABEL_8;
    }
    v8 = i;
LABEL_8:
    v4 = v36;
    RmpMemoryMonitorUpdateMemoryUsageLevel(Parameter, v36);
    if ( v8 == 4 )
      break;
    if ( v6 != 1 && v8 == 3 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007FCEA, 0LL, 0LL, 2u, &pData);
    if ( *(_DWORD *)(v2 + 96) && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 76), *(_DWORD *)(Parameter + 80)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
        (struct _RM_RESOURCE_USAGE_LIMITS *)v73);
      *(_DWORD *)(Parameter + 80) = GetTickCount();
    }
    if ( *(_DWORD *)(v2 + 100) )
    {
      v9 = *(_DWORD *)(Parameter + 88);
      v10 = *(_DWORD *)(Parameter + 84);
      if ( GetTickCount() - v9 >= v10 )
      {
        v11 = *(struct _RM_PARTITION **)Parameter;
        v12 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
        memset_0(v73, 0, 0x80uLL);
        memset_0(v48, 0, 0xF0uLL);
        v13 = *((_QWORD *)v11 + 4);
        v49 = -1LL;
        NtManagePartition(v13, 0LL, 0LL, v48, 240);
        v14 = RmpPageSize;
        v15 = RmpPageSize * v70;
        memset_0(&v43, 0, 0x50uLL);
        *(_QWORD *)&v47 = v61 + v62 + v63 + v64 + v65 + v66 + v67 + v68 + v47;
        *((_QWORD *)&v43 + 1) = v14 * v51 - v15;
        *((_QWORD *)&v45 + 1) = v14 * v52 - v15;
        *((_QWORD *)&v44 + 1) = v14 * v51 - v14 * v50;
        *(_QWORD *)&v44 = v14 * v50 - v15;
        *(_QWORD *)&v46 = v14 * (v53 + v54 + v55 + v56 + v57 + v58 + v60 + v59);
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&v45 + 1) - v46;
        *(_QWORD *)&v43 = v14 * v69 - v15;
        RmpPolicyComputeUsageLimits(
          (struct _RM_USAGE_LIMIT_SETTINGS *)(v12 + 424),
          (struct _RM_REMEDIATION_ACTIONS *)(v12 + 480),
          (struct _RM_SYSTEM_MEMORY_METRICS *)&v43,
          v43,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v73);
        v71[0] = v43;
        v71[2] = v45;
        v71[1] = v44;
        v72[1] = v47;
        v72[0] = v46;
        *((_WORD *)v11 + 94) = 0;
        v16 = v74;
        if ( *((_QWORD *)&v72[0] + 1) > v74 )
        {
          memset_0(v41, 0, 0x50uLL);
          v42 = v16;
          v31 = RmpMemoryMonitorEmptyWorkingSets(Parameter, v71, v41, 6LL);
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v39 = v31;
            v77 = &v39;
            v79 = (char *)v72 + 8;
            v78 = 4LL;
            v80 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007FD13, 0LL, 0LL, 4u, &v76);
          }
          if ( !v31 )
            *(_DWORD *)(Parameter + 88) = GetTickCount();
        }
      }
    }
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 2232LL);
    if ( v17 )
    {
      v18 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v18) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800937F8 = GetCurrentThreadId();
      v20 = *(_DWORD *)(v17 + 184);
      if ( (v20 & 3) == 0 )
      {
        v21 = *(_QWORD *)(v17 + 168);
        *(_DWORD *)(v17 + 184) = v20 | 1;
        TpPostWork(v21);
      }
      if ( hProvider )
        ExecutionModel::ResourceManager::LogTimedOutRevocationRequests((ExecutionModel::ResourceManager *)v17);
      dword_1800937F8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v22 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v22 & 1) == 0 )
          __int2c();
        v23 = v22[1]-- == 1LL;
        if ( v23 )
          *v22 &= ~1uLL;
      }
    }
    if ( v6 != 1 )
    {
      v32 = RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16));
      v2 = v37;
      if ( !v32 )
        continue;
    }
    v24 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v25 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v24) )
        __int2c();
      *v25 |= 1uLL;
      ++v25[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800937F8 = GetCurrentThreadId();
    v26 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
    if ( (*(_DWORD *)(v26 + 680) & 1) == 0 && (*(_BYTE *)(v26 + 2228) & 2) == 0 )
    {
      if ( (*(_DWORD *)(v26 + 680) & 2) != 0 )
      {
        v27 = 1000LL;
        if ( v4 <= 0 )
          v27 = 1000LL;
      }
      else
      {
        v27 = 0xFFFFFFFFLL;
      }
      v28 = -10000000LL;
      if ( v4 <= 0 )
        v28 = -50000000LL;
      v29 = *(_QWORD *)(Parameter + 64);
      v40 = v28;
      TpSetTimer(v29, &v40, 0LL, v27);
    }
    dword_1800937F8 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    v2 = v37;
    if ( HampLockTrackerId != -1 )
    {
      v30 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v30 & 1) == 0 )
        __int2c();
      v23 = v30[1]-- == 1LL;
      if ( v23 )
        *v30 &= ~1uLL;
    }
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  v33 = *(struct _RM_PARTITION **)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 336LL),
    *(struct _RM_PARTITION **)Parameter);
  RmpPartitionCleanup(v33);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v33);
  v34 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v34, 0LL);
  }
  return 0LL;
}
