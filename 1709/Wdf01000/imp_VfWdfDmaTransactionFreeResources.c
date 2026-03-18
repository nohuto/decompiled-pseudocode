/*
 * XREFs of imp_VfWdfDmaTransactionFreeResources @ 0x1C00D2470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  WdfVersion.Functions.pfnWdfDmaTransactionFreeResources(DriverGlobals, DmaTransaction);
}
