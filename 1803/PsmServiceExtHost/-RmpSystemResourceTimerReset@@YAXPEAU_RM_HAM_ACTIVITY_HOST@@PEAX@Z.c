/*
 * XREFs of ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z @ 0x18003344C
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemResourceTimerReset(struct _RM_HAM_ACTIVITY_HOST *a1, void *a2)
{
  (*(void (__fastcall **)(void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 216LL))(a2);
}
