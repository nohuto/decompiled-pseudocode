/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180025324 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180025500 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x1800510BC (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18005129C (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 *     ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x180051448 (-RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x1800515FC (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051808 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 * Callees:
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001EDB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027358 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  struct _RM_OBJECT_HEADER *v4; // rdi
  int ObjectByHandle; // ebx
  struct ExecutionModel::ResourceSet *v6; // rcx
  void (*v7)(void); // rax
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  struct _RM_OBJECT_HEADER *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  v4 = 0LL;
  ObjectByHandle = RmpObjectTableFindObjectByHandle(a1, &v9, &v10);
  if ( ObjectByHandle >= 0 )
  {
    v4 = v10;
    ObjectByHandle = 0;
  }
  if ( ObjectByHandle >= 0 )
  {
    v6 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)v4 + 6);
    *a3 = v6;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(v6);
    else
      v7();
    ObjectByHandle = 0;
  }
  if ( v4 )
    RmpObjectRelease((char *)v4);
  return (unsigned int)ObjectByHandle;
}
