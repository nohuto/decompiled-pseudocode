/*
 * XREFs of imp_VfWdfChildListEndIteration @ 0x1C00D10B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfChildListEndIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  WdfVersion.Functions.pfnWdfChildListEndIteration(DriverGlobals, ChildList, Iterator);
}
