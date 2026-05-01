/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x18003C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180006F4C (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001FB0C (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
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

  if ( *((_DWORD *)this + 34) )
  {
    RmpAcquireGlobalLock();
    if ( *((_BYTE *)this + 12) )
    {
      RmpResourceSetGetReportedCommitThresholds(this[179], (struct _RM_COMMIT_THRESHOLDS *)v11);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 <= v12 )
      {
        RmpCommitValuesSubtract(v12, v5, &v9);
        v6 = RmpCommitValuesSubtract(*((_QWORD *)this[180] + 150), v9, &v10);
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
  }
  else
  {
    return (unsigned int)-2147467263;
  }
  return v4;
}
