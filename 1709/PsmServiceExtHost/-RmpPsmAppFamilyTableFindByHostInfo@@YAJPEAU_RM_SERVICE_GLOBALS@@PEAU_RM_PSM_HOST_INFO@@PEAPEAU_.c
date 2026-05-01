/*
 * XREFs of ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8
 * Callers:
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800057A4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A59C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B404 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180034B38 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003FEE4 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_HAM_DEPENDENCY_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEAK4@Z @ 0x180040364 (-RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_H.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180019BA0 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180019C70 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180019D90 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFindByHostInfo(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PSM_APP_FAMILY **a3)
{
  int v6; // ebx
  struct _RM_PSM_APP_FAMILY *v7; // rax
  _BYTE v9[544]; // [rsp+20h] [rbp-418h] BYREF
  unsigned __int16 v10[232]; // [rsp+240h] [rbp-1F8h] BYREF

  v6 = CempPackageFamilyNameFromPsmKey(a2, v10);
  if ( v6 >= 0 )
  {
    RmpPsmAppFamilyIdInitialize(
      v10,
      (struct _RM_PSM_HOST_INFO *)((char *)a2 + 464),
      *((_DWORD *)a2 + 133),
      (struct _RM_PSM_APP_FAMILY_ID *)v9);
    v7 = RmpPsmAppFamilyTableFind(a1, (struct _RM_PSM_APP_FAMILY_ID *)v9);
    if ( v7 )
    {
      *a3 = v7;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)v6;
}
