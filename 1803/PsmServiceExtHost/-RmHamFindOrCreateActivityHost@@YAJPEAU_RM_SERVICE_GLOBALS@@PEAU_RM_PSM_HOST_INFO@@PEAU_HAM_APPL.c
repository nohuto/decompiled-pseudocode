/*
 * XREFs of ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000AFC8
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010DC0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011D7C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmHamFindOrCreateActivityHost(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        struct _RM_PARTITION *a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  __int64 result; // rax
  struct _RM_ACTIVITY_HOST *v10; // rdx
  struct _RM_ACTIVITY_HOST *v11; // rdx
  struct _RM_ACTIVITY_HOST *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (int)RmpActivityHostFindByHostId(a1, *((_QWORD *)a2 + 68), &v12) >= 0 )
  {
    v10 = v12;
  }
  else
  {
    result = RmpActivityHostCreateHostPsm(a1, a4, a2, 1u, &v12);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
      __fastfail(0xEu);
    v10 = v12;
    *((_QWORD *)v12 + 101) = a3;
  }
  RmHamHostReferenceUnsafe((struct _RM_ACTIVITY_HOST *)((char *)v10 + 64));
  result = 0LL;
  *a5 = v11;
  return result;
}
