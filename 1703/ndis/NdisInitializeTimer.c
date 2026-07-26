/*
 * XREFs of NdisInitializeTimer @ 0x1C00145E0
 * Callers:
 *     ndisPeriodicReceivesAddCpu @ 0x1C0050B8C (ndisPeriodicReceivesAddCpu.c)
 *     ndisMInitializeInitMode @ 0x1C00AAAF4 (ndisMInitializeInitMode.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00E1D54 (ndisMInitializePDCTaskClient.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00E9764 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9BE0 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C00F5ED0 (NdisMSetAttributesEx.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisInitializePeriodicReceives @ 0x1C0113E38 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeTimer(PNDIS_TIMER Timer, PNDIS_TIMER_FUNCTION TimerFunction, PVOID FunctionContext)
{
  KeInitializeTimer(&Timer->Timer);
  KeInitializeDpc(&Timer->Dpc, (PKDEFERRED_ROUTINE)TimerFunction, FunctionContext);
  KeSetImportanceDpc(&Timer->Dpc, LowImportance);
}
