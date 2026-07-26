/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B8B64
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C004F5EC (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C0075D40 (WPP_SF_ZqD.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00B7178 (ndisInitializeMiniportRestartAttributes.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B85A4 (ndisPnPNotifyBindingUnlocked.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00BE8A0 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  __int64 m_numElements; // rax
  unsigned __int64 v8; // r14
  void **p; // rax
  __int64 v10; // r15
  KPushLock *p_m_lock; // r14
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  char v13; // bl
  bool m_isDirty; // al
  _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r15d
  unsigned int m_bindSources; // r8d
  unsigned int v20; // edx
  unsigned __int16 v21; // cx
  bool v22; // cf
  __int64 v23; // [rsp+30h] [rbp-99h]
  _QWORD v24[22]; // [rsp+40h] [rbp-89h] BYREF

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_Zq(
        0x16u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    v16 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
    v18 = v16;
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_ZqD(0x17u, v17, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v16);
    p_m_lock = &a1->BindEngine.m_lock;
    if ( !v18 )
      goto LABEL_13;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext);
    a2->BindState.m_LastErrorCode = v18;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_DZq(
        0x18u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        v18,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    }
    m_bindSources = a2->BindState.m_bindSources;
    v20 = m_bindSources & 0xFFFFFFFB;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
LABEL_41:
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
      return;
    }
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
    {
      WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v20);
      v20 = a2->BindState.m_bindSources;
    }
    if ( v20 )
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
        goto LABEL_39;
      }
      v21 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0099623 < 4u )
      {
LABEL_39:
        v22 = (unsigned __int8)byte_1C0099623 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v22 )
          WPP_SF_Zq(
            0x19u,
            &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
        goto LABEL_41;
      }
      v21 = 13;
    }
    WPP_SF_Zq(v21, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
    goto LABEL_39;
  }
  m_numElements = a2->BindState.m_bindContext.m_numElements;
  v8 = 0LL;
  v23 = m_numElements;
  while ( v8 != m_numElements )
  {
    if ( v8 >= a2->BindState.m_bindContext.m_numElements )
      __fastfail(5u);
    p = a2->BindState.m_bindContext._p;
    v10 = (__int64)p[v8];
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_Zqq(
        0x14u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport,
        p[v8]);
    memset(v24, 0, sizeof(v24));
    v24[0] = 11272832LL;
    *(_QWORD *)((char *)&v24[20] + 4) = 0LL;
    LODWORD(v24[20]) = 0;
    LODWORD(v24[1]) = 9;
    v24[2] = &a3->ProtocolParameters;
    LODWORD(v24[3]) = 56;
    ndisPnPNotifyBindingUnlocked(v10, (__int64)v24);
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_Zqq(
        0x15u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport,
        v10);
    m_numElements = v23;
    ++v8;
  }
  p_m_lock = &a1->BindEngine.m_lock;
LABEL_13:
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathRunning;
  v13 = 0;
  m_isDirty = a1->BindEngine.m_isDirty;
  do
  {
    m_miniport = a1->BindEngine.m_miniport;
    v13 |= m_isDirty;
    a1->BindEngine.m_isDirty = 0;
    Ndis::BindRules::Apply((Ndis::BindRules *)m_miniport, v12);
    m_isDirty = a1->BindEngine.m_isDirty;
  }
  while ( m_isDirty );
  a1->BindEngine.m_isDirty = v13;
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}
