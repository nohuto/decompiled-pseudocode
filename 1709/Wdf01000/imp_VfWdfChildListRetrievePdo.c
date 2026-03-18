/*
 * XREFs of imp_VfWdfChildListRetrievePdo @ 0x1C00D1180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo)
{
  return WdfVersion.Functions.pfnWdfChildListRetrievePdo(DriverGlobals, ChildList, RetrieveInfo);
}
