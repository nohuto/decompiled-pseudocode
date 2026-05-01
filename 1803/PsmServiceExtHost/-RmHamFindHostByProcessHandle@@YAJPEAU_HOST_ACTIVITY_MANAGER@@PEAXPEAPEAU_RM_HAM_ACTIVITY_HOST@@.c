/*
 * XREFs of ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88
 * Callers:
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180008AB0 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008FC8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027FEC (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18003381C (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180033B48 (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003FF94 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18006324C (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800671A8 (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800100F0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011D7C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempGetProcessHostInfo @ 0x180028514 (CempGetProcessHostInfo.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmHamFindHostByProcessHandle(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  struct _RM_OBJECT_HEADER *v5; // rsi
  int ProcessHostInfo; // ebx
  struct _RM_OBJECT_TABLE *v7; // rbx
  char *v8; // rdi
  unsigned __int64 v10; // [rsp+20h] [rbp-268h] BYREF
  struct _RM_OBJECT_HEADER *v11; // [rsp+28h] [rbp-260h] BYREF
  _BYTE v12[544]; // [rsp+30h] [rbp-258h] BYREF
  unsigned __int64 v13; // [rsp+250h] [rbp-38h]

  v5 = 0LL;
  ProcessHostInfo = CempGetProcessHostInfo(a2, v12);
  if ( ProcessHostInfo >= 0 )
  {
    v7 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1296);
    v8 = (char *)a1 - 1280;
    v10 = v13;
    RtlAcquireSRWLockShared(v8);
    ProcessHostInfo = RmpObjectTableFindObjectByHandleWithLock(v7, &v10, &v11);
    RtlReleaseSRWLockShared(v8);
    if ( ProcessHostInfo >= 0 )
    {
      v5 = v11;
      if ( (*((_BYTE *)v11 + 804) & 1) != 0 )
      {
        RmpAcquireGlobalLock();
        if ( RmHamHostReferenceUnsafe((struct _RM_OBJECT_HEADER *)((char *)v5 + 64)) )
        {
          RmpReleaseGlobalLock();
          *a3 = (struct _RM_OBJECT_HEADER *)((char *)v5 + 64);
          ProcessHostInfo = 0;
        }
        else
        {
          ProcessHostInfo = -1073741275;
          RmpReleaseGlobalLock();
        }
      }
      else
      {
        ProcessHostInfo = -1073740007;
      }
    }
    if ( v5 )
      RmpObjectRelease(v5);
  }
  return (unsigned int)ProcessHostInfo;
}
