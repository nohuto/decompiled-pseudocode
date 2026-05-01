/*
 * XREFs of ?RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032B94
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

void __fastcall RmpActivityHostNewProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // eax

  if ( *((int *)a1 + 272) >= 2 && (*((_BYTE *)a1 + 1096) & 4) != 0 )
    RmHamHostActOnProcesses(
      a1,
      0x2000,
      1,
      (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
      (_QWORD *)1);
  v2 = *((_DWORD *)a1 + 369);
  if ( (v2 & 2) != 0 )
  {
    if ( (*((_BYTE *)a1 + 1156) & 0x10) != 0 )
      *((_DWORD *)a1 + 369) = v2 & 0xFFFFFFFD;
    else
      RmpActivityHostSetStoreHighMemoryPriority(a1);
  }
}
