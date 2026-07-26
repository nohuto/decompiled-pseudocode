/*
 * XREFs of _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00F0B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_(struct _NDIS_MINIPORT_BLOCK **a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&(*a1)->BindEngine, RunSynchronous, 0);
  Ndis::Initmode::DisableIfNeeded(*a1, RunSynchronous, v2);
}
