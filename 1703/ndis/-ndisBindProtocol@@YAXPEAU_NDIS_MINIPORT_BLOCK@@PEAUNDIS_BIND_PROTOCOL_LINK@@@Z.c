/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF730
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C0073A60 (WPP_SF_ZqD.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5AEC (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // r8
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebp
  unsigned int m_pauseReasons; // r8d
  char v10; // cl
  unsigned int m_bindSources; // r8d
  unsigned __int16 v12; // cx
  bool v13; // cf

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C0092623 >= 4u )
      WPP_SF_Zq(
        0x20u,
        &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
        &p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    a2->BindState.PretendBindingActive = 1;
    v8 = 0;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0092623 >= 4u )
      WPP_SF_Zq(
        0x1Eu,
        &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    v6 = ndisBindNdis6Protocol(a1, RunningDriver);
    v8 = v6;
    if ( (unsigned __int8)byte_1C0092623 >= 4u )
      WPP_SF_ZqD(0x1Fu, v7, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( !v8 )
  {
    if ( RunningDriver->MajorNdisVersion < 6u )
    {
      if ( Ndis::BindState::SetPause(&a2->BindState, DatapathRunning, PauseReason_InitialPause)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        WPP_SF_Zq(
          0x24u,
          &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
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
        v10 = byte_1C0092623;
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
        {
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFFE);
          v10 = byte_1C0092623;
        }
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( (unsigned __int8)v10 >= 4u )
          WPP_SF_Zq(
            0x23u,
            &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
      }
    }
    goto LABEL_13;
  }
  Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
  a2->BindState.m_LastErrorCode = v8;
  if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    WPP_SF_DZq(
      0x21u,
      &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
      v8,
      &a2->BindDriver._p->_t.Name._Myptr->Length,
      a2->BindState.Miniport);
  }
  m_bindSources = a2->BindState.m_bindSources;
  a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
  if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFB) != 0) )
  {
    if ( (unsigned __int8)byte_1C0092623 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&a2->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
        goto LABEL_35;
      }
      v12 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
LABEL_35:
        v13 = (unsigned __int8)byte_1C0092623 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v13 )
          WPP_SF_Zq(
            0x22u,
            &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
        goto LABEL_13;
      }
      v12 = 13;
    }
    WPP_SF_Zq(v12, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
    goto LABEL_35;
  }
LABEL_13:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
