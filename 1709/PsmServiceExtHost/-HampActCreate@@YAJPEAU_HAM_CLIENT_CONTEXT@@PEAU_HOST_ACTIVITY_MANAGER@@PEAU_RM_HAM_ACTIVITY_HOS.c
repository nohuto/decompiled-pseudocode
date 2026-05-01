/*
 * XREFs of ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180041E14 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180042120 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180043254 (-HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 * Callees:
 *     ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x180045A14 (-HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z.c)
 *     ?HampActInitialize@@YAXW4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800476F0 (-HampActInitialize@@YAXW4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACT.c)
 *     ?HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800477F8 (-HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18004BEDC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _QWORD *a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  PVOID Heap; // rax
  __int64 v13; // rcx
  PVOID v14; // rbx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 720) + 48LL);
  v11 = v10 + 256;
  RtlAcquireSRWLockExclusive(v10 + 256);
  *(_DWORD *)(v10 + 264) = GetCurrentThreadId();
  LOBYTE(v10) = *(_BYTE *)(v10 + 332);
  *(_DWORD *)(v11 + 8) = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( (v10 & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1F8uLL);
  v14 = Heap;
  if ( Heap )
  {
    LOBYTE(v13) = a5;
    HampActInitialize(v13, a2, a4, a3, Heap);
    *((_QWORD *)v14 + 8) = a1;
    v15 = HampRmContextCreate((struct _HAM_ACTIVITY *)v14, (struct HAM_ACTIVITY_RM_CONTEXT **)v14 + 10);
    if ( v15 >= 0 )
      v15 = 0;
    if ( v15 >= 0 )
    {
      *((_BYTE *)v14 + 500) = 1;
      HampActInsert((struct _HAM_ACTIVITY *)v14);
      v15 = 0;
      *a6 = v14;
      v14 = 0LL;
    }
    if ( v14 )
      CemRcObjectDereference(v14, v16, v17, v18);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
