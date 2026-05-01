/*
 * XREFs of ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800320F4
 * Callers:
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180025990 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 *     ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003422C (-RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E3CC (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnProcessTerminated(ExecutionModel::ResourceManager *this, int a2)
{
  __int64 v4; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int8 v6[560]; // [rsp+30h] [rbp-248h] BYREF

  RmpAcquireGlobalLock();
  memset_0(v6, 0, 0x228uLL);
  v4 = *((_QWORD *)this + 26);
  *(_DWORD *)v6 = a2;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(v4, 1, v6, (__int64 *)P) >= 0 )
  {
    RmpActivityHostZeroProcessNotification((char *)P[0]);
    RmpObjectRelease((char *)P[0]);
  }
  ExecutionModel::ResourceManager::RemoveExternalResources(this, a2, 0LL);
  RmpReleaseGlobalLock();
}
