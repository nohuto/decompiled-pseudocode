/*
 * XREFs of ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003FEE4
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040068 (-RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVI.c)
 * Callees:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018D04 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8 (-HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVI.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190A0 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_HAM_DEPENDENCY_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEAK4@Z @ 0x180040364 (-RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_H.c)
 */

__int64 __fastcall RmHamFindOrCreateActivityHost(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        struct _RM_PARTITION *a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  struct _RM_ACTIVITY_HOST *v9; // rcx
  struct _RM_ACTIVITY_HOST **v10; // rax
  int v11; // ebx
  bool v12; // zf
  struct _RM_ACTIVITY_HOST *v13; // rbx
  struct _HAM_DEPENDENCY_GROUP *v14; // rdi
  struct _RM_ACTIVITY_HOST **v15; // rax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rcx
  unsigned int v18; // [rsp+30h] [rbp-30h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v19; // [rsp+38h] [rbp-28h] BYREF
  struct _RM_ACTIVITY_HOST *v20; // [rsp+40h] [rbp-20h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+48h] [rbp-18h] BYREF
  struct _RM_PSM_APP_FAMILY *v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+28h] BYREF

  v19 = 0LL;
  v21 = 0LL;
  if ( (int)RmpActivityHostFindByHostId(a1, *((_QWORD *)a2 + 68), &v20) < 0 )
  {
    v11 = RmpHamFindOrCreateDependencyGroup(a1, a2, &v19, &v21, &v23, &v18);
    if ( v11 < 0 || (v11 = RmpActivityHostCreateHostPsm(a1, a4, a2, 1u, &v20), v11 < 0) )
    {
      v14 = v19;
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
        __fastfail(0xEu);
      v12 = v23 == 0;
      v13 = v20;
      *((_QWORD *)v20 + 98) = a3;
      v14 = v19;
      if ( v12 )
      {
        HampDepGroupSetOwner(
          v19,
          (struct _RM_ACTIVITY_HOST *)((char *)v13 + 64),
          (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1288));
        if ( v18 )
        {
          RmpPsmAppFamilyTableFindByHostInfo(
            *((struct _RM_SERVICE_GLOBALS **)v13 + 5),
            (struct _RM_ACTIVITY_HOST *)((char *)v13 + 88),
            &v22);
          *((_QWORD *)v22 + 72) = (char *)v13 + 64;
        }
      }
      else
      {
        HampDepGroupAddHost(v19, (struct _RM_ACTIVITY_HOST *)((char *)v13 + 64));
      }
      v15 = a5;
      ++*((_QWORD *)v13 + 80);
      *v15 = v13;
      v11 = 0;
    }
    if ( v14 )
      HampDepGroupDereference(v14);
    v16 = v21;
    if ( v21 )
    {
      v12 = (*((_QWORD *)v21 + 72))-- == 1LL;
      if ( v12 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64));
    }
  }
  else
  {
    v9 = v20;
    v10 = a5;
    ++*((_QWORD *)v20 + 80);
    v11 = 0;
    *v10 = v9;
  }
  return (unsigned int)v11;
}
