/*
 * XREFs of ?RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FE5C
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18004198C (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180042120 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180042654 (-HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z @ 0x180044EB0 (-HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001B94 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall RmHamFindHostByPid(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned int a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  struct _RM_SERVICE_GLOBALS *v3; // rbx
  int v6; // eax
  char *v7; // rbx
  unsigned int v8; // edi
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v3 = RmSvcGlobals;
  P = 0LL;
  RmpAcquireGlobalLock();
  v6 = RmpActivityHostQueryByPidOrPsmInfo(v3, a2, (struct _RM_ACTIVITY_HOST **)&P);
  v7 = (char *)P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( (*((_BYTE *)P + 772) & 1) != 0 )
    {
      ++*((_QWORD *)P + 80);
      *a3 = (struct _RM_HAM_ACTIVITY_HOST *)(v7 + 64);
      v8 = 0;
    }
    else
    {
      v8 = -1073740007;
    }
  }
  RmpReleaseGlobalLock();
  if ( v7 )
    RmpObjectRelease(v7);
  return v8;
}
