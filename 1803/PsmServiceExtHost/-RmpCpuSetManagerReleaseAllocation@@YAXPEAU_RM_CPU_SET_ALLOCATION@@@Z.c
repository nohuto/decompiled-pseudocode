/*
 * XREFs of ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180056664
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x18004F90C (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18004FF38 (-RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180056704 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800581A0 (-RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800565B4 (-RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800567B0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18005931C (-RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllocation(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *i; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v4 = P[6];
  RmpCpuSetManagerReleaseAllProcessorsFromAllocation(
    (struct _RM_CPU_SET_MANAGER *)v4,
    (struct _RM_CPU_SET_ALLOCATION *)P,
    a3,
    a4);
  for ( i = P + 10;
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)v4, (PVOID)(*i - 104LL), 0) )
  {
    ;
  }
  v7 = P + 8;
  v8 = P[8];
  if ( *(_QWORD **)(v8 + 8) != P + 8 || (v9 = (_QWORD *)P[9], (_QWORD *)*v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  P[9] = 0LL;
  RmpObjectRelease((char *)P);
  RmpObjectTableRemoveObject((struct _RM_OBJECT_TABLE *)(v4 + 24), (struct _RM_OBJECT_HEADER *)P);
  RmpObjectRelease((char *)P);
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v4);
}
