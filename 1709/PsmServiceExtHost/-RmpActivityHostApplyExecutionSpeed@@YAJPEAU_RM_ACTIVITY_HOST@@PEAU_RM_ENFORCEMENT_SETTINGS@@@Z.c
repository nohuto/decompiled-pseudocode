/*
 * XREFs of ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001F1DC
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18001F294 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v2; // esi
  int v4; // ebp
  bool v6; // cl
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 10);
  v4 = *((_DWORD *)a1 + 228);
  if ( v4 < 1 == v2 < 1 || (result = RmpSystemApplyPsmPriorityToHost(), (int)result >= 0) )
  {
    v6 = v2 >= 2;
    if ( (*((_BYTE *)a2 + 52) & 4) != 0 && ((*((_BYTE *)a1 + 924) & 4) == 0 || v6 != v4 >= 2) )
      RmpActivityHostActOnProcesses(
        a1,
        0x2000,
        1,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
        (_QWORD *)v6);
    *((_DWORD *)a1 + 228) = *((_DWORD *)a2 + 10);
    *((_BYTE *)a1 + 924) ^= (*((_BYTE *)a1 + 924) ^ *((_BYTE *)a2 + 52)) & 4;
    return 0LL;
  }
  return result;
}
