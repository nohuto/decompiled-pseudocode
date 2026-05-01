/*
 * XREFs of ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800057A4
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180005C64 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180001438 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005A38 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 */

__int64 __fastcall RmpResourceSetAddPpleDonors(struct _RM_RESOURCE_SET *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  ExecutionModel::ResourceSet **ForegroundSet; // rax
  __int64 result; // rax
  struct _RM_PSM_APP_FAMILY *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v7 = 0LL;
  RmpPsmAppFamilyTableFindByHostInfo(
    *(struct _RM_SERVICE_GLOBALS **)(*(_QWORD *)(v1 + 1440) + 40LL),
    (struct _RM_PSM_HOST_INFO *)(*(_QWORD *)(v1 + 1440) + 88LL),
    &v7);
  v3 = (_QWORD *)((char *)v7 + 560);
  if ( v7 == (struct _RM_PSM_APP_FAMILY *)-560LL )
    return 0LL;
  while ( 1 )
  {
    v4 = *(v3 - 1);
    if ( *(_DWORD *)(v4 + 624) == 2 )
    {
      ForegroundSet = (ExecutionModel::ResourceSet **)RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)v4);
      if ( ForegroundSet )
      {
        result = RmpResourceSetAddRecipient(ForegroundSet, a1, 7u);
        if ( (int)result < 0 )
          break;
      }
    }
    v3 = (_QWORD *)*v3;
    if ( !v3 )
      return 0LL;
  }
  return result;
}
