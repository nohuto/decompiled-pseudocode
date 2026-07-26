/*
 * XREFs of ndisMInitializePDCTaskClient @ 0x1C00E1D54
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 */

void (__fastcall *__fastcall ndisMInitializePDCTaskClient(
        char *FunctionContext))(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  void (__fastcall *result)(__int64, struct _NDIS_MINIPORT_BLOCK *); // rax

  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 5624),
    (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc,
    FunctionContext);
  result = ndisPdcTaskClientDisableTimeoutWorkItem;
  *((_QWORD *)FunctionContext + 719) = FunctionContext;
  *((_QWORD *)FunctionContext + 720) = ndisPdcTaskClientDisableTimeoutWorkItem;
  return result;
}
