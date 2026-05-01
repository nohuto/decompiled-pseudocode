/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x18005AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180033468 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::NotifyPendingResourceSetTransition(
        struct _RM_RESOURCE_SET **this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  int v6; // ebx
  struct _RM_ACTIVITY_HOST *v7; // r9
  unsigned __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]

  RmpAcquireGlobalLock();
  if ( *((_BYTE *)this + 12) )
  {
    RmpResourceSetGetReportedCommitThresholds(this[179], (struct _RM_COMMIT_THRESHOLDS *)v11);
    v5 = *((_QWORD *)a2 + 3);
    if ( v5 <= v12 )
    {
      RmpCommitValuesSubtract(v12, v5, &v9);
      v6 = RmpCommitValuesSubtract(*((_QWORD *)this[180] + 168), v9, &v10);
      if ( v6 < 0 || (v6 = RmpActivityHostPublishCommitLimit(v7, v10, 0), v6 < 0) )
        v4 = v6 | 0x10000000;
      else
        v4 = 0;
    }
    else
    {
      v4 = -2147024809;
    }
  }
  else
  {
    v4 = -2147220216;
  }
  RmpReleaseGlobalLock();
  return v4;
}
