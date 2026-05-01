/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003E458
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18000475C (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005690 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001E4E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003595C (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003F4E0 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  __int64 v2; // r13
  __int64 v5; // rbx
  __int64 v6; // r15
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned __int64 v10; // r10
  unsigned int i; // edx
  __int64 v12; // rcx
  unsigned __int64 *v13; // r12
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  UCHAR v22; // dl
  const struct _TlgProvider_t *v23; // rcx
  int v24; // r10d
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v33[3]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_MEMORY_MONITOR_DATA *v34; // [rsp+58h] [rbp-A8h]
  _BYTE v35[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v36; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v37[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v38; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  char *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v2 = *(_QWORD *)a1;
  v34 = a1;
  v5 = *(_QWORD *)(v2 + 24);
  v33[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v33;
  v33[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v33;
  v33[2] = *((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1 + 4);
  RmpPolicyPrepareToCheckMetrics((struct _RM_PARTITION *)v2, (struct _RM_POLICY *)(v5 + 400), a2, 0LL);
  RmpAcquireGlobalLock();
  v6 = *(_QWORD *)a1 + 144LL;
  *(_WORD *)(v6 + 44) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    (struct _RM_PARTITION *)v2,
    *(_DWORD *)(v5 + 516),
    v6,
    3u,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  if ( *(_DWORD *)(v6 + 36) )
  {
    v32 = 0LL;
    v10 = 0LL;
    for ( i = 0; i < *(_DWORD *)(v6 + 36); v32 = v10 )
    {
      v12 = i++;
      v10 += *(_QWORD *)((v12 << 6) + *(_QWORD *)v6);
    }
    v13 = (unsigned __int64 *)((char *)a2 + 96);
    if ( v10 >= *v13 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v41 = 8LL;
        v40 = (__int64 *)&v32;
        v31 = *(_DWORD *)(v6 + 36);
        v44 = &v31;
        v42 = (char *)v13;
        v43 = 8LL;
        v45 = 4LL;
        TlgWrite(v17, &unk_180059D30, v18, v19, 5u, &v39);
      }
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, i, 1uLL) )
      {
        RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v35);
        v21 = v32;
      }
      RmpMemoryMonitorGenerateHostListAndRevoke(v2, v20, *v13 - v21, 1LL, 5, v33);
      RmpReleaseGlobalLock();
      RmpMemoryMonitorWaitForEvents(v34, 13, *((_DWORD *)v34 + 18), (enum _RM_MEMORY_MONITOR_EVENT *)&v31);
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v22, 1uLL) )
      {
        if ( v24 )
        {
          if ( hProvider > 4u && TlgKeywordOn(v23, 0x200000000001uLL) )
            TlgWrite(v28, &unk_18005A273, v29, v30, 2u, &pData);
        }
        else
        {
          RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v37);
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v40 = (__int64 *)&v31;
            v42 = &v36;
            v44 = (int *)&v38;
            v41 = 4LL;
            v43 = 8LL;
            v45 = 8LL;
            TlgWrite(v25, &unk_180059E47, v26, v27, 5u, &v39);
          }
        }
      }
      RmpAcquireGlobalLock();
    }
    else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v41 = 8LL;
      v40 = (__int64 *)&v32;
      v31 = *(_DWORD *)(v6 + 36);
      v44 = &v31;
      v42 = (char *)v13;
      v43 = 8LL;
      v45 = 4LL;
      TlgWrite(v14, &unk_180059F52, v15, v16, 5u, &v39);
    }
  }
  else if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    TlgWrite(v7, &unk_180059B9C, v8, v9, 2u, &pData);
  }
  RmpActivityHostCleanupRemediationGroup(v33);
  RmpReleaseGlobalLock();
}
