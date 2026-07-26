/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00170C4 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001ACAC (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002302C (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C0024E7C (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C003A77C (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B24B4 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B29F4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B2F6C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B30BC (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B7060 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ @ 0x1C00B83C0 (-CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B8B64 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00BCEE0 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00BE8CC (ndisUpdateNoPauseOnSuspend.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C00BE954 (ndisUpdateMinimumStackVersion.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00BEE84 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF290 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFB6C (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C5090 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C7270 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00DBEBC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00FC958 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  KPushLock *p_m_lock; // r15
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  char v4; // si
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  bool m_isDirty; // al
  KLockHolder::<unnamed_type_m_State> m_State; // ebx
  char v8; // r14
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  _NDIS_MINIPORT_BLOCK *v10; // r14
  unsigned __int64 v11; // rbx
  __int64 m_numElements; // r15
  NDIS_BIND_PROTOCOL_LINK *Myptr; // rcx
  _NDIS_MINIPORT_BLOCK *v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  NDIS_BIND_FILTER_LINK *v17; // rcx
  _NDIS_MINIPORT_BLOCK *v18; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v19; // rax
  unsigned __int64 v20; // r15
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r13
  Ndis::BindState *p_BindState; // rbx
  _NDIS_MINIPORT_BLOCK *v23; // rbx
  __int64 v24; // r15
  unsigned __int64 v25; // rbx
  NDIS_BIND_FILTER_LINK *v26; // rcx
  unsigned __int64 v27; // r15
  NDIS_BIND_LINK_BASE *v28; // rcx
  __int64 v29; // r12
  unsigned __int64 i; // r15
  NDIS_BIND_LINK_BASE *v31; // rcx
  __int32 v32; // ebx
  _NDIS_MINIPORT_BLOCK *v34; // rbx
  struct _NDIS_MINIPORT_BLOCK *v35; // rcx
  _NDIS_MINIPORT_BLOCK *v36; // rcx
  unsigned __int64 v37; // rbx
  NDIS_BIND_FILTER_LINK *v38; // rcx
  _NDIS_MINIPORT_BLOCK *v39; // r13
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  NDIS_BIND_PROTOCOL_LINK *v42; // rax
  NDIS_BIND_PROTOCOL_LINK *v43; // rax
  _NDIS_MINIPORT_BLOCK *v44; // rbx
  Ndis::BindRegistry *v45; // rcx
  NDIS_BIND_LINK_BASE *v46; // rcx
  _NDIS_MINIPORT_BLOCK *v47; // rbx
  unsigned int v48; // edx
  int m_bindSources; // r8d
  unsigned int v50; // edx
  NDIS_BIND_LINK_BASE *m_currentOperation; // rbx
  _NDIS_MINIPORT_BLOCK *v52; // r13
  unsigned __int16 v53; // cx
  bool v54; // cf
  unsigned __int64 v55; // rbx
  Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >,1> *p_Filters; // rdi
  unsigned int v57; // edx
  NDIS_BIND_LINK_BASE **v58; // r8
  KLockHolder v59; // [rsp+38h] [rbp-D0h] BYREF
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v60; // [rsp+50h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-B0h]
  struct NDIS_RESTART_INFORMATION v62; // [rsp+68h] [rbp-A0h] BYREF

  *(_QWORD *)&v62.FilterInstanceBuffer.m_bufferSize = 0LL;
  v62.FilterInstanceBuffer._p = 0LL;
  memset(&v62, 0, 104);
  memset(&v62.RssCaps, 0, sizeof(v62.RssCaps));
  memset(&v62.ProtocolParameters, 0, 60);
  p_m_lock = &this->m_lock;
  v59.m_Lock = p_m_lock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
  m_miniport = this->m_miniport;
  v4 = 1;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&m_miniport->BindEngine.m_lock, 0LL);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KeEnterCriticalRegion();
  v59.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  m_isDirty = this->m_isDirty;
  m_State = Exclusive;
  v59.m_State = Exclusive;
  v8 = 0;
  this->m_currentOperation = 0LL;
  do
  {
    v9 = this->m_miniport;
    v8 |= m_isDirty;
    this->m_isDirty = 0;
    Ndis::BindRules::Apply(v9, v5);
    m_isDirty = this->m_isDirty;
  }
  while ( m_isDirty );
  this->m_isDirty = v8;
  if ( v8 )
    goto LABEL_54;
  v10 = this->m_miniport;
  v11 = 0LL;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v11 != m_numElements )
  {
    if ( v11 >= v10->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    Myptr = v10->Bindings.Protocols._p[v11]._Myptr;
    if ( Myptr->BindState.PretendBindingActive || Myptr->BindState.m_bindContext.m_numElements )
    {
      if ( Myptr->BindState.m_pauseReasons )
      {
        if ( Myptr->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)Myptr;
          KLockHolder::ReleaseExclusive(&v59);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v59);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_53;
        }
      }
    }
    ++v11;
  }
  v14 = this->m_miniport;
  v15 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v16 = v15 - 1;
    do
    {
      if ( v16 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(5u);
      v17 = this->m_miniport->Bindings.Filters._p[v16]._Myptr;
      if ( v17->BindState.PretendBindingActive || v17->BindState.m_bindContext.m_numElements )
      {
        if ( v17->BindState.m_pauseReasons )
        {
          if ( v17->BindState.m_actualPauseState == DatapathRunning )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v17;
            KLockHolder::ReleaseExclusive(&v59);
            ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
            KLockHolder::AcquireExclusive(&v59);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_53;
          }
        }
      }
      --v16;
      --v15;
    }
    while ( v15 );
    v14 = this->m_miniport;
  }
  v18 = v14;
  if ( v14->Bindings.Miniport.m_pauseReasons && v14->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v59);
    v47 = this->m_miniport;
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_q(0xDu, &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids, (__int64)this->m_miniport);
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisMPauseMiniportInner(v47, v48);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0099623 >= 4u )
      WPP_SF_q(0xEu, &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids, (__int64)v47);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&v47->BindEngine.m_lock, 0LL);
    v47->Bindings.Miniport.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&v47->BindEngine);
    KLockHolder::AcquireExclusive(&v59);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_53;
    v18 = this->m_miniport;
  }
  v19 = (wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *)v18->Bindings.Protocols.m_numElements;
  v20 = 0LL;
  v60 = v19;
  while ( (wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *)v20 != v19 )
  {
    if ( v20 >= v18->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    p = v18->Bindings.Protocols._p;
    p_BindState = &p[v20]._Myptr->BindState;
    if ( !p_BindState->m_unbindReasons
      || !p_BindState->PretendBindingActive && !p_BindState->m_bindContext.m_numElements )
    {
      goto LABEL_32;
    }
    m_bindSources = p_BindState->m_bindSources;
    v50 = m_bindSources & 0xFFFFFFFB;
    p_BindState->m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
      {
        WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_bindSources, v50);
        v50 = p_BindState->m_bindSources;
      }
      if ( v50 )
      {
        if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, p_BindState->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               p_BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          v53 = 12;
          goto LABEL_130;
        }
      }
      else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        v53 = 13;
LABEL_130:
        WPP_SF_Zq(v53, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
      }
      v54 = (unsigned __int8)byte_1C0099623 < 4u;
      p_BindState->Miniport->BindEngine.m_isDirty = 1;
      if ( !v54 )
        WPP_SF_Zq(
          0xAu,
          &WPP_c25d868f5db83f8f6eebf1a79db06235_Traceguids,
          &p[v20]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          p[v20]._Myptr->BindState.Miniport);
    }
    this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[v20];
    KLockHolder::ReleaseExclusive(&v59);
    m_currentOperation = this->m_currentOperation;
    v52 = this->m_miniport;
    if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved4.Buffer + 56) < 6u )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&v52->BindEngine.m_lock, 0LL);
      m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
      Ndis::BindEngine::EndPolicyUpdates(&v52->BindEngine);
    }
    m_currentOperation->BindState.PretendBindingActive = 0;
    ndisUnbindEachProtocolOpenOnMiniport(v52, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
    KLockHolder::AcquireExclusive(&v59);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_53;
LABEL_32:
    v19 = v60;
    ++v20;
  }
  v23 = this->m_miniport;
  v24 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v25 = v24 - 1;
    while ( 1 )
    {
      if ( v25 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(5u);
      v26 = this->m_miniport->Bindings.Filters._p[v25]._Myptr;
      if ( v26->BindState.m_unbindReasons )
      {
        if ( Ndis::BindState::GetActualBindingState(&v26->BindState) == BindingEnabled )
        {
          this->m_currentOperation = v46;
          KLockHolder::ReleaseExclusive(&v59);
          ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v59);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            break;
        }
      }
      --v25;
      if ( !--v24 )
      {
        v23 = this->m_miniport;
        goto LABEL_39;
      }
    }
  }
  else
  {
LABEL_39:
    v27 = 0LL;
    if ( v23->Bindings.Filters.m_numElements )
    {
      while ( 1 )
      {
        if ( v27 >= v23->Bindings.Filters.m_numElements )
          __fastfail(5u);
        v28 = &v23->Bindings.Filters._p[v27]._Myptr->NDIS_BIND_LINK_BASE;
        if ( !v28->BindState.m_unbindReasons
          && !v28->BindState.PretendBindingActive
          && !v28->BindState.m_bindContext.m_numElements )
        {
          this->m_currentOperation = v28;
          KLockHolder::ReleaseExclusive(&v59);
          ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v59);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            break;
        }
        v23 = this->m_miniport;
        if ( ++v27 >= this->m_miniport->Bindings.Filters.m_numElements )
          goto LABEL_45;
      }
    }
    else
    {
LABEL_45:
      v29 = v23->Bindings.Protocols.m_numElements;
      for ( i = 0LL; i != v29; ++i )
      {
        if ( i >= v23->Bindings.Protocols.m_numElements )
          __fastfail(5u);
        v31 = &v23->Bindings.Protocols._p[i]._Myptr->NDIS_BIND_LINK_BASE;
        if ( !v31->BindState.m_unbindReasons
          && !v31->BindState.PretendBindingActive
          && !v31->BindState.m_bindContext.m_numElements )
        {
          this->m_currentOperation = v31;
          KLockHolder::ReleaseExclusive(&v59);
          ndisBindProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v59);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_53;
        }
      }
      v34 = this->m_miniport;
      ndisUpdateMinimumStackVersion(this->m_miniport, 0LL, 0LL);
      ndisUpdateNoPauseOnSuspend(v34);
      v35 = this->m_miniport;
      if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
        && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathPaused )
      {
        KLockHolder::ReleaseExclusive(&v59);
        ndisMRestartMiniport(this->m_miniport, &v62);
        KLockHolder::AcquireExclusive(&v59);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_53;
        v35 = this->m_miniport;
      }
      ndisPostProcessRestartParametersAfterMiniport(v35, &v62);
      v36 = this->m_miniport;
      v37 = 0LL;
      if ( this->m_miniport->Bindings.Filters.m_numElements )
      {
        while ( 1 )
        {
          if ( v37 >= v36->Bindings.Filters.m_numElements )
            __fastfail(5u);
          v38 = v36->Bindings.Filters._p[v37]._Myptr;
          if ( (v38->BindState.PretendBindingActive || v38->BindState.m_bindContext.m_numElements)
            && !v38->BindState.m_pauseReasons
            && v38->BindState.m_actualPauseState == DatapathPaused )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v38;
            KLockHolder::ReleaseExclusive(&v59);
            ndisRestartFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation, &v62);
            KLockHolder::AcquireExclusive(&v59);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              break;
          }
          v36 = this->m_miniport;
          if ( ++v37 >= this->m_miniport->Bindings.Filters.m_numElements )
            goto LABEL_72;
        }
      }
      else
      {
LABEL_72:
        ndisPostProcessRestartParametersAfterFilters(v36, &v62);
        v39 = this->m_miniport;
        p_m_lock = (KPushLock *)v59.m_Lock;
        v40 = 0LL;
        v41 = this->m_miniport->Bindings.Protocols.m_numElements;
        v61 = v41;
        while ( v40 != v41 )
        {
          if ( v40 >= v39->Bindings.Protocols.m_numElements )
            __fastfail(5u);
          v60 = v39->Bindings.Protocols._p;
          v42 = v60[v40]._Myptr;
          if ( (v42->BindState.PretendBindingActive || v42->BindState.m_bindContext.m_numElements)
            && !v42->BindState.m_pauseReasons
            && v42->BindState.m_actualPauseState == DatapathPaused )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v42;
            ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
            KeLeaveCriticalRegion();
            ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation, &v62);
            KeEnterCriticalRegion();
            v59.m_Region.m_Entered = 1;
            ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
            this->m_currentOperation = 0LL;
            m_State = Exclusive;
            v59.m_State = Exclusive;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_54;
          }
          v43 = v60[v40++]._Myptr;
          v43->BindState.m_AdditionalContext = 0LL;
          v41 = v61;
        }
        ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v62);
        v44 = this->m_miniport;
        ndisUpdateMinimumStackVersion(this->m_miniport, 0LL, 0LL);
        ndisUpdateNoPauseOnSuspend(v44);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&this->m_miniport->MiniportOwner);
        if ( (unsigned int)Ndis::BindRegistry::CheckRegistryForFilterBindLogicMode(v45) == 1 )
        {
          v55 = 0LL;
          p_Filters = &this->m_miniport->Bindings.Filters;
          v57 = p_Filters->m_numElements;
          if ( v57 )
          {
            do
            {
              if ( v55 >= v57 )
                __fastfail(5u);
              if ( !Ndis::BindState::IsAlive(&p_Filters->_p[v55]._Myptr->BindState) )
              {
                wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(v58);
                Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
                  p_Filters,
                  (unsigned int)(v55 + 1),
                  (unsigned int)v55,
                  (unsigned int)(p_Filters->m_numElements - v55 - 1));
                v57 = --p_Filters->m_numElements;
                --v55;
              }
              ++v55;
            }
            while ( v55 < v57 );
          }
        }
        KLockHolder::ReleaseExclusive(&v59);
        v4 = 0;
      }
    }
  }
LABEL_53:
  p_m_lock = (KPushLock *)v59.m_Lock;
  m_State = v59.m_State;
LABEL_54:
  v32 = m_State - 1;
  if ( v32 )
  {
    if ( v32 == 1 )
    {
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      goto LABEL_57;
    }
  }
  else
  {
    KLockHolder::ReleaseShared(&v59);
  }
  if ( v59.m_Region.m_Entered )
LABEL_57:
    KeLeaveCriticalRegion();
  if ( v62.General.SupportedOidList )
    ExFreePoolWithTag(v62.General.SupportedOidList, 0);
  if ( v62.FilterInstanceBuffer._p )
    ExFreePoolWithTag(v62.FilterInstanceBuffer._p, 0x7272414Bu);
  return v4;
}
