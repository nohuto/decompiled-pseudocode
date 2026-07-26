/*
 * XREFs of _lambda_892a0bee19b69ccfc43518a9a1aed1a5_::operator() @ 0x1C005BA80
 * Callers:
 *     _lambda_892a0bee19b69ccfc43518a9a1aed1a5_::_lambda_invoker_cdecl_ @ 0x1C005BA70 (_lambda_892a0bee19b69ccfc43518a9a1aed1a5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14BC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall lambda_892a0bee19b69ccfc43518a9a1aed1a5_::operator()(__int64 a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a2->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  if ( Ndis::BindState::SetBinding(
         &a2->BindState,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v4);
    WPP_SF_Zq(0x20u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (const wchar_t *)v4[1], v4[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
}
