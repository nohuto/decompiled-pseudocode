/*
 * XREFs of NdisInitializeTimer @ 0x1C0011550
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C004F75C (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C00BFDFC (ndisMInitializeInitMode.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00EBC04 (ndisMInitializePDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F2CD0 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F3158 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     NdisMSetAttributesEx @ 0x1C0103A40 (NdisMSetAttributesEx.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
