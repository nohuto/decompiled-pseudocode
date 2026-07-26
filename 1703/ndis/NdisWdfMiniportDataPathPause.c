/*
 * XREFs of NdisWdfMiniportDataPathPause @ 0x1C00DFE20
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportDataPathPause(__int64 a1)
{
  bool v2; // al
  const wchar_t *v3; // r8

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5160, 0LL);
  v2 = Ndis::BindState::SetPause((Ndis::BindState *)(a1 + 5064), DatapathPaused, PauseReason_Wdf);
  v3 = 0LL;
  if ( v2 && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    if ( a1 )
      v3 = *(const wchar_t **)(a1 + 3880);
    WPP_SF_Zq(0x72u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, v3, a1);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5136), RunSynchronous, 0);
}
