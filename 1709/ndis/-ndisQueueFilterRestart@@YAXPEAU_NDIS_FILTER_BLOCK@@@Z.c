/*
 * XREFs of ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E4F6C
 * Callers:
 *     NdisFRestartFilter @ 0x1C0058D80 (NdisFRestartFilter.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00E5060 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueueFilterRestart(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  _QWORD v3[20]; // [rsp+20h] [rbp-B8h] BYREF

  Miniport = a1->Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bind->BindState, DatapathPaused, PauseReason_RestartNeeded)
    && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v3);
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zq(0x24u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (const wchar_t *)v3[1], v3[0]);
  }
  a1->Bind->BindState.NeedsPauseAction = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->Miniport->BindEngine, RunAsynchronous, 0);
}
