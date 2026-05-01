/*
 * XREFs of ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0
 * Callers:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180014B10 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ACD0 (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F894 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x1800334DC (-RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSet.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180034C90 (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040068 (-RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVI.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180040500 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x180039EB4 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpPartitionRelease(HANDLE *a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  _DWORD *v4; // rdi
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax

  _m_prefetchw(a1);
  v2 = (signed __int64)*a1;
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  v4 = a1[3];
  RtlAcquireSRWLockExclusive(v4 + 78);
  v4[80] = GetCurrentThreadId();
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  v7 = v5 - 1;
  if ( v6 )
  {
    if ( v7 )
      __fastfail(0xEu);
    if ( a1[1] )
    {
      *((_DWORD *)a1 + 56) &= ~1u;
      *((_DWORD *)a1 + 56) |= 2u;
      SetEvent(a1[8]);
    }
    else
    {
      RmpPartitionCleanup((struct _RM_PARTITION *)a1);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
    }
  }
  v4[80] = 0;
  RtlReleaseSRWLockExclusive(v4 + 78);
}
