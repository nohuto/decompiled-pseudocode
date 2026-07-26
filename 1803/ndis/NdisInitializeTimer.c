/*
 * XREFs of NdisInitializeTimer @ 0x1C001DEA0
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C00500A8 (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C00C2B54 (ndisMInitializeInitMode.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00EE7B8 (ndisMInitializePDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00F5884 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F5D0C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C0104F50 (NdisMSetAttributesEx.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisInitializePeriodicReceives @ 0x1C011EDC8 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
