/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B12D8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C0075998 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C00759E8 (WPP_SF__guid_DqD.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00BFBBC (ndisInitializeMiniportRestartAttributes.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00F9520 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0101908 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  struct _NDIS_FILTER_BLOCK *v6; // rbp
  unsigned int restarted; // esi
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  char v9; // bl
  bool m_isDirty; // al
  _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  _QWORD v12[20]; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v13[20]; // [rsp+D0h] [rbp-C8h] BYREF

  if ( a2->BindState.m_bindContext.m_numElements )
    v6 = (struct _NDIS_FILTER_BLOCK *)*a2->BindState.m_bindContext._p;
  else
    v6 = 0LL;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF__guid_Dq(0x12u, (__int64)a2, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisReferencePackage(&ndisPkgs);
  restarted = ndisRestartFilterInner(v6, a3);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF__guid_DqD(
      0x13u,
      (__int64)a2->BindState.Miniport,
      (__int64)&a2->BindDriver._p->_t.Guid,
      a2->FilterIndex,
      a2->BindState.Miniport,
      restarted);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(v6->FilterDriver, 3LL, restarted);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a2->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v13);
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
        WPP_SF_Zq(0x15u, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, (const wchar_t *)v13[1], v13[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( a2->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&a2->BindState, DatapathPaused, PauseReason_RestartNeeded)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v12);
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
        WPP_SF_Zq(0x14u, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, (const wchar_t *)v12[1], v12[0]);
    }
    a2->BindState.m_actualPauseState = DatapathRunning;
    v9 = 0;
    m_isDirty = a1->BindEngine.m_isDirty;
    do
    {
      m_miniport = a1->BindEngine.m_miniport;
      v9 |= m_isDirty;
      a1->BindEngine.m_isDirty = 0;
      Ndis::BindRules::Apply((Ndis::BindRules *)m_miniport, v8);
      m_isDirty = a1->BindEngine.m_isDirty;
    }
    while ( m_isDirty );
    a1->BindEngine.m_isDirty = v9;
    ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
  }
}
