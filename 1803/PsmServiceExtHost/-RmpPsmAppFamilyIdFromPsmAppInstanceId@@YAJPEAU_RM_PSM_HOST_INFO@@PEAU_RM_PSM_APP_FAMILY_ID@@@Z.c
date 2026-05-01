/*
 * XREFs of ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000936C
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000230C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800092B8 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800523C4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x1800526DC (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z @ 0x180054550 (-RmpActivityHostFindMixedHostForHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU1@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000C350 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x18000CE50 (CempPackageFamilyNameFromPsmKey.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(
        struct _RM_PSM_HOST_INFO *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  int v4; // edi
  unsigned __int16 v6[232]; // [rsp+20h] [rbp-1E8h] BYREF

  v4 = CempPackageFamilyNameFromPsmKey(a1, v6);
  if ( v4 >= 0 )
    RmpPsmAppFamilyIdInitialize(v6, (struct _RM_PSM_HOST_INFO *)((char *)a1 + 464), *((_DWORD *)a1 + 133), a2);
  return (unsigned int)v4;
}
