/*
 * XREFs of NdisWdfMiniportDataPathStart @ 0x1C0061A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9CC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall NdisWdfMiniportDataPathStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  _QWORD v3[21]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_Wdf)
    && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v3);
    WPP_SF_Zq(0x71u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (const wchar_t *)v3[1], v3[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunSynchronous, 0);
}
