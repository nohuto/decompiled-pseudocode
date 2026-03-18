/*
 * XREFs of imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C00839D0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C008347C (FxIoResourceRequirementsListInsertIoResList.c)
 */

int __fastcall imp_WdfIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        unsigned int Index)
{
  return FxIoResourceRequirementsListInsertIoResList(DriverGlobals, RequirementsList, IoResList, Index);
}
