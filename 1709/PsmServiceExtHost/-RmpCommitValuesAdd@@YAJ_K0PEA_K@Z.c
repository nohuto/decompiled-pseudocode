/*
 * XREFs of ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000631C
 * Callers:
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180006210 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x1800062BC (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x18001813C (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1_K2@Z @ 0x180036518 (-RmpActivityHostSetAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_COMMIT_THRESHOLDS@@1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesAdd(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v5; // ecx
  unsigned __int64 v7; // rax

  v3 = -1LL;
  if ( a2 == -1 || a1 == -1LL )
  {
    *a3 = -1LL;
    return 0;
  }
  v7 = a1 + a2;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  v5 = a1 + a2 < a1 ? 0xC0000095 : 0;
  *a3 = v3;
  if ( v7 >= a1 )
    return 0;
  return v5;
}
