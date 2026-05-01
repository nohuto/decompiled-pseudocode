/*
 * XREFs of ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800523C4
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000936C (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CF70 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005460C (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpResourceSetAddPpleDonors(struct _RM_RESOURCE_SET *a1)
{
  struct _RM_PSM_APP_FAMILY *v2; // rbx
  __int64 v3; // rcx
  struct _RM_SERVICE_GLOBALS *v4; // rsi
  struct _RM_PSM_APP_FAMILY *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  struct _RM_RESOURCE_SET *ForegroundSet; // rax
  __int64 result; // rax
  _BYTE v10[544]; // [rsp+20h] [rbp-238h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1440LL);
  v4 = *(struct _RM_SERVICE_GLOBALS **)(v3 + 48);
  if ( (int)RmpPsmAppFamilyIdFromPsmAppInstanceId(
              (struct _RM_PSM_HOST_INFO *)(v3 + 88),
              (struct _RM_PSM_APP_FAMILY_ID *)v10) >= 0 )
  {
    v5 = RmpPsmAppFamilyTableFind(v4, (struct _RM_PSM_APP_FAMILY_ID *)v10);
    if ( v5 )
      v2 = v5;
  }
  v6 = (_QWORD *)((char *)v2 + 560);
  if ( !v6 )
    return 0LL;
  while ( 1 )
  {
    v7 = *(v6 - 1);
    if ( *(_DWORD *)(v7 + 624) == 2 )
    {
      ForegroundSet = RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)v7);
      if ( ForegroundSet )
      {
        result = RmpResourceSetAddRecipient(
                   ForegroundSet,
                   a1,
                   *(_BYTE *)(*((_QWORD *)ForegroundSet + 6) + 12LL) != 0 ? 7 : 39);
        if ( (int)result < 0 )
          break;
      }
    }
    v6 = (_QWORD *)*v6;
    if ( !v6 )
      return 0LL;
  }
  return result;
}
