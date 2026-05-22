/*
 * XREFs of ?StaticExecuteWorkItems@SpatialInputControllerCollection@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180096010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialInputControllerCollection::StaticExecuteWorkItems(
        PTP_CALLBACK_INSTANCE Instance,
        SpatialInputControllerCollection *Context,
        PTP_WORK Work)
{
  SpatialInputControllerCollection::ExecuteWorkItems(Context);
}
