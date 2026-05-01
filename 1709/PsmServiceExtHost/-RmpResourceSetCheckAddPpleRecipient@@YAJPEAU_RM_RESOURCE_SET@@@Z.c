/*
 * XREFs of ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B404
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180005C64 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 */

__int64 __fastcall RmpResourceSetCheckAddPpleRecipient(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  struct ExecutionModel::ResourceSet *Next; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _RM_PSM_APP_FAMILY *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 1498) & 0x20) != 0
    || (v6 = *(int *)(v2 + 1456), (unsigned int)v6 <= 0x29) && (v7 = 0x24704100001LL, _bittest64(&v7, v6)) )
  {
    if ( *(_DWORD *)(v2 + 136) )
    {
      v3 = *(_QWORD *)(v2 + 1440);
      v10 = 0LL;
      RmpPsmAppFamilyTableFindByHostInfo(
        *(struct _RM_SERVICE_GLOBALS **)(v3 + 40),
        (struct _RM_PSM_HOST_INFO *)(v3 + 88),
        &v10);
      v4 = *((_QWORD *)v10 + 71);
      if ( v4 )
      {
        v9[1] = 3LL;
        v9[0] = RmpActivityHostEnumerateResourceSetGetFirst(v4, 3, 0);
        while ( 1 )
        {
          Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v9);
          if ( !Next )
            break;
          if ( (*((_BYTE *)Next + 1498) & 7) == 3 )
          {
            result = RmpResourceSetAddRecipient(
                       (ExecutionModel::ResourceSet **)a1,
                       *((struct _RM_RESOURCE_SET **)Next + 179),
                       0x21u);
            if ( (int)result < 0 )
              return result;
            return 0LL;
          }
        }
      }
    }
  }
  return 0LL;
}
