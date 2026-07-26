/*
 * XREFs of _lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_ @ 0x1C00F4500
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx

  Miniport = a1->BindState.Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(
    &Miniport->BindEngine,
    (enum CallRunMode)(LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) != 0),
    0);
}
