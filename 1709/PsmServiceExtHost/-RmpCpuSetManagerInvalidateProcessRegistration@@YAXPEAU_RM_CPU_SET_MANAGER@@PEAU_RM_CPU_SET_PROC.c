/*
 * XREFs of ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037758
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037704 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037DB0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180037820 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037E34 (-RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_P.c)
 */

void __fastcall RmpCpuSetManagerInvalidateProcessRegistration(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  _QWORD *v2; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rdx
  _QWORD *v6; // r9

  v2 = (_QWORD *)((char *)a2 + 80);
  v3 = a2;
  if ( *((_QWORD *)a2 + 10) )
  {
    v4 = *v2;
    v5 = *((_QWORD *)a2 + 6);
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    *v2 = 0LL;
    v2[1] = 0LL;
    --*(_DWORD *)(v5 + 60);
    RmpCpuSetManagerMarkProcessDirty(a1, (struct _RM_CPU_SET_PROCESS *)v5);
  }
  if ( *((_QWORD *)v3 + 12) )
    RmpCpuSetManagerRemoveRegistrationFromAllocation(a1, v3);
}
