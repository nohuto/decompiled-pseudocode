/*
 * XREFs of ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x1800526DC
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000936C (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CF70 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 */

__int64 __fastcall RmpResourceSetCheckAddPpleRecipient(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _RM_PSM_APP_FAMILY *v6; // rbx
  struct _RM_SERVICE_GLOBALS *v7; // rsi
  struct _RM_PSM_APP_FAMILY *v8; // rax
  __int64 v9; // rcx
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v13[544]; // [rsp+30h] [rbp-238h] BYREF

  v2 = *((_QWORD *)a1 + 6);
  if ( (*(_BYTE *)(v2 + 1498) & 0x20) != 0
    || (v3 = *(int *)(v2 + 1456), (unsigned int)v3 <= 0x29) && (v4 = 0x24704100001LL, _bittest64(&v4, v3)) )
  {
    v5 = *(_QWORD *)(v2 + 1440);
    v6 = 0LL;
    v7 = *(struct _RM_SERVICE_GLOBALS **)(v5 + 48);
    if ( (int)RmpPsmAppFamilyIdFromPsmAppInstanceId(
                (struct _RM_PSM_HOST_INFO *)(v5 + 88),
                (struct _RM_PSM_APP_FAMILY_ID *)v13) >= 0 )
    {
      v8 = RmpPsmAppFamilyTableFind(v7, (struct _RM_PSM_APP_FAMILY_ID *)v13);
      if ( v8 )
        v6 = v8;
    }
    v9 = *((_QWORD *)v6 + 71);
    if ( v9 )
    {
      v12[1] = 3LL;
      v12[0] = RmpActivityHostEnumerateResourceSetGetFirst(v9, 3, 0);
      while ( 1 )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v12);
        if ( !Next )
          break;
        if ( (*((_BYTE *)Next + 1498) & 7) == 3 )
        {
          result = RmpResourceSetAddRecipient(a1, *((struct _RM_RESOURCE_SET **)Next + 179), 0x21u);
          if ( (int)result < 0 )
            return result;
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
