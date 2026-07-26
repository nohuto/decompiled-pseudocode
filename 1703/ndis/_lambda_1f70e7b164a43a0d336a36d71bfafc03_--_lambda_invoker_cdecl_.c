/*
 * XREFs of _lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_ @ 0x1C005BA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  Ndis::BindEngine::ApplyBindChanges(&a1->BindState.Miniport->BindEngine, RunSynchronous, 0);
}
