/*
 * XREFs of ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18003F24C
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180008E4C (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180009070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003E8E0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18000475C (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001E4E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003595C (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18003EBC0 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18003EF44 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptyWorkingSets(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // esi
  struct _RM_PARTITION *v8; // r12
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int16 v13; // ax
  unsigned __int16 v14; // dx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // r9
  unsigned int v18; // edx
  unsigned __int8 v19; // al
  const GUID *v20; // r8
  const GUID *v21; // r9
  const GUID *v22; // r8
  const GUID *v23; // r9
  unsigned __int8 v25; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int8 v26[3]; // [rsp+41h] [rbp-38h] BYREF
  int v27; // [rsp+44h] [rbp-35h] BYREF
  int v28; // [rsp+48h] [rbp-31h]
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v29[3]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-1h] BYREF

  v31 = a3;
  v29[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v29;
  v30 = a2;
  v25 = 0;
  v29[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v29;
  v29[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  v26[0] = 0;
  if ( (a4 & 0x20) != 0 )
  {
    v6 = 0;
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v6 = 1;
  v7 = 1;
  if ( (a4 & 8) == 0 )
    goto LABEL_4;
LABEL_5:
  RmpAcquireGlobalLock();
  v8 = *(struct _RM_PARTITION **)a1;
  v9 = a4 & 1;
  v10 = a4 & 0x10;
  v27 = v9;
  v28 = (unsigned __int8)v10;
  v11 = (__int64)v8 + 144;
  v12 = 2;
  while ( 1 )
  {
    *(_WORD *)(v11 + 44) = 0;
    v13 = 40;
    if ( v7 != 1 )
      v13 = 8;
    v14 = v13 | 0x13;
    v15 = v9 == 0;
    v16 = a4 | 0x20;
    if ( v15 )
      v14 = v13;
    if ( v7 == 1 )
      v16 = a4;
    v17 = v14 | 2;
    if ( !v10 )
      v17 = v14;
    RmpPolicyPopulateActivityHostMetrics(
      *(struct _RM_PARTITION **)a1,
      0,
      v11,
      v17,
      (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorEmptyPolicyFilterCallback,
      (void *)v16);
    v18 = *(_DWORD *)(v11 + 36);
    if ( v18 )
    {
      RmpMemoryMonitorEmptyPolicyProcessHostArray(*(struct _RM_ACTIVITY_HOST_METRICS **)v11, v18, a4);
      RmpMemoryMonitorEmptyPolicyActOnHosts(
        (struct _RM_MEMORY_MONITOR_DATA *)a1,
        *(struct _RM_ACTIVITY_HOST_METRICS **)v11,
        *(_DWORD *)(v11 + 36),
        *(_QWORD *)(v30 + 56) - *(_QWORD *)(v31 + 56),
        a4,
        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v29,
        &v25,
        v26);
      v19 = v25;
    }
    else
    {
      v19 = 0;
      v25 = 0;
    }
    if ( v19 )
      break;
    v9 = v27;
    ++v7;
    v10 = v28;
    if ( v7 > v6 )
      goto LABEL_34;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       13,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v27) )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059E18, v22, v23, 2u, &pData);
    goto LABEL_32;
  }
  if ( v27 != 3 || !v26[0] )
    goto LABEL_32;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A06A, v20, v21, 2u, &pData);
  if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       5,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v27)
    || v27 != 2 )
  {
LABEL_32:
    v12 = 0;
    goto LABEL_33;
  }
  v12 = 4;
LABEL_33:
  RmpAcquireGlobalLock();
LABEL_34:
  RmpActivityHostCleanupRemediationGroup(v29);
  RmpReleaseGlobalLock();
  return v12;
}
