/*
 * XREFs of ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800018E0
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180001A70 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035650 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180001924 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180006F4C (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 */

unsigned __int64 __fastcall ExecutionModel::ResourceSet::GetEnforcedMemoryCap(ExecutionModel::ResourceSet *this)
{
  unsigned __int64 ReportedMemoryCap; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r9
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  ReportedMemoryCap = ExecutionModel::ResourceSet::GetReportedMemoryCap(this);
  v3 = *(_QWORD *)(v2 + 1432);
  v6 = ReportedMemoryCap;
  RmpCommitValuesSubtract(ReportedMemoryCap, *(_QWORD *)(v3 + 56), &v6);
  RmpCommitValuesSubtract(v6, *(_QWORD *)(v4 + 64), &v6);
  return v6;
}
