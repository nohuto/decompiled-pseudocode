/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C7270
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C0076128 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C0076178 (WPP_SF__guid_DqD.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00B7178 (ndisInitializeMiniportRestartAttributes.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00BCEC0 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00FC100 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0106FA8 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  struct _NDIS_FILTER_BLOCK *BindContext; // r14
  unsigned int restarted; // esi
  _QWORD v10[20]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v11[20]; // [rsp+D0h] [rbp-D8h] BYREF

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( !*(_DWORD *)(v6 + 8) )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( (unsigned __int8)byte_1C0099623 >= 4u )
    WPP_SF__guid_Dq(0x12u, v7, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisReferencePackage((__int64)&ndisPkgs);
  restarted = ndisRestartFilterInner(BindContext, a3);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099623 >= 4u )
    WPP_SF__guid_DqD(
      0x13u,
      (__int64)a2->BindState.Miniport,
      (__int64)&a2->BindDriver._p->_t.Guid,
      a2->FilterIndex,
      a2->BindState.Miniport,
      restarted);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(BindContext->FilterDriver, 3LL, restarted);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a2->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v11);
      if ( (unsigned __int8)byte_1C0099623 >= 4u )
        WPP_SF_Zq(0x15u, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids, (const wchar_t *)v11[1], v11[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( a2->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&a2->BindState, DatapathPaused, PauseReason_RestartNeeded)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v10);
      if ( (unsigned __int8)byte_1C0099623 >= 4u )
        WPP_SF_Zq(0x14u, &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids, (const wchar_t *)v10[1], v10[0]);
    }
    a2->BindState.m_actualPauseState = DatapathRunning;
    Ndis::BindEngine::ApplyRules(&a1->BindEngine);
    ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
  }
}
