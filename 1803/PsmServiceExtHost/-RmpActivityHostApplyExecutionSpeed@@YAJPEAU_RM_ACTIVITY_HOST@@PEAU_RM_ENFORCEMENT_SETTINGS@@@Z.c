/*
 * XREFs of ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001065C
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18001B190 (CempLockTrackerMarkAcquired.c)
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180032094 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v2; // edi
  int v4; // ebp
  struct _RM_ACTIVITY_HOST *v5; // rbx
  _BOOL8 v6; // rdx
  unsigned __int8 v7; // al
  DWORD CurrentThreadId; // eax
  DWORD v9; // ecx
  _QWORD *Value; // rax
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a1 + 272);
  v5 = a1;
  v6 = v2 < 1;
  if ( v4 < 1 == v6 || (result = RmpSystemApplyPsmPriorityToHost(), (int)result >= 0) )
  {
    v7 = v2 >= 2 && (*((_BYTE *)a2 + 32) & 4) != 0;
    LOBYTE(a1) = v4 >= 2 && (*((_BYTE *)v5 + 1096) & 4) != 0;
    if ( v7 != (_BYTE)a1 )
      RmHamHostActOnProcesses(v5, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)v7);
    CempLockTrackerMarkAcquired(a1, v6, 1LL);
    RtlAcquireSRWLockExclusive((char *)v5 + 64);
    CurrentThreadId = GetCurrentThreadId();
    v9 = HampLockTrackerId;
    *((_DWORD *)v5 + 18) = CurrentThreadId;
    *((_DWORD *)v5 + 272) = *((_DWORD *)a2 + 6);
    *((_BYTE *)v5 + 1096) ^= (*((_BYTE *)v5 + 1096) ^ *((_BYTE *)a2 + 32)) & 4;
    if ( v9 != -1 )
    {
      Value = TlsGetValue(v9);
      if ( (*(_BYTE *)Value & 2) == 0 )
        __int2c();
      if ( Value[2]-- == 1LL )
        *Value &= ~2uLL;
    }
    *((_DWORD *)v5 + 18) = 0;
    RtlReleaseSRWLockExclusive((char *)v5 + 64);
    return 0LL;
  }
  return result;
}
