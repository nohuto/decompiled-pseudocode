/*
 * XREFs of _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00FA020
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B418C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_(Ndis::Initmode **a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)*a1 + 5136), RunSynchronous, 0);
  Ndis::Initmode::DisableIfNeeded(*a1, 0LL, v2);
}
