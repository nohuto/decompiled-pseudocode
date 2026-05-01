/*
 * XREFs of ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18003B8E8
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180011EC0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003F4E0 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013FCC (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18001F8EC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003BB68 (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 *     ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x18003BC04 (-RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_RE.c)
 */

bool __fastcall RmpPolicyGenerateReclaimListForCommit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // r13d
  unsigned __int64 v7; // rdi
  int v11; // r12d
  int v12; // r15d
  unsigned int v13; // r14d
  unsigned int v14; // ebp
  __int64 v15; // r13
  unsigned __int64 v16; // r10
  int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 HostCommitForReclaim; // rax
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  _BYTE Context[8]; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+38h] [rbp-50h]
  unsigned int v30; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v31; // [rsp+40h] [rbp-48h]
  unsigned int v32; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A8h] [rbp+20h]

  v6 = 0;
  v7 = 0LL;
  v32 = 0;
  if ( !*(_DWORD *)(a2 + 36) )
    goto LABEL_33;
  RmpPolicyReclaimContextInitialize(a1, a2, a4, a6, Context);
  qsort_s(
    *(void **)a2,
    *(unsigned int *)(a2 + 36),
    0x40uLL,
    (_CoreCrtSecureSearchSortCompareFunction)RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk,
    Context);
  v34 = v29;
  if ( v30 )
  {
    if ( v30 == 1 )
    {
      v11 = a5;
      v12 = 1;
      goto LABEL_9;
    }
    if ( v30 != 2 )
      goto LABEL_33;
    v11 = a5;
  }
  else
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 520LL);
  }
  v12 = 0;
LABEL_9:
  v13 = *(_DWORD *)(a1 + 196);
  v14 = 0;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v15 = (int)v30;
    while ( 1 )
    {
      if ( a4 <= v7 )
      {
LABEL_32:
        v6 = v32;
        goto LABEL_33;
      }
      v16 = *(_QWORD *)a2 + ((unsigned __int64)v14 << 6);
      if ( *(_QWORD *)(v16 + 48) != a3 )
        break;
LABEL_29:
      if ( ++v14 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_32;
    }
    if ( (int)RmpEmPriorityCompare(*(_DWORD *)(v16 + 56), v11) >= 0 )
      goto LABEL_32;
    if ( v17 == 1 )
    {
      if ( (*(_BYTE *)(v19 + 866) & 0x10) == 0 )
        goto LABEL_32;
    }
    else if ( (unsigned int)(v17 - 2) > 1 )
    {
      goto LABEL_19;
    }
    if ( !RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v19) )
      goto LABEL_29;
LABEL_19:
    v20 = *(_QWORD *)(a2 + 8);
    v21 = 3LL * v32++;
    *(_QWORD *)(v20 + 8 * v21 + 8) = v19;
    if ( v15 == 2 )
    {
      if ( v34 == 1 )
        goto LABEL_24;
      if ( v7 + *(_QWORD *)(v18 + 40) >= a4 )
      {
        *(_DWORD *)(v20 + 8 * v21 + 16) = 1;
        v26 = a4 - v7;
        v7 = a4;
        *(_QWORD *)(v20 + 8 * v21) = v26;
        goto LABEL_32;
      }
    }
    if ( v15 == 1 )
      *(_DWORD *)(v20 + 8 * v21 + 20) |= 1u;
LABEL_24:
    *(_DWORD *)(v20 + 8 * v21 + 16) = v12;
    HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(v30, v18);
    v7 += HostCommitForReclaim;
    *(_QWORD *)(v25 + 8 * v24) = HostCommitForReclaim;
    if ( !v12 && *(char *)(v23 + 866) < 0 )
      --v13;
    if ( !v15 && v13 <= v31 )
      goto LABEL_32;
    goto LABEL_29;
  }
LABEL_33:
  *(_DWORD *)(a2 + 40) = v6;
  return v7 >= a4;
}
