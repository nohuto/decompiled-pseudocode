/*
 * XREFs of ndisMInitializeInitMode @ 0x1C00AAAF4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializeInitMode(char *FunctionContext)
{
  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 2784),
    (PNDIS_TIMER_FUNCTION)ndisInitModeTimeoutDpc,
    FunctionContext);
  *((_QWORD *)FunctionContext + 364) = FunctionContext;
  *((_QWORD *)FunctionContext + 365) = &ndisInitModeTimeoutWorkItem;
  KeInitializeEvent((PRKEVENT)(FunctionContext + 2992), NotificationEvent, 1u);
}
