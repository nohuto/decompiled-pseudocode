/*
 * XREFs of ?HampActIsAllowedInSystemState@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@@Z @ 0x180047A40
 * Callers:
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180025570 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x1800479A8 (-HampActIsAllowed@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActIsAllowedInSystemState(
        struct _HAM_ACTIVITY *a1,
        struct _SYSTEM_STATE_TRACKER_SYSTEM_STATE *a2)
{
  return ((*(_BYTE *)a2 & 4) == 0 || (*((_BYTE *)a1 + 104) & 8) == 0)
      && ((*(_BYTE *)a2 & 8) == 0 || (*((_BYTE *)a1 + 104) & 0x10) == 0)
      && ((*(_BYTE *)a2 & 0x10) == 0 || (*((_BYTE *)a1 + 104) & 4) == 0)
      && ((*(_BYTE *)a2 & 0x40) == 0 || (*((_BYTE *)a1 + 104) & 2) == 0)
      && ((*(_BYTE *)a2 & 2) != 0 || (*((_BYTE *)a1 + 104) & 0x20) == 0)
      && ((*(_BYTE *)a2 & 0x20) == 0 || (*((_BYTE *)a1 + 104) & 0x40) == 0);
}
