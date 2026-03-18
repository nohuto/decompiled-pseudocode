/*
 * XREFs of imp_VfWdfDmaTransactionSetImmediateExecution @ 0x1C00D2640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionSetImmediateExecution(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 UseImmediateExecution)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetImmediateExecution(DriverGlobals, DmaTransaction, UseImmediateExecution);
}
