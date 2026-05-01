/*
 * XREFs of ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x1800316F0
 * Callers:
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F83C (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180036518 (-RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180006F4C (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
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
