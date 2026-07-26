/*
 * XREFs of ndisMInitializePDCTaskClient @ 0x1C00EBC04
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0011550 (NdisInitializeTimer.c)
 */

void (__fastcall *__fastcall ndisMInitializePDCTaskClient(
        char *FunctionContext))(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  void (__fastcall *result)(__int64, struct _NDIS_MINIPORT_BLOCK *); // rax

  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 5528),
    (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc,
    FunctionContext);
  result = ndisPdcTaskClientDisableTimeoutWorkItem;
  *((_QWORD *)FunctionContext + 707) = FunctionContext;
  *((_QWORD *)FunctionContext + 708) = ndisPdcTaskClientDisableTimeoutWorkItem;
  return result;
}
