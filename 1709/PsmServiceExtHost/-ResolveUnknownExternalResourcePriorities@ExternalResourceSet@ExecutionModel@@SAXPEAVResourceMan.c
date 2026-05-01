/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F68 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EE44 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124B4 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003CDD4 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018F44 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B5CC (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036608 (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT@@@Z @ 0x18003CDB0 (-RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_AC.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  struct ExecutionModel::ResourceManager *v5; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // rdi
  struct ExecutionModel::ResourceManager *v11; // rcx
  struct _RM_SERVICE_GLOBALS *v12; // rcx
  struct _RM_ACTIVITY_HOST *Next; // rax
  char *v14; // rax
  struct _RM_PSM_APP_FAMILY *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a1;
  v5 = (struct ExecutionModel::ResourceManager *)a3;
  if ( a3 )
  {
    v8 = (char *)a4 + 16;
    v9 = a3;
    do
    {
      if ( v8[5] )
        *(_DWORD *)v8 = 101;
      v8 += 24;
      --v9;
    }
    while ( v9 );
  }
  v10 = a5;
  if ( RmpActivityHostIsPple(a5) && RmpActivityHostTryGetPpleResourceSet(v10) )
  {
    v12 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)v10 + 5);
    v15 = 0LL;
    RmpPsmAppFamilyTableFindByHostInfo(v12, (struct _RM_ACTIVITY_HOST *)((char *)v10 + 88), &v15);
    v15 = (struct _RM_PSM_APP_FAMILY *)(((unsigned __int64)v15 + 552) & -(__int64)(*((_QWORD *)v15 + 69) != 0LL));
    while ( 1 )
    {
      Next = RmpPsmAppFamilyEnumerateActivityHostGetNext((struct _RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT *)&v15);
      if ( !Next )
        break;
      if ( Next != v10 && *((_DWORD *)Next + 156) == 2 )
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
          v11,
          a2,
          (unsigned int)v5,
          a4,
          Next);
    }
    if ( (_DWORD)v5 )
    {
      v14 = (char *)a4 + 16;
      v11 = v5;
      do
      {
        if ( v14[5] && *((_DWORD *)v14 - 4) == 28 )
          *(_DWORD *)v14 = 101;
        v14 += 24;
        v11 = (struct ExecutionModel::ResourceManager *)((char *)v11 - 1);
      }
      while ( v11 );
    }
  }
  ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
    v11,
    a2,
    (unsigned int)v5,
    a4,
    v10);
}
