/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B5798
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C00755D4 (WPP_SF_ZqD.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00B1F60 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // r8
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r15d
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  unsigned int m_pauseReasons; // r8d
  bool v11; // cf
  bool m_isDirty; // al
  char v13; // bl
  _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  unsigned int m_unbindReasons; // r8d
  unsigned int m_bindSources; // r8d
  unsigned __int16 v17; // cx

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zq(
        0x20u,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        &p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    a2->BindState.PretendBindingActive = 1;
    v8 = 0;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zq(
        0x1Eu,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    v6 = ndisBindNdis6Protocol(a1, RunningDriver);
    v8 = v6;
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_ZqD(0x1Fu, v7, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v8 )
  {
    Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext.m_bufferSize);
    m_unbindReasons = a2->BindState.m_unbindReasons;
    a2->BindState.m_LastErrorCode = v8;
    a2->BindState.m_unbindReasons = m_unbindReasons | 4;
    if ( !m_unbindReasons || !a2->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_unbindReasons, m_unbindReasons | 4);
      v11 = (unsigned __int8)byte_1C0098763 < 4u;
      a2->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v11 )
        WPP_SF_DZq(
          0x21u,
          &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
          v8,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport);
    }
    m_bindSources = a2->BindState.m_bindSources;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
      goto LABEL_22;
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&a2->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
        goto LABEL_43;
      }
      v17 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
LABEL_43:
        v11 = (unsigned __int8)byte_1C0098763 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v11 )
          WPP_SF_Zq(
            0x22u,
            &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
LABEL_22:
        Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
        return;
      }
      v17 = 13;
    }
    WPP_SF_Zq(v17, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
    goto LABEL_43;
  }
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( Ndis::BindState::SetPause(&a2->BindState, DatapathRunning, PauseReason_InitialPause)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_Zq(
        0x24u,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    }
  }
  else
  {
    m_pauseReasons = a2->BindState.m_pauseReasons;
    a2->BindState.m_pauseReasons = m_pauseReasons & 0xFFFFFFFE;
    if ( (m_pauseReasons != 0) != ((m_pauseReasons & 0xFFFFFFFE) != 0) || !a2->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFFE);
      v11 = (unsigned __int8)byte_1C0098763 < 4u;
      a2->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v11 )
        WPP_SF_Zq(
          0x23u,
          &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport);
    }
  }
  m_isDirty = a1->BindEngine.m_isDirty;
  v13 = 0;
  do
  {
    m_miniport = a1->BindEngine.m_miniport;
    v13 |= m_isDirty;
    a1->BindEngine.m_isDirty = 0;
    Ndis::BindRules::Apply((Ndis::BindRules *)m_miniport, v9);
    m_isDirty = a1->BindEngine.m_isDirty;
  }
  while ( m_isDirty );
  a1->BindEngine.m_isDirty = v13;
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}
