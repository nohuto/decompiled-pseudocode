/*
 * XREFs of ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005E698
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18005D5B8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18005EBF4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18005ED88 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18005A1F8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005A6E8 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

__int64 __fastcall RmpMemoryMonitorGenerateHostListAndRevoke(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6)
{
  __int64 v7; // rsi
  int v9; // ecx
  const struct _TlgProvider_t *v10; // rcx
  unsigned __int16 v11; // r9
  unsigned __int16 v13; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int16 *v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+6Ch] [rbp-3Ch]
  __int64 v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+78h] [rbp-30h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  v7 = a1 + 144;
  if ( a4 == 1 )
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 540LL);
  else
    v9 = 0;
  RmpPolicyGenerateReclaimListForCommit(a1, v7, 0LL, a3, v9, a4);
  if ( *(_DWORD *)(a1 + 184) )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v17 = 0;
      v15 = (__int16 *)&v13;
      v18 = *(_QWORD *)(a1 + 152);
      v20 = 0;
      v19 = 8 * v11;
      v13 = v11;
      v16 = 2;
      TlgWrite(v10, &unk_18007FC28, 0LL, 0LL, 4u, &pData);
    }
    RmpPolicyReclaimHostList(v7, a4, a5, 0LL, a6);
  }
  return *(unsigned int *)(a1 + 184);
}
