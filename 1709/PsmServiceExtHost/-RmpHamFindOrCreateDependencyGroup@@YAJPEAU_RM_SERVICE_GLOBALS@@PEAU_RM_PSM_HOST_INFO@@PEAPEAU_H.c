/*
 * XREFs of ?RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_HAM_DEPENDENCY_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEAK4@Z @ 0x180040364
 * Callers:
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003FEE4 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019AF8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x18001E9E0 (HamOptInIsPsmKeyEnabledEx.c)
 *     ?HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EEBC (-HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180040228 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

__int64 __fastcall RmpHamFindOrCreateDependencyGroup(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_DEPENDENCY_GROUP **a3,
        struct _RM_HAM_ACTIVITY_HOST **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  signed int IsPsmKeyEnabled; // eax
  signed int v11; // ebx
  unsigned int v12; // edi
  signed int v13; // eax
  struct _HAM_DEPENDENCY_GROUP *v14; // rax
  struct _RM_PSM_APP_FAMILY *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  struct _RM_HAM_ACTIVITY_HOST *v18; // rcx
  unsigned int v19; // r9d
  struct _HAM_DEPENDENCY_GROUP *v20; // rax
  struct _HAM_DEPENDENCY_GROUP *v21; // rcx
  struct _HAM_DEPENDENCY_GROUP *v23; // [rsp+20h] [rbp-10h] BYREF
  struct _RM_PSM_APP_FAMILY *v24; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+38h]

  v23 = 0LL;
  IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx((__int64)a2);
  v11 = IsPsmKeyEnabled;
  if ( IsPsmKeyEnabled )
  {
    v12 = v25;
    if ( IsPsmKeyEnabled > 0 )
      v11 = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
  }
  else
  {
    v12 = (unsigned __int8)v25;
    v11 = 0;
  }
  if ( v11 >= 0 )
  {
    if ( v12 && *((_DWORD *)a2 + 134) == 2 )
    {
      v24 = 0LL;
      v13 = RmpPsmAppFamilyTableFindByHostInfo(a1, a2, &v24);
      v11 = v13;
      if ( v13 && v13 != -1073741275 )
        goto LABEL_27;
      if ( (unsigned __int8)PsmIsDynamicKey(a2) )
      {
        v15 = v24;
        if ( !v24 )
          return (unsigned int)-1073741445;
        v16 = *((_QWORD *)v24 + 72);
        if ( !v16 )
          return (unsigned int)-1073741445;
        v17 = *(_QWORD *)(v16 + 640);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 88)) <= 1 )
          __fastfail(0xEu);
        v18 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v15 + 72);
        *a3 = (struct _HAM_DEPENDENCY_GROUP *)v17;
        *a4 = RmHamHostReference(v18);
        *a5 = v19;
        goto LABEL_16;
      }
      if ( v24 && *((_QWORD *)v24 + 72) )
        return (unsigned int)-1073741445;
      v11 = HampDepGroupCreate(&v23);
      if ( v11 >= 0 )
      {
        v14 = v23;
        *a4 = 0LL;
        *a3 = v14;
        *a5 = 0;
LABEL_16:
        v11 = 0;
        goto LABEL_28;
      }
    }
    else
    {
      v11 = HampDepGroupCreate(&v23);
      if ( v11 >= 0 )
      {
        v20 = v23;
        v21 = 0LL;
        *a4 = 0LL;
        *a3 = v20;
        *a5 = 0;
        v11 = 0;
        goto LABEL_25;
      }
    }
    v21 = v23;
LABEL_25:
    if ( v21 )
      HampDepGroupDereference(v21);
LABEL_27:
    if ( v11 < 0 )
      return (unsigned int)v11;
LABEL_28:
    *a6 = v12;
  }
  return (unsigned int)v11;
}
