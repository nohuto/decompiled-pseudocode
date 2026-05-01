/*
 * XREFs of ?HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800479A8
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047ED8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042DF8 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042E9C (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActIsAllowedInSystemState@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@@Z @ 0x180047A40 (-HampActIsAllowedInSystemState@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@@Z.c)
 */

__int64 __fastcall HampActIsAllowed(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // ecx

  v3 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 176;
  HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)v3, a2);
  v5 = 0;
  if ( HampActIsAllowedInSystemState(a1, (struct _SYSTEM_STATE_TRACKER_SYSTEM_STATE *)(v3 + 248)) )
  {
    HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)v3, v4);
    v6 = (*(_DWORD *)(*((_QWORD *)a1 + 9) + 628LL) >> 7) & 7;
    if ( ((*((_DWORD *)a1 + 26) & 0x200) == 0 || !v6) && ((*((_DWORD *)a1 + 26) & 0x400) == 0 || v6 < 3) )
      return 1;
  }
  else
  {
    HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)v3, v4);
  }
  return v5;
}
