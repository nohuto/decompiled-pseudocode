/*
 * XREFs of ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035B0C
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8 (-HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVI.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800191D4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A800 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EEBC (-HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035AE0 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCreateHostProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PROCESS_INFO *a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  int v8; // ebx
  int v9; // eax
  struct _HAM_DEPENDENCY_GROUP *v10; // rdi
  struct _RM_ACTIVITY_HOST *v11; // rbx
  struct _RM_ACTIVITY_HOST *v12; // rcx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v15; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  P = 0LL;
  v8 = HampDepGroupCreate(&v15);
  if ( v8 >= 0 )
  {
    v9 = RmpActivityHostAllocateAndInitialize(a1, a2, 0LL, 0, (struct _RM_ACTIVITY_HOST **)&P);
    v10 = v15;
    v8 = v9;
    if ( v9 < 0 )
    {
      v12 = (struct _RM_ACTIVITY_HOST *)P;
    }
    else
    {
      v11 = (struct _RM_ACTIVITY_HOST *)P;
      HampDepGroupSetOwner(
        v15,
        (struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64),
        (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1288));
      *((_DWORD *)v11 + 22) = a3->Process.dwProcessId;
      RmpActivityHostCompleteInitialization(v11);
      v12 = 0LL;
      *a4 = v11;
      P = 0LL;
      v8 = 0;
    }
    if ( !v12 )
      goto LABEL_8;
    RmpActivityHostCleanupCommonState(v12);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  v10 = v15;
LABEL_8:
  if ( v10 )
    HampDepGroupDereference(v10);
  return (unsigned int)v8;
}
