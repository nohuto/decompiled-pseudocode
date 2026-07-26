/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF290
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C0075D40 (WPP_SF_ZqD.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00BE8A0 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // r8
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r15
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebp
  unsigned int m_pauseReasons; // r8d
  bool v10; // cf
  unsigned int m_bindSources; // r8d
  unsigned int v12; // edx
  unsigned __int16 v13; // cx

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_Zq(
        0x20u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    a2->BindState.PretendBindingActive = 1;
    v8 = 0;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_Zq(
        0x1Eu,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    v6 = ndisBindNdis6Protocol(a1, RunningDriver);
    v8 = v6;
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_ZqD(0x1Fu, v7, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v8 )
  {
    Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext.m_bufferSize);
    a2->BindState.m_LastErrorCode = v8;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_DZq(
        0x21u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        v8,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    }
    m_bindSources = a2->BindState.m_bindSources;
    v12 = m_bindSources & 0xFFFFFFFB;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
      goto LABEL_18;
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
    {
      WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v12);
      v12 = a2->BindState.m_bindSources;
    }
    if ( v12 )
    {
      if ( Ndis::BindState::SetBinding(&a2->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
        goto LABEL_37;
      }
      v13 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
LABEL_37:
        v10 = (unsigned __int8)byte_1C0099623 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v10 )
          WPP_SF_Zq(
            0x22u,
            &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
LABEL_18:
        Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
        return;
      }
      v13 = 13;
    }
    WPP_SF_Zq(v13, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
    goto LABEL_37;
  }
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( Ndis::BindState::SetPause(&a2->BindState, DatapathRunning, PauseReason_InitialPause)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_Zq(
        0x24u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
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
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
        WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFFE);
      v10 = (unsigned __int8)byte_1C0099623 < 4u;
      a2->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v10 )
        WPP_SF_Zq(
          0x23u,
          &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport);
    }
  }
  Ndis::BindEngine::ApplyRules(&a1->BindEngine);
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}
