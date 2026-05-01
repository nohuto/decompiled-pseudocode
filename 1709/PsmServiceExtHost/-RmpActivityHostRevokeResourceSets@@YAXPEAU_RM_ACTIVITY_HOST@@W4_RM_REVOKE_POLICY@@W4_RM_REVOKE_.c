/*
 * XREFs of ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180036344
 * Callers:
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18003A00C (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003BD1C (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18003EBC0 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x180036124 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x18003BF48 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18003C2C4 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

__int64 __fastcall RmpActivityHostRevokeResourceSets(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  UCHAR v8; // dl
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-59h] BYREF
  __int64 v26; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-29h]
  int v29; // [rsp+78h] [rbp-21h]
  int v30; // [rsp+7Ch] [rbp-1Dh]
  char *v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+88h] [rbp-11h]
  int v33; // [rsp+8Ch] [rbp-Dh]
  int *v34; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+98h] [rbp-1h]
  int v36; // [rsp+9Ch] [rbp+3h]
  unsigned __int64 *v37; // [rsp+A0h] [rbp+7h]
  int v38; // [rsp+A8h] [rbp+Fh]
  int v39; // [rsp+ACh] [rbp+13h]
  unsigned int *v40; // [rsp+B0h] [rbp+17h]
  int v41; // [rsp+B8h] [rbp+1Fh]
  int v42; // [rsp+BCh] [rbp+23h]

  v25 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a1, 0LL, 0LL, &v25);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v8, 0LL) )
  {
    RmpActivityHostQueryEffectivePriority(
      (struct _RM_ACTIVITY_HOST *)a1,
      v25,
      (enum ExecutionModel::Priority::Enum *)&v23);
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v14 = *(_QWORD *)(a1 + 24);
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v26 = v14;
        v28 = &v26;
        v31 = &v22;
        v34 = (int *)&v23;
        v37 = &v25;
        v40 = &v24;
        v29 = v12 + 4;
        v22 = a2;
        v32 = v13;
        v23 = a3;
        v35 = v12;
        v38 = v12 + 4;
        v24 = (unsigned int)v11;
        v41 = v12;
        TlgWrite(v9, &unk_180057D16, v10, v11, 7u, &pData);
      }
    }
  }
  result = a1 + 840;
  v16 = *(_QWORD *)(a1 + 840);
  if ( v16 != a1 + 840 )
  {
    v17 = v16 - 1416;
    while ( v17 )
    {
      if ( (unsigned int)RmpPolicyTryGetRevokeAction(v17, a2, &v24)
        && (a2 != 2 || !v24 || (*(_BYTE *)(a1 + 866) & 0x10) == 0) )
      {
        ExecutionModel::ResourceSet::Revoke(v17, v24, a3, v25, a4);
      }
      v18 = *(_QWORD *)(v17 + 1416);
      v19 = 3 * (*(int *)(v17 + 1448) + 34LL);
      v20 = *(_QWORD *)(v17 + 1440);
      v17 = 0LL;
      v21 = v20 + 8 * v19;
      result = v18 - 1416;
      if ( v18 != v21 )
        v17 = v18 - 1416;
    }
  }
  return result;
}
