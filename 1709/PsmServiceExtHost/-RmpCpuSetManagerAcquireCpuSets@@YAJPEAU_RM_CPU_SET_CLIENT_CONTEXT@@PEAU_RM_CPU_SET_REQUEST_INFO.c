/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180036754
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180032B84 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038160 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180024050 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@@Z @ 0x18003683C (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800369E0 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x180036CD8 (-RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037220 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037380 (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18003796C (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_MANAGER **a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        unsigned int a3,
        struct _RM_CPU_SET_ALLOCATION **a4)
{
  struct _RM_CPU_SET_ALLOCATION *v4; // rdi
  struct _RM_CPU_SET_MANAGER *v8; // rsi
  int ObjectsForAllocation; // ebx
  struct _RM_CPU_SET_ALLOCATION *Heap; // rax
  unsigned int v11; // r8d

  v4 = 0LL;
  if ( (unsigned int)(*(_DWORD *)a2 - 1) > 0x1FF )
  {
    ObjectsForAllocation = -1073741583;
  }
  else
  {
    v8 = *a1;
    ObjectsForAllocation = RmpCpuSetManagerCheckRequestSatisfiability(*a1, a2, a3);
    if ( ObjectsForAllocation < 0 )
      return (unsigned int)ObjectsForAllocation;
    Heap = (struct _RM_CPU_SET_ALLOCATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x108uLL);
    v4 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    RmpCpuSetManagerInitializeAllocation(v8, Heap);
    ObjectsForAllocation = RmpCpuSetManagerAllocateObjectsForAllocation(v4);
    if ( ObjectsForAllocation >= 0 )
    {
      RmpCpuSetManagerAcquireSetsForAllocation(v8, v4, v11, a2);
      RmpCpuSetManagerInsertAllocation((struct _RM_CPU_SET_CLIENT_CONTEXT *)a1, v4);
      RmpCpuSetManagerApplyAllPolicyChanges(v8);
      RmpCpuSetManagerPublishAllocationState(v4);
      ObjectsForAllocation = 0;
      *a4 = v4;
      return (unsigned int)ObjectsForAllocation;
    }
  }
  if ( v4 )
    RmpObjectRelease((char *)v4);
  return (unsigned int)ObjectsForAllocation;
}
