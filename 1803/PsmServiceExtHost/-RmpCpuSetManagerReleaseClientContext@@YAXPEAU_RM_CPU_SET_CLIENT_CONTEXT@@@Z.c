/*
 * XREFs of ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180056704
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E120 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x18004FB54 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BD60 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180056664 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800567B0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

void __fastcall RmpCpuSetManagerReleaseClientContext(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _RM_CPU_SET_MANAGER *v4; // rsi
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx

  v4 = *(struct _RM_CPU_SET_MANAGER **)a1;
  for ( i = (_QWORD *)((char *)a1 + 24);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseAllocation((_QWORD *)(*i - 64LL), a2, a3, a4) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges(v4);
  for ( j = (_QWORD *)((char *)a1 + 40);
        (_QWORD *)*j != j;
        RmpCpuSetManagerReleaseProcessRegistrationEx(v4, (PVOID)(*j - 72LL), 0) )
  {
    ;
  }
  v8 = (_QWORD *)((char *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  if ( v9 )
  {
    if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = (_QWORD *)*((_QWORD *)a1 + 2), (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    *((_QWORD *)a1 + 2) = 0LL;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
