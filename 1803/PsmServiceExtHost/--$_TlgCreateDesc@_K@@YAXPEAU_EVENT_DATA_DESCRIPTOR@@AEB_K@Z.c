/*
 * XREFs of ??$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z @ 0x18004CCEC
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _TlgCreateDesc<unsigned __int64>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 8;
}
