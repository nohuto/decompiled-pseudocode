/*
 * XREFs of ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8
 * Callers:
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011974 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180013070 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027FEC (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x1800326C8 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800409A0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 * Callees:
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x180011D98 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011E78 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012AC8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032300 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x180040C8C (-HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180040DAC (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006C948 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActCreate(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        char a5,
        struct _HAM_ACTIVITY **a6)
{
  __int64 v10; // rbx
  char v11; // di
  __int64 v12; // rdx
  struct _HAM_ACTIVITY *Heap; // rax
  struct _HAM_ACTIVITY *v14; // rbx
  int State; // edi

  v10 = *(_QWORD *)(*((_QWORD *)a3 + 93) + 88LL);
  HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v10);
  v11 = *(_BYTE *)(v10 + 332);
  HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v10, v12);
  if ( (v11 & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  Heap = (struct _HAM_ACTIVITY *)HampAllocateHeap(0x220uLL);
  v14 = Heap;
  if ( Heap )
  {
    HampActInitialize(a2, a4, a3, Heap);
    *((_QWORD *)v14 + 8) = a1;
    State = HampActAllocateState(v14, a5);
    if ( State >= 0 )
    {
      State = HampActInsert(v14);
      if ( State >= 0 )
      {
        *a6 = v14;
        v14 = 0LL;
        State = 0;
      }
    }
    if ( v14 )
      CemRcObjectDereference(v14);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
