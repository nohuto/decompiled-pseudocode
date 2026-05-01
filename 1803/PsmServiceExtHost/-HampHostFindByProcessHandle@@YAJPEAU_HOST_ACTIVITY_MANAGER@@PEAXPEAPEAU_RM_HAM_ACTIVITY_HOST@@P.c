/*
 * XREFs of ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008FC8
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180013070 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180029018 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180040134 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18000904C (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall HampHostFindByProcessHandle(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3,
        unsigned __int64 *a4)
{
  int HostByProcessHandle; // edi
  void *v8; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rbx
  unsigned __int64 v10; // rax
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, &v13);
  if ( HostByProcessHandle < 0 )
  {
    v9 = v13;
  }
  else
  {
    v8 = a2;
    v9 = v13;
    HostByProcessHandle = HampHostQueryHostGenerationForProcess(v13, v8, &v14);
    if ( HostByProcessHandle >= 0 )
    {
      v10 = v14;
      *a3 = v9;
      v9 = 0LL;
      HostByProcessHandle = 0;
      *a4 = v10;
    }
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v9 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)HostByProcessHandle;
}
