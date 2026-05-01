/*
 * XREFs of ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180037D04
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180032DB4 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180024050 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037C64 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037DB0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
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
  char *v8; // rax
  __int64 v9; // rdx
  char **v10; // rcx

  v4 = *(struct _RM_CPU_SET_MANAGER **)a1;
  for ( i = (_QWORD *)((char *)a1 + 24);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseAllocation((_QWORD *)(*i - 56LL), a2, a3, a4) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges(v4);
  for ( j = (_QWORD *)((char *)a1 + 40);
        (_QWORD *)*j != j;
        RmpCpuSetManagerReleaseProcessRegistrationEx(v4, (PVOID)(*j - 64LL), 0) )
  {
    ;
  }
  v8 = (char *)a1 + 8;
  if ( *((_QWORD *)a1 + 1) )
  {
    v9 = *(_QWORD *)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = (char **)*((_QWORD *)a1 + 2), *v10 != v8) )
      __fastfail(3u);
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a1 + 2) = 0LL;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
