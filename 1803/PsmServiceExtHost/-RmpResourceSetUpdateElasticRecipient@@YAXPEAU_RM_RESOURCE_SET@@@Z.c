/*
 * XREFs of ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180053284
 * Callers:
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18001A320 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18004CBB0 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 */

void __fastcall RmpResourceSetUpdateElasticRecipient(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r10
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 6) + 1456LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 6) + 1498LL) & 7) == 4 )
  {
    if ( *((_DWORD *)a1 + 28) )
    {
      v3 = **((_QWORD **)a1 + 13);
      RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v3, (struct _RM_COMMIT_THRESHOLDS *)v7);
      RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)v7, *(_QWORD *)(v3 + 64));
      v4 = v7[3];
      *(_QWORD *)(v2 + 24) = v7[2];
      *(_QWORD *)(v2 + 56) = v7[1];
      v5 = v7[0];
      *(_QWORD *)(v2 + 64) = v4;
      *(_QWORD *)(v2 + 360) = v5;
      ExecutionModel::_ResourceSetInfo::SetAmount(v2, 0, *(_QWORD *)(*(_QWORD *)(v3 + 48) + 1544LL));
      *(_DWORD *)(v2 + 44) ^= (*(_DWORD *)(v2 + 44) ^ *(_DWORD *)(v6 + 1500)) & 3;
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 6) + 1440LL));
    }
  }
}
