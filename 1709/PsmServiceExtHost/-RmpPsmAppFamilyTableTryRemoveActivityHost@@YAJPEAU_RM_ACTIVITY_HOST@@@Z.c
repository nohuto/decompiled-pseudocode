/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A59C
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018D04 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A79C (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18001A604 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A710 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 result; // rax
  struct _RM_PSM_APP_FAMILY *v3; // rbx
  struct _RM_PSM_APP_FAMILY *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  result = RmpPsmAppFamilyTableFindByHostInfo(
             *((struct _RM_SERVICE_GLOBALS **)a1 + 5),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             &v4);
  if ( (int)result >= 0 )
  {
    v3 = v4;
    result = RmpPsmAppFamilyTryRemoveActivityHost(v4, a1);
    if ( (int)result >= 0 )
    {
      if ( *((struct _RM_ACTIVITY_HOST **)v3 + 72) == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64) )
        *((_QWORD *)v3 + 72) = 0LL;
      RmpPsmAppFamilyTableCheckDelete(*((struct _RM_SERVICE_GLOBALS **)a1 + 5), v3);
      return 0LL;
    }
  }
  return result;
}
