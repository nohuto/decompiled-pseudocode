/*
 * XREFs of NdisWdfMiniportDataPathPause @ 0x1C00E9CC0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportDataPathPause(__int64 a1)
{
  bool v2; // al
  const wchar_t *v3; // r8

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5160, 0LL);
  v2 = Ndis::BindState::SetPause((Ndis::BindState *)(a1 + 5064), DatapathPaused, PauseReason_Wdf);
  v3 = 0LL;
  if ( v2 && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    if ( a1 )
      v3 = *(const wchar_t **)(a1 + 3880);
    WPP_SF_Zq(0x72u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v3, a1);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5136));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5136), RunSynchronous, 0);
}
