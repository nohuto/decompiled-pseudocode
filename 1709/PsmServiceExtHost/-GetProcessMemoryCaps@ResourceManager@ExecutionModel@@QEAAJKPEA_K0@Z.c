/*
 * XREFs of ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x180031ED4
 * Callers:
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x180031F50 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 * Callees:
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180001924 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800033F0 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetProcessMemoryCaps(
        struct _RM_SERVICE_GLOBALS **this,
        int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 ReportedMemoryCap; // rsi
  ExecutionModel::ResourceSet *ProcessResourceSet; // rax

  ReportedMemoryCap = 0LL;
  RmpAcquireGlobalLock();
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(this[26], a2);
  if ( ProcessResourceSet )
    ReportedMemoryCap = ExecutionModel::ResourceSet::GetReportedMemoryCap(ProcessResourceSet);
  if ( a3 )
    *a3 = ReportedMemoryCap;
  if ( a4 )
    *a4 = ReportedMemoryCap;
  RmpReleaseGlobalLock();
  return 0LL;
}
