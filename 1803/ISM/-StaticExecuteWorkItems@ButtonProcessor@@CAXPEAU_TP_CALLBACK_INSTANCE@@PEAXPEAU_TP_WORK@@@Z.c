/*
 * XREFs of ?StaticExecuteWorkItems@ButtonProcessor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180091C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ButtonProcessor::StaticExecuteWorkItems(
        PTP_CALLBACK_INSTANCE Instance,
        ButtonProcessor *Context,
        PTP_WORK Work)
{
  ButtonProcessor::ExecuteWorkItems(Context);
}
