/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B202C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C00500AC (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C0073A60 (WPP_SF_ZqD.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00AB5F8 (ndisInitializeMiniportRestartAttributes.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B547C (ndisPnPNotifyBindingUnlocked.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5AEC (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00EAB6C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  unsigned int m_numElements; // eax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r14d
  unsigned int m_bindSources; // r8d
  unsigned __int16 v13; // cx
  bool v14; // cf
  unsigned int v15; // [rsp+30h] [rbp-99h]
  void *v16; // [rsp+38h] [rbp-91h]
  _QWORD v17[22]; // [rsp+40h] [rbp-89h] BYREF

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    v8 = 0LL;
    v15 = m_numElements;
    while ( (_DWORD)v8 != m_numElements )
    {
      if ( (unsigned int)v8 >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(0xBAD0FFu);
      v16 = a2->BindState.m_bindContext._p[v8];
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
        WPP_SF_Zqq(
          0x14u,
          &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          a2->BindState.m_bindContext._p[v8]);
      memset(v17, 0, sizeof(v17));
      v17[0] = 11272832LL;
      *(_QWORD *)((char *)&v17[20] + 4) = 0LL;
      LODWORD(v17[20]) = 0;
      v17[2] = &a3->ProtocolParameters;
      LODWORD(v17[1]) = 9;
      LODWORD(v17[3]) = 56;
      ndisPnPNotifyBindingUnlocked(v16, v17);
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
        WPP_SF_Zqq(
          0x15u,
          &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          v16);
      m_numElements = v15;
      v8 = (unsigned int)(v8 + 1);
    }
LABEL_12:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a2->BindState.m_actualPauseState = DatapathRunning;
    Ndis::BindEngine::ApplyRules(&a1->BindEngine);
    ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  if ( (unsigned __int8)byte_1C0092623 >= 4u )
    WPP_SF_Zq(
      0x16u,
      &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
      &a2->BindDriver._p->_t.Name._Myptr->Length,
      a2->BindState.Miniport);
  v9 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
  v11 = v9;
  if ( (unsigned __int8)byte_1C0092623 >= 4u )
    WPP_SF_ZqD(0x17u, v10, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v9);
  if ( !v11 )
    goto LABEL_12;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
  a2->BindState.m_LastErrorCode = v11;
  if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    WPP_SF_DZq(
      0x18u,
      &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
      v11,
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
        goto LABEL_36;
      }
      v13 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0092623 < 4u )
      {
LABEL_36:
        v14 = (unsigned __int8)byte_1C0092623 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0x19u,
            &WPP_114284bbd43b3e03b71249c63194bfc4_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
        goto LABEL_38;
      }
      v13 = 13;
    }
    WPP_SF_Zq(v13, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
    goto LABEL_36;
  }
LABEL_38:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
