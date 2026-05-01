/*
 * XREFs of ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18001A320
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180025CD4 (-RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180053284 (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 */

void __fastcall RmpCommitThresholdsSubtractValue(struct _RM_COMMIT_THRESHOLDS *a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r9
  unsigned __int64 v7; // rdx

  RmpCommitValuesSubtract(*((_QWORD *)a1 + 3), a2, (unsigned __int64 *)a1 + 3);
  RmpCommitValuesSubtract(*(_QWORD *)(v2 + 16), v3, (unsigned __int64 *)(v2 + 16));
  RmpCommitValuesSubtract(*(_QWORD *)(v4 + 8), v5, (unsigned __int64 *)(v4 + 8));
  RmpCommitValuesSubtract(*v6, v7, v6);
}
