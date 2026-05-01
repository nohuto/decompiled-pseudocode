/*
 * XREFs of ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18005AB34
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053C20 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x18005AB78 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18004CB90 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
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
  RmpCommitValuesSubtract(ReportedMemoryCap, *(_QWORD *)(v3 + 64), &v6);
  RmpCommitValuesSubtract(v6, *(_QWORD *)(v4 + 72), &v6);
  return v6;
}
