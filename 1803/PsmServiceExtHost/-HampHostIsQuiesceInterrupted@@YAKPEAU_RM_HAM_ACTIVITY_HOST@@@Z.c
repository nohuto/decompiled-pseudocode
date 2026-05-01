/*
 * XREFs of ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800334CC
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsQuiesceInterrupted(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_QWORD *)a1 + 79) >> 47) & 1LL;
}
