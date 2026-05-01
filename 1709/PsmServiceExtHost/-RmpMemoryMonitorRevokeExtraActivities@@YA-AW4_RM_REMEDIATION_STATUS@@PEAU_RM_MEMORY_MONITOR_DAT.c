/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18003FB78
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003E8E0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18000475C (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005690 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001E4E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003595C (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18003BB84 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003F4E0 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  int HostListAndRevoke; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  _BYTE v17[128]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  v2 = (__int64)*a1;
  v13[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v13;
  v13[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v13;
  v13[2] = a1[4];
  RmpAcquireGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    (struct _RM_PARTITION *)v2,
    (struct _RM_POLICY *)(*((_QWORD *)*a1 + 3) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v17,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v14);
  v5 = 2;
  RmpPolicyPopulateActivityHostMetrics(
    (struct _RM_PARTITION *)v2,
    0,
    v2 + 144,
    0x43u,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  RmpPolicyPopulateFastCommitUse((struct _RM_SYSTEM_MEMORY_METRICS *)v14, (struct _RM_POLICY_WORK_BUFFER *)(v2 + 144));
  if ( v15 - v16 < a2 )
  {
    v5 = 3;
LABEL_14:
    RmpReleaseGlobalLock();
    return v5;
  }
  if ( !*(_DWORD *)(v2 + 180) )
    goto LABEL_14;
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(
                        v2,
                        v6,
                        v15 - v16 - a2,
                        1u,
                        5u,
                        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v13);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                         (struct _RM_MEMORY_MONITOR_DATA *)a1,
                         13,
                         *((_DWORD *)a1 + 18),
                         (enum _RM_MEMORY_MONITOR_EVENT *)&v12) )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        TlgWrite(v8, &unk_18005A035, v9, v10, 2u, &pData);
      v5 = 1;
    }
    else if ( v12 == 2 )
    {
      v5 = 4;
    }
    else
    {
      v5 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup(v13);
    goto LABEL_14;
  }
  return v5;
}
