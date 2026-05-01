/*
 * XREFs of ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DB8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180053284 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180053880 (-RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180054C2C (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18005B890 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012208 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800138F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800251CC (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025A60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180025E5C (-RmpActivityHostGetCommitLevel@@YA-AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z @ 0x180025E80 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyEnforcementSettings(struct _RM_ACTIVITY_HOST *a1)
{
  int CommitLevel; // eax
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v8[2]; // [rsp+48h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]

  v5 = 0LL;
  RmpActivityHostQueryCommit(a1, 0LL, &v5, &v6);
  RmpActivityHostAggregateCommitValues(a1);
  memset_0(&v7, 0, 0x28uLL);
  v9 = 1;
  v10 = 100;
  v8[1] = RmpActivityHostComputeCommitLimit(a1);
  RmpActivityHostGetCommitThresholds((struct _RM_ACTIVITY_HOST *)((char *)a1 + 1328), v5, &v7, v8, &v6);
  RmpActivityHostPopulateRunnabilitySettings(a1, (struct _RM_ENFORCEMENT_SETTINGS *)&v7);
  CommitLevel = RmpActivityHostGetCommitLevel((char *)a1 + 1328, v5);
  RmpActivityHostUpdateCommitUseState((__int64)a1, v3, CommitLevel);
  result = RmpActivityHostApplyEnforcementSettings(a1, (struct _RM_ENFORCEMENT_SETTINGS *)&v7, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
