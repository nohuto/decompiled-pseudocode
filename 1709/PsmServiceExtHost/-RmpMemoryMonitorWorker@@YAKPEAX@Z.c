/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005690 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180008E4C (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180009070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000F150 (-LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001E4E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001EFC8 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001F730 (-RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LE.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180020A74 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x180039EB4 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z @ 0x18003A144 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003E458 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18003E804 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x18003E820 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  __int64 v2; // r12
  DWORD TickCount; // eax
  int i; // ebp
  int j; // eax
  int v6; // ebx
  int v7; // r15d
  int v8; // ebx
  DWORD v9; // edi
  __int64 v10; // rbx
  DWORD v11; // esi
  _BYTE *Value; // rdi
  int v13; // eax
  __int64 v14; // rcx
  _BYTE *v15; // rax
  bool v16; // zf
  DWORD v17; // edi
  _BYTE *v18; // rbx
  int v19; // eax
  _BYTE *v20; // rax
  const GUID *v21; // r8
  const GUID *v22; // r9
  struct _RM_PARTITION *v23; // rbx
  DWORD v24; // ebx
  int v26; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v27[3]; // [rsp+34h] [rbp-134h] BYREF
  __int64 v28[16]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp-58h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)&v29);
  v2 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RmpAcquireGlobalLock();
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, 4LL);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_POLICY *)(v2 + 400),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v28,
    0LL);
  RmpMemoryMonitorWaitForEvents(
    (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
    7,
    0xFFFFFFFF,
    (enum _RM_MEMORY_MONITOR_EVENT *)&v26);
  for ( i = v26; v26 != 2; i = v26 )
  {
    for ( j = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64 *)Parameter, v28, v27);
          j != 4;
          j = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64 *)Parameter, v28, v27) )
    {
      if ( j == 3 )
        break;
      v6 = 0;
      if ( j == 2 )
        goto LABEL_5;
    }
    v6 = j;
LABEL_5:
    v7 = v27[0];
    RmpMemoryMonitorUpdateMemoryUsageLevel(Parameter, v27[0]);
    if ( v6 == 4 )
      break;
    if ( i != 1 && v6 == 3 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A1AF, v21, v22, 2u, &pData);
    if ( *(_DWORD *)(v2 + 496) && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 76), *(_DWORD *)(Parameter + 80)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
        (struct _RM_RESOURCE_USAGE_LIMITS *)v28);
      *(_DWORD *)(Parameter + 80) = GetTickCount();
    }
    if ( *(_DWORD *)(v2 + 500) )
    {
      v8 = *(_DWORD *)(Parameter + 88);
      v9 = *(_DWORD *)(Parameter + 84);
      if ( GetTickCount() - v8 >= v9
        && !(unsigned int)RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy((__int64 *)Parameter, v28) )
      {
        *(_DWORD *)(Parameter + 88) = GetTickCount();
      }
    }
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 1896LL);
    if ( v10 )
    {
      v11 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v11) )
          __int2c();
        *(_QWORD *)Value |= 1uLL;
        ++Value[8];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800681D0 = GetCurrentThreadId();
      v13 = *(_DWORD *)(v10 + 240);
      if ( (v13 & 3) == 0 )
      {
        v14 = *(_QWORD *)(v10 + 224);
        *(_DWORD *)(v10 + 240) = v13 | 1;
        TpPostWork(v14);
      }
      if ( hProvider )
        ExecutionModel::ResourceManager::LogTimedOutRevocationRequests((ExecutionModel::ResourceManager *)v10);
      dword_1800681D0 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v15 = TlsGetValue(HampLockTrackerId);
        if ( (*v15 & 1) == 0 )
          __int2c();
        v16 = v15[8]-- == 1;
        if ( v16 )
          *(_QWORD *)v15 &= ~1uLL;
      }
    }
    if ( i == 1 || RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16)) )
    {
      v17 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v18 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v17) )
          __int2c();
        *(_QWORD *)v18 |= 1uLL;
        ++v18[8];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800681D0 = GetCurrentThreadId();
      v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 656LL);
      if ( (v19 & 1) == 0 )
        RmpMemoryMonitorSetTimer((__int64 *)Parameter, ((v19 & 2) != 0) + 1, v7);
      dword_1800681D0 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v20 = TlsGetValue(HampLockTrackerId);
        if ( (*v20 & 1) == 0 )
          __int2c();
        v16 = v20[8]-- == 1;
        if ( v16 )
          *(_QWORD *)v20 &= ~1uLL;
      }
    }
    RmpMemoryMonitorWaitForEvents(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      7,
      0xFFFFFFFF,
      (enum _RM_MEMORY_MONITOR_EVENT *)&v26);
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  v23 = *(struct _RM_PARTITION **)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 312LL),
    *(struct _RM_PARTITION **)Parameter);
  RmpPartitionCleanup(v23);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
  v24 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v24, 0LL);
  }
  return 0LL;
}
