/*
 * XREFs of ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F83C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x18001813C (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180001F40 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x1800101AC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x1800316F0 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 */

void __fastcall RmpResourceSetUpdateElasticRecipient(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 Amount; // rax
  int v7; // edx
  __int64 v8; // r10
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 5) + 1456LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 1498LL) & 7) == 4 )
  {
    if ( *((_DWORD *)a1 + 26) )
    {
      v3 = **((_QWORD **)a1 + 12);
      RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v3, (struct _RM_COMMIT_THRESHOLDS *)v9);
      RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)v9, *(_QWORD *)(v3 + 56));
      v4 = v9[3];
      *(_QWORD *)(v2 + 24) = v9[2];
      *(_QWORD *)(v2 + 64) = v9[1];
      v5 = v9[0];
      *(_QWORD *)(v2 + 72) = v4;
      *(_QWORD *)(v2 + 368) = v5;
      Amount = ExecutionModel::_ResourceSetInfo::GetAmount(*(_QWORD *)(v3 + 40) + 1456LL, 0);
      ExecutionModel::_ResourceSetInfo::SetAmount(v2, v7, Amount);
      *(_DWORD *)(v2 + 44) ^= (*(_DWORD *)(v2 + 44) ^ *(_DWORD *)(v8 + 1500)) & 3;
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 5) + 1440LL));
    }
  }
}
