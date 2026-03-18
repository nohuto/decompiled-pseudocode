/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemoveByIoResList @ 0x1C00D3620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemoveByIoResList(DriverGlobals, RequirementsList, IoResList);
}
